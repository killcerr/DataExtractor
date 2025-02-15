#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeAttackGoal& operator=(SlimeAttackGoal const &) = delete;
    SlimeAttackGoal(SlimeAttackGoal const &) = delete;
    SlimeAttackGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SlimeAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SlimeAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SlimeAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@SlimeAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@SlimeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0SlimeAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI SlimeAttackGoal(class Mob &);

    // NOLINTEND

};

