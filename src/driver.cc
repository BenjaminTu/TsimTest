/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <tvm/runtime/module.h>
#include <tvm/runtime/registry.h>
#include <vta/dpi/module.h>

namespace vta {
namespace driver {

uint32_t get_half_addr(void *p, bool upper) {
  if (upper) {
    return ((uint64_t) ((uint64_t*) p)) >> 32;
  } else {
    return ((uint64_t) ((uint64_t*) p));
  }
}

using vta::dpi::DPIModuleNode;
using tvm::runtime::Module;

class DPILoader {
 public:
  ~DPILoader() {
    dpi_->SimResume();
    dpi_->SimFinish();
  }

  void Init(Module module) {
    mod_ = module;
    dpi_ = this->Get();
    dpi_->SimLaunch();
    dpi_->SimWait();
  }

  DPIModuleNode* Get() {
    return static_cast<DPIModuleNode*>(mod_.operator->());
  }

  static DPILoader* Global() {
    static DPILoader inst;
    return &inst;
  }

  // TVM module
  Module mod_;
  // DPI Module
  DPIModuleNode* dpi_{nullptr};
};

class Device {
 public:
  Device() {
    loader_ = DPILoader::Global();
  }

  uint32_t Run(uint32_t length, void* inp1, void* inp2, uint32_t shiftVal, void* out, uint32_t reset) {
    uint32_t cycles;
    this->Init();
    this->Launch(length, inp1, inp2, shiftVal, out, reset);
    cycles = this->WaitForCompletion();
    return cycles;
  }

 private:
  void Init() {
    dpi_ = loader_->Get();
    dpi_->SimResume();
  }

  void Launch(uint32_t length, void* inp1, void* inp2, uint32_t shiftVal, void* out, uint32_t reset) {
    dpi_->WriteReg(0x08, shiftVal);
    dpi_->WriteReg(0x0c, length); // vector length

    dpi_->WriteReg(0x18, get_half_addr(inp1, false));
    dpi_->WriteReg(0x1c, get_half_addr(inp1, true));

    dpi_->WriteReg(0x20, get_half_addr(inp2, false));
    dpi_->WriteReg(0x24, get_half_addr(inp2, true));
    dpi_->WriteReg(0x28, get_half_addr(out, false));
    dpi_->WriteReg(0x2c, get_half_addr(out, true));
    dpi_->WriteReg(0x00, 0x1); // launch

    if (reset == 1) {
      dpi_->WriteReg(0x10, 0x1); // reset accum
      dpi_->WriteReg(0x10, 0x0); // stop reset accum
    }
    dpi_->WriteReg(0x14, 0x1); // reset dot
    dpi_->WriteReg(0x14, 0x0); // stop reset dot
  }

  uint32_t WaitForCompletion() {
    uint32_t i, val;
    for (i = 0; i < wait_cycles_; i++) {
      val = dpi_->ReadReg(0x00);
      if (val == 2) break; // finish
    }
    val = dpi_->ReadReg(0x04);
    dpi_->SimWait();
    return val;
  }

  // wait cycles
  uint32_t wait_cycles_{100000000};
  // DPI loader
  DPILoader* loader_{nullptr};
  // DPI Module
  DPIModuleNode* dpi_{nullptr};
};

using tvm::runtime::TVMRetValue;
using tvm::runtime::TVMArgs;

TVM_REGISTER_GLOBAL("tvm.vta.tsim.init")
.set_body([](TVMArgs args, TVMRetValue* rv) {
    Module m = args[0];
    DPILoader::Global()->Init(m);
  });

TVM_REGISTER_GLOBAL("tvm.vta.driver")
.set_body([](TVMArgs args, TVMRetValue* rv) {
    DLTensor* A = args[0];
    DLTensor* B = args[1];
    DLTensor* C = args[3];
    Device dev_;
    printf("\nA:\n");
    for (int i = 0; i < A->shape[0]; i++) {
      printf("%hhu, ", (static_cast<uint8_t*>(A->data))[i]);
    }
    printf("\nB:\n");
    for (int i = 0; i < B->shape[0]; i++) {
      printf("%hhu, ", (static_cast<uint8_t*>(B->data))[i]);
    }
    printf("\nC:\n");
    for (int i = 0; i < C->shape[0]; i++) {
      printf("%llu, \n ", (static_cast<uint64_t*>(C->data))[i]);
    }
    printf("\n shiftVal: %d\n", static_cast<int>(args[2]));
    printf("\n");


    uint32_t cycles = dev_.Run(A->shape[0], A->data, B->data, static_cast<int>(args[2]), C->data, static_cast<int>(args[4]));
    *rv = static_cast<int>(cycles);
  });

}  // namespace driver
}  // namespace vta
