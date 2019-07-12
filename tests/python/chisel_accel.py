# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.

import tvm
import numpy as np
import tsim

def slice(A, slice_width):
    assert np.log2(slice_width) % 1 == 0, "only power of 2 is supported"
    dtype = type(A[0]) 
    # print(dtype)
    row = 0
    # currently only supports uint
    if dtype is np.uint8: row = 8 // slice_width
    elif dtype is np.uint16: row = 16 // slice_width
    elif dtype is np.uint32: row = 32 // slice_width
    elif dtype is np.uint64: row = 64 // slice_width
    else: raise ValueError("datatype " + str(dtype) + "currently not supported")
    if (row >= 8):
        dtype = 'uint' + str(row)
    else:
        dtype = 'uint8'

    # print(row)
    C = np.zeros((row, len(A))).astype(dtype) # sliced and transform 

    # create mask
    slice_mask = 2**(slice_width)-1
    # print("slice_mask: " + hex(slice_mask))
    # slice and pack
    for x in range(len(A)):
        for y in range(row):
            # print("index: (" +str(row - y - 1) + ", " + str(x))
            # print("data: " + str((A[x] >> (row * y)) & slice_mask))
            C[y][x] = (np.uint64(A[x]) >> np.uint64(slice_width * y)) & np.uint64(slice_mask)
    print(C)
    return C


# A is a n*m matrix, B is a m*p matrix(not transposed yet)
def matrix_multiply(A, B, slice_width):
    assert A.shape[1] == B.shape[0], "can't perform multiplication"
    # print("\n B transposed")
    BT = B.transpose()
    cycles = 0
    C = np.zeros((A.shape[0], B.shape[1])).astype('uint64')
    for i in range(A.shape[0]):
        for j in range(B.shape[1]):
            # C[i, j] = A[i].dot(BT[j])
            print("A_sliced")
            A_sliced = slice(A[i], slice_width)
            print("B_sliced")
            B_sliced = slice(BT[j], slice_width)

            C[i, j] = compute(A_sliced, B_sliced, slice_width)
            test = test_accel(A_sliced, B_sliced, slice_width)
            cycles += test[1]
            print("SW serial & parallel")
            np.testing.assert_equal(C[i,j], A[i].astype('uint64').dot(BT[j]))
            print("SW & HW bit serial")
            np.testing.assert_equal(test[0], C[i, j])
            print("SW bit parallel & HW bit parallel")
            np.testing.assert_equal(test[0], A[i].astype('uint64').dot(BT[j]))
            print("\n")

    print("\ncomputed: ")
    print(C)
    print("cycles: " + str(cycles))
    return C

# takes 2 matrix input (sliced and packed)
def compute(A, B, slice_width):
    assert A.shape == B.shape, "sliced shape not match"
    # reset hardware accumulator
    accum = 0
    print(A.shape)
    for x in range(A.shape[0]):
        for y in range(A.shape[0]):
            # hardware implementation
            accum += np.uint64(A[x]).dot(np.uint64(B[y])) << np.uint64((x+y)*slice_width)
            print(A[x])
            print(B[y])
    # get value from accumulator
    # print(accum)
    return accum

def test_accel(A, B, slice_width):
    assert A.shape == B.shape, "sliced shape not match"

    dtype = A.dtype
    ctx = tvm.cpu(0)
    f = tsim.load_module()
    print(dtype)

    a_arr = []
    b_arr = []
    # print("this is driver array")
    for i in range(A.shape[0]):
        list_a = np.zeros(A.shape[1]).astype(dtype)
        list_b = np.zeros(A.shape[1]).astype(dtype)
        for j in range(A.shape[1]):
            list_a[j] = A[i][j]
            list_b[j] = B[i][j]
        # print("a[" + str(i) + "]")
        # print(list_a)
        # print("b[" + str(i) + "]")
        # print(list_b)
        a_arr.append(tvm.nd.array(list_a.astype(dtype), ctx))
        b_arr.append(tvm.nd.array(list_b.astype(dtype), ctx))

    cycles = 0
    print("here")

    accum = tvm.nd.array(np.array([0]).astype("uint64"), ctx)
    for i in range(len(a_arr)):
        for j in range(len(a_arr)):
            shift = np.uint8((i+j)*slice_width)
            if i == 0 and j == 0: 
                cycles += f(a_arr[i], b_arr[j], shift, accum, np.uint32(1)) # reset accumulator
            else: 
                cycles += f(a_arr[i], b_arr[j], shift, accum, np.uint32(0)) # no reset
            print(a_arr[i])
            print(b_arr[j])
        print("\n")

    # cycles = f(a, b, c)
    # msg = "cycles:{0:4} n:{1:2} c:{2:2}".format(cycles, n, c)
    # np.testing.assert_equal(b.asnumpy(), a.asnumpy() + c, err_msg = "[FAIL] " + msg)
    # print("[PASS] " + msg)
    return (accum.asnumpy()[0], cycles)

def top_test(dtype, slice_width):

    rmax = np.random.randint(256)
    # prevent generating empty matrix
    rrow = np.random.randint(31) + 1
    rclmn = np.random.randint(31) + 1
    rrow2 = np.random.randint(31) + 1 
    # rrow = 3
    # rclmn = 2
    # rrow2 = 3
    A = np.random.randint(rmax, size=(rrow,rclmn)).astype(dtype)
    B = np.random.randint(rmax, size=(rclmn,rrow2)).astype(dtype)

    print("A: ")
    print(A)
    print("\n")
    print("B: ")
    print(B)
    print("\n")
    matrix_multiply(A, B, slice_width)

rmax = np.random.randint(128)
A = np.random.randint(rmax, size=(2,3)).astype("uint8")
B = np.random.randint(rmax, size=(3,2)).astype("uint8")

C = np.array([(81, 16), (144, 24), (91, 33)]).astype("uint8")
D = np.array([(83, 131, 40), (53, 40, 65)]).astype("uint8")

tsim.init("chisel")
matrix_multiply(C, D, 8)
matrix_multiply(C, D, 4)


# if __name__ == "__main__":
#     tsim.init("chisel")
#     for i in range(3):
#         top_test("uint8",8)
