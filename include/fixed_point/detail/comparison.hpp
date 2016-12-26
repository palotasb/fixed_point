#ifndef _HAS_CASTLE__FIXED_POINT__COMPARISON_H
#define _HAS_CASTLE__FIXED_POINT__COMPARISON_H

#include "base.hpp"

namespace has_castle
{
namespace fixed_point
{

// ================================
// Comparison operators
// ================================

template <typename Lhs, typename Rhs, typename = std::enable_if<Lhs::frac_bits::value == Rhs::frac_bits::value>>
constexpr bool operator<(const Lhs &lhs, const Rhs &rhs) noexcept
{
    return lhs.raw_value() < rhs.raw_value();
}

template <typename Lhs, typename Rhs, typename = std::enable_if<Lhs::frac_bits::value == Rhs::frac_bits::value>>
constexpr bool operator>(const Lhs &lhs, const Rhs &rhs) noexcept
{
    return lhs.raw_value() > rhs.raw_value();
}

template <typename Lhs, typename Rhs, typename = std::enable_if<Lhs::frac_bits::value == Rhs::frac_bits::value>>
constexpr bool operator<=(const Lhs &lhs, const Rhs &rhs) noexcept
{
    return lhs.raw_value() <= rhs.raw_value();
}

template <typename Lhs, typename Rhs, typename = std::enable_if<Lhs::frac_bits::value == Rhs::frac_bits::value>>
constexpr bool operator>=(const Lhs &lhs, const Rhs &rhs) noexcept
{
    return lhs.raw_value() >= rhs.raw_value();
}

template <typename Lhs, typename Rhs, typename = std::enable_if<Lhs::frac_bits::value == Rhs::frac_bits::value>>
constexpr bool operator==(const Lhs &lhs, const Rhs &rhs) noexcept
{
    return lhs.raw_value() == rhs.raw_value();
}

template <typename Lhs, typename Rhs, typename = std::enable_if<Lhs::frac_bits::value == Rhs::frac_bits::value>>
constexpr bool operator!=(const Lhs &lhs, const Rhs &rhs) noexcept
{
    return lhs.raw_value() != rhs.raw_value();
}

template <typename Lhs>
inline auto operator!(Lhs& lhs) noexcept
    -> fixed_point<Lhs::frac_bits::value, decltype(!lhs.raw_value())>
{
    return {!lhs.raw_value(), 0};
}

} // namespace fixed_point
} // namespace has_castle

#endif // _HAS_CASTLE__FIXED_POINT__COMPARISON_H