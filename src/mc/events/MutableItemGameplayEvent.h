#pragma once

#include "mc/_HeaderOutputPredefine.h"

template<typename T0>
struct MutableItemGameplayEvent {
public:
    // prevent constructor by default
    MutableItemGameplayEvent& operator=(MutableItemGameplayEvent const &) = delete;
    MutableItemGameplayEvent(MutableItemGameplayEvent const &) = delete;
    MutableItemGameplayEvent() = delete;

};

