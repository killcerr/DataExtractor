#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherFossilFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherFossilFeature& operator=(NetherFossilFeature const &) = delete;
    NetherFossilFeature(NetherFossilFeature const &) = delete;
    NetherFossilFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@NetherFossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?STRUCTURE_LOCATION_FOSSIL@NetherFossilFeature@@0QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $STRUCTURE_LOCATION_FOSSIL() { return STRUCTURE_LOCATION_FOSSIL; }

    // NOLINTEND

};

