#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ShareItemsGoal : public ::Goal {
public:
    // prevent constructor by default
    ShareItemsGoal& operator=(ShareItemsGoal const &) = delete;
    ShareItemsGoal(ShareItemsGoal const &) = delete;
    ShareItemsGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@ShareItemsGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ShareItemsGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ShareItemsGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ShareItemsGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ShareItemsGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@ShareItemsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0ShareItemsGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MHM@Z
    MCAPI ShareItemsGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int32_t, float);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?selectEntityToShareWith@ShareItemsGoal@@IEAA?AU?$pair@HVItemStack@@@std@@AEBV?$vector@U?$pair@HVItemStack@@@std@@V?$allocator@U?$pair@HVItemStack@@@std@@@2@@3@@Z
    MCAPI std::pair<int32_t, class ItemStack> selectEntityToShareWith(std::vector<std::pair<int32_t, class ItemStack>> const &);

    // NOLINTEND

};

