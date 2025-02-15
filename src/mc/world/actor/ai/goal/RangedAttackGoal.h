#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RangedAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const &) = delete;
    RangedAttackGoal(RangedAttackGoal const &) = delete;
    RangedAttackGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@RangedAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RangedAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RangedAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RangedAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RangedAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@RangedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0RangedAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI RangedAttackGoal(class Mob &);

    // symbol: ?handleAttackBehavior@RangedAttackGoal@@QEAAXPEAVActor@@AEBVVec3@@M_N@Z
    MCAPI void handleAttackBehavior(class Actor *, class Vec3 const &, float, bool);

    // NOLINTEND

};

