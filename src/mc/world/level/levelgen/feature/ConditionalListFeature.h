#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class ConditionalListFeature : public ::IFeature {
public:
    // prevent constructor by default
    ConditionalListFeature& operator=(ConditionalListFeature const &) = delete;
    ConditionalListFeature(ConditionalListFeature const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?place@ConditionalListFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

    // vIndex: 2, symbol: ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const &);

    // symbol: ??0ConditionalListFeature@@QEAA@XZ
    MCAPI ConditionalListFeature();

    // NOLINTEND

};

