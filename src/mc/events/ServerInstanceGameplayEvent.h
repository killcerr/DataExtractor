#pragma once

#include "mc/_HeaderOutputPredefine.h"

template<typename T0>
struct ServerInstanceGameplayEvent {
public:
    // prevent constructor by default
    ServerInstanceGameplayEvent& operator=(ServerInstanceGameplayEvent const &) = delete;
    ServerInstanceGameplayEvent(ServerInstanceGameplayEvent const &) = delete;
    ServerInstanceGameplayEvent() = delete;

};

