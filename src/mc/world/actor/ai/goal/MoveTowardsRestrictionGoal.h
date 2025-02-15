#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveTowardsRestrictionGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveTowardsRestrictionGoal& operator=(MoveTowardsRestrictionGoal const &) = delete;
    MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal const &) = delete;
    MoveTowardsRestrictionGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?canContinueToUse@MoveTowardsRestrictionGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveTowardsRestrictionGoal@@UEAAXXZ
    virtual void start();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_randomizeWantedPositionTowardsRestriction@MoveTowardsRestrictionGoal@@IEAA_NAEBVVec3@@@Z
    MCAPI bool _randomizeWantedPositionTowardsRestriction(class Vec3 const &);

    // NOLINTEND

};

