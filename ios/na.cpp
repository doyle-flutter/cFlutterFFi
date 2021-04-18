//
//  na.cpp
//  Runner
//
//  Created by doyle kim on 2021/04/19.
//

#include "na.hpp"
#include <stdint.h>

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t native_add(int32_t x, int32_t y) {
    return x + y;
}