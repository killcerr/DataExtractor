#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeRoots {
public:
    // prevent constructor by default
    MangroveTreeRoots& operator=(MangroveTreeRoots const &) = delete;
    MangroveTreeRoots(MangroveTreeRoots const &) = delete;
    MangroveTreeRoots() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?placeRoots@MangroveTreeRoots@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@@Z
    virtual std::optional<class BlockPos> placeRoots(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int32_t, class RenderParams &, struct TreeHelper::TreeParams const &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canPlaceRoot@MangroveTreeRoots@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool _canPlaceRoot(class IBlockWorldGenAPI &, class BlockPos const &) const;

    // symbol: ?_placeRoot@MangroveTreeRoots@@AEBAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void _placeRoot(class IBlockWorldGenAPI &, class BlockPos const &, class Random &) const;

    // symbol: ?_potentialRootPositions@MangroveTreeRoots@@AEBA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@EAEAVRandom@@0@Z
    MCAPI std::vector<class BlockPos> _potentialRootPositions(class BlockPos const &, uint8_t, class Random &, class BlockPos const &) const;

    // symbol: ?_simulateRoots@MangroveTreeRoots@@AEBA_NAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@2EPEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@HAEBUTreeParams@TreeHelper@@@Z
    MCAPI bool _simulateRoots(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, class BlockPos const &, uint8_t, std::vector<class BlockPos> *, int32_t, struct TreeHelper::TreeParams const &) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?RANDOM_SKEW_CHANCE@MangroveTreeRoots@@0MB
    MCAPI static float const RANDOM_SKEW_CHANCE;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $RANDOM_SKEW_CHANCE() { return RANDOM_SKEW_CHANCE; }

    // NOLINTEND

};

