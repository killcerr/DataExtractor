#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class NearestPrioritizedAttackableTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    NearestPrioritizedAttackableTargetGoal& operator=(NearestPrioritizedAttackableTargetGoal const &) = delete;
    NearestPrioritizedAttackableTargetGoal(NearestPrioritizedAttackableTargetGoal const &) = delete;
    NearestPrioritizedAttackableTargetGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 7, symbol: ?appendDebugInfo@NearestPrioritizedAttackableTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // vIndex: 11, symbol: ?_findTarget@NearestPrioritizedAttackableTargetGoal@@EEAA?AUActorUniqueID@@PEAPEBUMobDescriptor@@@Z
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);

    // symbol: ??0NearestPrioritizedAttackableTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MH_NH22HM2H2@Z
    MCAPI NearestPrioritizedAttackableTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int32_t, bool, int32_t, bool, bool, int32_t, float, bool, int32_t, bool);

    // NOLINTEND

};

