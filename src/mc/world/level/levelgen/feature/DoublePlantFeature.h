#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DoublePlantType.h"
#include "mc/world/level/levelgen/feature/Feature.h"

class DoublePlantFeature : public ::Feature {
public:
    // prevent constructor by default
    DoublePlantFeature& operator=(DoublePlantFeature const &) = delete;
    DoublePlantFeature(DoublePlantFeature const &) = delete;
    DoublePlantFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@DoublePlantFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

    // symbol: ?place@DoublePlantFeature@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@W4DoublePlantType@@@Z
    MCAPI bool place(class BlockSource &, class BlockPos const &, class Random &, ::DoublePlantType) const;

    // NOLINTEND

};

