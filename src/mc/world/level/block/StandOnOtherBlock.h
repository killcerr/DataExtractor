#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StandOnOtherBlock {
public:
    // prevent constructor by default
    StandOnOtherBlock& operator=(StandOnOtherBlock const &) = delete;
    StandOnOtherBlock(StandOnOtherBlock const &) = delete;
    StandOnOtherBlock() = delete;

};

