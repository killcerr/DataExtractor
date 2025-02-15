#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateInstance {
public:
    // prevent constructor by default
    BlockStateInstance& operator=(BlockStateInstance const &) = delete;
    BlockStateInstance(BlockStateInstance const &) = delete;
    BlockStateInstance() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initState@BlockStateInstance@@QEAAXAEAIIIAEBVBlockState@@@Z
    MCAPI void initState(uint32_t &, uint32_t, uint32_t, class BlockState const &);

    // symbol: ?isValidData@BlockStateInstance@@QEBA_NI@Z
    MCAPI bool isValidData(uint32_t) const;

    // NOLINTEND

};

