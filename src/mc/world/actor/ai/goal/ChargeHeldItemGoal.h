#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ChargeHeldItemGoal : public ::Goal {
public:
    // prevent constructor by default
    ChargeHeldItemGoal& operator=(ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal(ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@ChargeHeldItemGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ChargeHeldItemGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ChargeHeldItemGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ChargeHeldItemGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ChargeHeldItemGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@ChargeHeldItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0ChargeHeldItemGoal@@QEAA@AEAVMob@@@Z
    MCAPI ChargeHeldItemGoal(class Mob &);

    // NOLINTEND

};

