#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class RuinedPortalFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    RuinedPortalFeature& operator=(RuinedPortalFeature const &) = delete;
    RuinedPortalFeature(RuinedPortalFeature const &) = delete;
    RuinedPortalFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?getNearestGeneratedFeature@RuinedPortalFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool, std::optional<class HashedString> const &);

    // vIndex: 5, symbol: ?isFeatureChunk@RuinedPortalFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, uint32_t, class IPreliminarySurfaceProvider const &, class Dimension const &);

    // vIndex: 6, symbol: ?createStructureStart@RuinedPortalFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);

    // symbol: ??0RuinedPortalFeature@@QEAA@I_N@Z
    MCAPI RuinedPortalFeature(uint32_t, bool);

    // NOLINTEND

};

