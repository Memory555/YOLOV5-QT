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



#include <ATen/ops/huber_loss_ops.h>

namespace at {


// aten::huber_loss.out(Tensor self, Tensor target, int reduction=Mean, float delta=1.0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & huber_loss_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & target, int64_t reduction=at::Reduction::Mean, double delta=1.0) {
    return at::_ops::huber_loss_out::call(self, target, reduction, delta, out);
}

// aten::huber_loss.out(Tensor self, Tensor target, int reduction=Mean, float delta=1.0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & huber_loss_outf(const at::Tensor & self, const at::Tensor & target, int64_t reduction, double delta, at::Tensor & out) {
    return at::_ops::huber_loss_out::call(self, target, reduction, delta, out);
}

// aten::huber_loss(Tensor self, Tensor target, int reduction=Mean, float delta=1.0) -> Tensor
inline at::Tensor huber_loss(const at::Tensor & self, const at::Tensor & target, int64_t reduction=at::Reduction::Mean, double delta=1.0) {
    return at::_ops::huber_loss::call(self, target, reduction, delta);
}

}
