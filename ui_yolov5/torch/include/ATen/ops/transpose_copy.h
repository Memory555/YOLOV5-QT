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



#include <ATen/ops/transpose_copy_ops.h>

namespace at {


// aten::transpose_copy.int(Tensor self, int dim0, int dim1) -> Tensor
inline at::Tensor transpose_copy(const at::Tensor & self, int64_t dim0, int64_t dim1) {
    return at::_ops::transpose_copy_int::call(self, dim0, dim1);
}

// aten::transpose_copy.int_out(Tensor self, int dim0, int dim1, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & transpose_copy_out(at::Tensor & out, const at::Tensor & self, int64_t dim0, int64_t dim1) {
    return at::_ops::transpose_copy_int_out::call(self, dim0, dim1, out);
}

// aten::transpose_copy.int_out(Tensor self, int dim0, int dim1, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & transpose_copy_outf(const at::Tensor & self, int64_t dim0, int64_t dim1, at::Tensor & out) {
    return at::_ops::transpose_copy_int_out::call(self, dim0, dim1, out);
}

}
