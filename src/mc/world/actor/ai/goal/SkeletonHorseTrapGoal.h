#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SkeletonHorseTrapGoal : public ::Goal {
public:
    // prevent constructor by default
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SkeletonHorseTrapGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@SkeletonHorseTrapGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@SkeletonHorseTrapGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@SkeletonHorseTrapGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0SkeletonHorseTrapGoal@@QEAA@AEAVHorse@@HM@Z
    MCAPI SkeletonHorseTrapGoal(class Horse &, int32_t, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createHorse@SkeletonHorseTrapGoal@@AEAAPEAVHorse@@AEBW4Difficulty@@@Z
    MCAPI class Horse * _createHorse(::Difficulty const &);

    // symbol: ?_createSkeleton@SkeletonHorseTrapGoal@@AEAAPEAVSkeleton@@AEBW4Difficulty@@AEBVHorse@@@Z
    MCAPI class Skeleton * _createSkeleton(::Difficulty const &, class Horse const &);

    // NOLINTEND

};

