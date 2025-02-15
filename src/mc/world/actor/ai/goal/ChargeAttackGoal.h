#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ChargeAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    ChargeAttackGoal& operator=(ChargeAttackGoal const &) = delete;
    ChargeAttackGoal(ChargeAttackGoal const &) = delete;
    ChargeAttackGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@ChargeAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ChargeAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ChargeAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ChargeAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ChargeAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@ChargeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0ChargeAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI ChargeAttackGoal(class Mob &);

    // NOLINTEND

};

