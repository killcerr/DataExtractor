#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomLookAroundGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomLookAroundGoal& operator=(RandomLookAroundGoal const &) = delete;
    RandomLookAroundGoal(RandomLookAroundGoal const &) = delete;
    RandomLookAroundGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@RandomLookAroundGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomLookAroundGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RandomLookAroundGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@RandomLookAroundGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@RandomLookAroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0RandomLookAroundGoal@@QEAA@AEAVMob@@HHMMM@Z
    MCAPI RandomLookAroundGoal(class Mob &, int32_t, int32_t, float, float, float);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_setRandomLook@RandomLookAroundGoal@@IEAAXXZ
    MCAPI void _setRandomLook();

    // NOLINTEND

};

