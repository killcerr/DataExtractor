#pragma once

#include "mc/_HeaderOutputPredefine.h"

template<int T0>
class AggregateFeature {
public:
    // prevent constructor by default
    AggregateFeature& operator=(AggregateFeature const &) = delete;
    AggregateFeature(AggregateFeature const &) = delete;
    AggregateFeature() = delete;

};

