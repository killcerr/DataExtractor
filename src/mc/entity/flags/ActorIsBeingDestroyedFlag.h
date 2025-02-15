#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorIsBeingDestroyedFlag {
public:
    // prevent constructor by default
    ActorIsBeingDestroyedFlag& operator=(ActorIsBeingDestroyedFlag const &) = delete;
    ActorIsBeingDestroyedFlag(ActorIsBeingDestroyedFlag const &) = delete;
    ActorIsBeingDestroyedFlag() = delete;

};

