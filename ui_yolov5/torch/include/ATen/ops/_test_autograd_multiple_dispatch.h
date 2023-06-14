#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_test_autograd_multiple_dispatch_ops.h>

namespace at {


// aten::_test_autograd_multiple_dispatch.fullcoverage(Tensor self) -> Tensor
inline at::Tensor _test_autograd_multiple_dispatch(const at::Tensor & self) {
    return at::_ops::_test_autograd_multiple_dispatch_fullcoverage::call(self);
}

// aten::_test_autograd_multiple_dispatch.ntonly(Tensor self, bool b) -> Tensor
inline at::Tensor _test_autograd_multiple_dispatch(const at::Tensor & self, bool b) {
    return at::_ops::_test_autograd_multiple_dispatch_ntonly::call(self, b);
}

// aten::_test_autograd_multiple_dispatch.fullcoverage_out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _test_autograd_multiple_dispatch_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::_test_autograd_multiple_dispatch_fullcoverage_out::call(self, out);
}

// aten::_test_autograd_multiple_dispatch.fullcoverage_out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _test_autograd_multiple_dispatch_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::_test_autograd_multiple_dispatch_fullcoverage_out::call(self, out);
}

}
