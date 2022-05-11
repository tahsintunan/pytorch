#pragma once
#include <c10/macros/Macros.h>
#include <cstring>

namespace c10 {
namespace detail {

template <typename T>
struct LoadImpl {
  C10_HOST_DEVICE static T apply(const void* src) {
    return *reinterpret_cast<const T*>(src);
  }
};

template <>
struct LoadImpl<bool> {
  C10_HOST_DEVICE static bool apply(const void* src) {
    static_assert(sizeof(bool) == sizeof(char), "");
    // Protect against invalid boolean values by loading as a byte
    // first, then converting to bool (see gh-54789).
    unsigned char tmp = 0;
    std::memcpy(&tmp, src, sizeof(bool));
    return tmp;
  }
};

} // namespace detail

template <typename T>
C10_HOST_DEVICE T load(const void* src) {
  return c10::detail::LoadImpl<T>::apply(src);
}

} // namespace c10
