#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CactusBlockFlag {
public:
    // prevent constructor by default
    CactusBlockFlag& operator=(CactusBlockFlag const &) = delete;
    CactusBlockFlag(CactusBlockFlag const &) = delete;
    CactusBlockFlag() = delete;

};

