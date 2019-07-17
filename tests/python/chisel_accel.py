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
def matrix_multiply(A, B, w_width, a_width):
    assert A.shape[1] == B.shape[0], "can't perform multiplication"
    # print("\n B transposed")
    BT = B.transpose()
    cycles = 0
    C = np.zeros((A.shape[0], B.shape[1])).astype('uint64')
    for i in range(A.shape[0]):
        for j in range(B.shape[1]):
            # C[i, j] = A[i].dot(BT[j])
            print("A_sliced")
            A_sliced = slice(A[i], w_width)
            print("B_sliced")
            B_sliced = slice(BT[j], a_width)

            C[i, j] = compute(A_sliced, B_sliced, w_width, a_width)
            test = test_accel(A_sliced, B_sliced, w_width, a_width)
            cycles += test[1]
            print("SW serial & parallel")
            np.testing.assert_equal(C[i,j], A[i].astype('uint64').dot(BT[j]))
            print("SW & HW bit serial")
            np.testing.assert_equal(test[0], C[i, j])
            print("SW bit parallel & HW bit parallel")
            np.testing.assert_equal(test[0], A[i].astype('uint64').dot(BT[j]))
            print("pass one test\n")

    print("\ncomputed: ")
    print(C)
    print("cycles: " + str(cycles))
    return C

# takes 2 matrix input (sliced and packed)
def compute(A, B, w_width, a_width):
    assert A.shape[1] == B.shape[1], "sliced shape not match"
    # reset hardware accumulator
    accum = 0
    print(A.shape)
    for x in range(A.shape[0]):
        for y in range(B.shape[0]):
            # hardware implementation
            accum += np.uint64(A[x]).dot(np.uint64(B[y])) << np.uint64(x*w_width + y*a_width)
            print(A[x])
            print(B[y])
    # get value from accumulator
    # print(accum)
    return accum


def pack_8(A):
    newA = np.zeros(A.shape[0]).astype('uint64')
    for i in range(A.shape[0]):
        packNum = np.uint64(0)
        for j in range(A.shape[1]):
            packNum += np.uint64(A[i][j]) << np.uint64(8 * j)
        newA[i] = packNum
    np.set_printoptions(formatter={'int':hex})
    print(newA)
    return newA

def test_accel(A, B, w_width, a_width):
    assert A.shape[1] == B.shape[1], "sliced shape not match"

    ctx = tvm.cpu(0)
    f = tsim.load_module()

    a_arr = []
    b_arr = []
    packedA = pack_8(A)
    packedB = pack_8(B)
    dtype = 'uint64'
    for i in range(packedA.shape[0]):
        a_arr.append(tvm.nd.array(np.array([packedA[i]]).astype(dtype), ctx))

    for i in range(packedB.shape[0]):
        b_arr.append(tvm.nd.array(np.array([packedB[i]]).astype(dtype), ctx))

    cycles = 0
    print(a_arr)
    print(b_arr)
    print("here")

    accum = tvm.nd.array(np.array([0]).astype("uint64"), ctx)
    print(accum)
    for i in range(len(a_arr)):
        for j in range(len(b_arr)):
            print("im here")
            print(a_arr[i])
            print(b_arr[j])
            shift = np.uint8(i*w_width + j*a_width)
            cycles += f(a_arr[i], b_arr[j], shift, accum, np.uint32(1)) # reset accumulator
        print("\n")

    # cycles = f(a, b, c)
    # msg = "cycles:{0:4} n:{1:2} c:{2:2}".format(cycles, n, c)
    # np.testing.assert_equal(b.asnumpy(), a.asnumpy() + c, err_msg = "[FAIL] " + msg)
    # print("[PASS] " + msg)
    return (accum.asnumpy()[0], cycles)

def top_test(dtype, w_width, a_width):

    rmax = np.random.randint(256)
    # prevent generating empty matrix
    rrow = np.random.randint(31) + 1
    #rclmn = np.random.randint(31) + 1
    rrow2 = np.random.randint(31) + 1 

    rclmn = 8

    A = np.random.randint(rmax, size=(rrow,rclmn)).astype(dtype)
    B = np.random.randint(rmax, size=(rclmn,rrow2)).astype(dtype)

    print("A: ")
    print(A)
    print("\n")
    print("B: ")
    print(B)
    print("\n")
    matrix_multiply(A, B, w_width, a_width)

rmax = np.random.randint(128)
A = np.random.randint(rmax, size=(2,8)).astype("uint8")
B = np.random.randint(rmax, size=(8,2)).astype("uint8")

C = np.array([(1, 2, 3, 4, 5, 6, 7, 8), (1, 2, 3, 4, 5, 6, 7, 8)]).astype("uint8")
D = np.array([(1, 2), (3, 4), (5, 6), (7, 8), (1, 2), (3, 4), (5, 6), (7, 8)]).astype("uint8")

tsim.init("chisel")
matrix_multiply(C, D, 8, 4)
matrix_multiply(C, D, 8, 4)
matrix_multiply(C, D, 8, 2)


# if __name__ == "__main__":
#     tsim.init("chisel")
#     for i in range(1):
#         top_test("uint8",4, 2)
