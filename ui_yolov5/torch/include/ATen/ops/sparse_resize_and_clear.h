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



#include <ATen/ops/sparse_resize_and_clear_ops.h>

namespace at {


// aten::sparse_resize_and_clear.out(Tensor self, int[] size, int sparse_dim, int dense_dim, *, Tensor(a!) out) -> Tensor(a!)
inline const at::Tensor & sparse_resize_and_clear_out(const at::Tensor & out, const at::Tensor & self, at::IntArrayRef size, int64_t sparse_dim, int64_t dense_dim) {
    return at::_ops::sparse_resize_and_clear_out::call(self, size, sparse_dim, dense_dim, out);
}

// aten::sparse_resize_and_clear.out(Tensor self, int[] size, int sparse_dim, int dense_dim, *, Tensor(a!) out) -> Tensor(a!)
inline const at::Tensor & sparse_resize_and_clear_outf(const at::Tensor & self, at::IntArrayRef size, int64_t sparse_dim, int64_t dense_dim, const at::Tensor & out) {
    return at::_ops::sparse_resize_and_clear_out::call(self, size, sparse_dim, dense_dim, out);
}

// aten::sparse_resize_and_clear(Tensor self, int[] size, int sparse_dim, int dense_dim) -> Tensor
inline at::Tensor sparse_resize_and_clear(const at::Tensor & self, at::IntArrayRef size, int64_t sparse_dim, int64_t dense_dim) {
    return at::_ops::sparse_resize_and_clear::call(self, size, sparse_dim, dense_dim);
}

}
