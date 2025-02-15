#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

class DefendTrustedTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // prevent constructor by default
    DefendTrustedTargetGoal& operator=(DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal(DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@DefendTrustedTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@DefendTrustedTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol: ?appendDebugInfo@DefendTrustedTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0DefendTrustedTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MH_NHW4LevelSoundEvent@@AEBVActorDefinitionTrigger@@@Z
    MCAPI DefendTrustedTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int32_t, bool, int32_t, ::LevelSoundEvent, class ActorDefinitionTrigger const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findTrustedTarget@DefendTrustedTargetGoal@@AEAA?AUActorUniqueID@@AEBVTrustComponent@@@Z
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const &);

    // NOLINTEND

};

