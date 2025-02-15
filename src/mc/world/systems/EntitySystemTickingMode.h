#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySystemTickingMode {
public:
    // prevent constructor by default
    EntitySystemTickingMode& operator=(EntitySystemTickingMode const &) = delete;
    EntitySystemTickingMode(EntitySystemTickingMode const &) = delete;
    EntitySystemTickingMode() = delete;

};

