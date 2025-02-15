#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimulatedPlayerPostAIStepSystem {
public:
    // prevent constructor by default
    SimulatedPlayerPostAIStepSystem& operator=(SimulatedPlayerPostAIStepSystem const &) = delete;
    SimulatedPlayerPostAIStepSystem(SimulatedPlayerPostAIStepSystem const &) = delete;
    SimulatedPlayerPostAIStepSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SimulatedPlayerPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_doSimulatedPlayerPostAIStepSystem@SimulatedPlayerPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doSimulatedPlayerPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

    // NOLINTEND

};

