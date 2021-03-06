//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <string>

// template<> struct char_traits<wchar_t>

// static constexpr int_type to_int_type(char_type c);

#include <string>
#include <cassert>

int main()
{
    assert(std::char_traits<wchar_t>::to_int_type(L'a') == L'a');
    assert(std::char_traits<wchar_t>::to_int_type(L'A') == L'A');
    assert(std::char_traits<wchar_t>::to_int_type(0) == 0);
}
