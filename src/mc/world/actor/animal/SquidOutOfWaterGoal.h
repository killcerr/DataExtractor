#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SquidOutOfWaterGoal : public ::Goal {
public:
    // prevent constructor by default
    SquidOutOfWaterGoal& operator=(SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal(SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SquidOutOfWaterGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SquidOutOfWaterGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SquidOutOfWaterGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SquidOutOfWaterGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SquidOutOfWaterGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@SquidOutOfWaterGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // NOLINTEND

};

