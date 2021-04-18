//
// Created by doyle kim on 4/18/21.
//

#include "native_add.h"
#include <stdint.h>

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t native_add(int32_t x, int32_t y) {
    return x + y;
}