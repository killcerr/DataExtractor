#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveTowardsTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveTowardsTargetGoal& operator=(MoveTowardsTargetGoal const &) = delete;
    MoveTowardsTargetGoal(MoveTowardsTargetGoal const &) = delete;
    MoveTowardsTargetGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@MoveTowardsTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveTowardsTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveTowardsTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveTowardsTargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol: ?appendDebugInfo@MoveTowardsTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0MoveTowardsTargetGoal@@QEAA@AEAVMob@@MM@Z
    MCAPI MoveTowardsTargetGoal(class Mob &, float, float);

    // NOLINTEND

};

