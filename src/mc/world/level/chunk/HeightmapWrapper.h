#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeightmapWrapper {
public:
    // prevent constructor by default
    HeightmapWrapper& operator=(HeightmapWrapper const &) = delete;
    HeightmapWrapper(HeightmapWrapper const &) = delete;
    HeightmapWrapper() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?empty@HeightmapWrapper@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?getHeightAt@HeightmapWrapper@@QEBAFAEBVPos@@@Z
    MCAPI int16_t getHeightAt(class Pos const &) const;

    // symbol: ?create@HeightmapWrapper@@SA?AV1@PEBV?$vector@FV?$allocator@F@std@@@std@@F@Z
    MCAPI static class HeightmapWrapper create(std::vector<int16_t> const *, int16_t);

    // NOLINTEND

};

