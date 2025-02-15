#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BreatheAirGoal : public ::Goal {
public:
    // prevent constructor by default
    BreatheAirGoal& operator=(BreatheAirGoal const &) = delete;
    BreatheAirGoal(BreatheAirGoal const &) = delete;
    BreatheAirGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@BreatheAirGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BreatheAirGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@BreatheAirGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@BreatheAirGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@BreatheAirGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@BreatheAirGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0BreatheAirGoal@@QEAA@AEAVMob@@@Z
    MCAPI BreatheAirGoal(class Mob &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_determineApproximateDepth@BreatheAirGoal@@AEAAHXZ
    MCAPI int32_t _determineApproximateDepth();

    // symbol: ?_findAirPosition@BreatheAirGoal@@AEAAXXZ
    MCAPI void _findAirPosition();

    // NOLINTEND

};

