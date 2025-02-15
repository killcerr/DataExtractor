#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwimIdleGoal : public ::Goal {
public:
    // prevent constructor by default
    SwimIdleGoal& operator=(SwimIdleGoal const &) = delete;
    SwimIdleGoal(SwimIdleGoal const &) = delete;
    SwimIdleGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SwimIdleGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SwimIdleGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SwimIdleGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@SwimIdleGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@SwimIdleGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // NOLINTEND

};

