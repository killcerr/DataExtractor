#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class OcelotAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    OcelotAttackGoal& operator=(OcelotAttackGoal const &) = delete;
    OcelotAttackGoal(OcelotAttackGoal const &) = delete;
    OcelotAttackGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@OcelotAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@OcelotAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 5, symbol: ?stop@OcelotAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@OcelotAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@OcelotAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0OcelotAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI OcelotAttackGoal(class Mob &);

    // NOLINTEND

};

