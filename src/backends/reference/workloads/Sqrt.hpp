//
// Copyright © 2019 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <iostream>

namespace armnn
{
    template<typename T>
struct sqrt : public std::unary_function<T, T>
    {
        T
        operator () (const T&  inputData) const
        {
            return std::sqrt(inputData);
        }
    };

} //namespace armnn
