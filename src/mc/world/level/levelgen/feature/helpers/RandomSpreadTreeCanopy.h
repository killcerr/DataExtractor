#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class RandomSpreadTreeCanopy : public ::ITreeCanopy {
public:
    // RandomSpreadTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on
    
    // RandomSpreadTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const &) = delete;
        WeightedBlockReference(WeightedBlockReference const &) = delete;
        WeightedBlockReference() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1WeightedBlockReference@RandomSpreadTreeCanopy@@QEAA@XZ
        MCAPI ~WeightedBlockReference();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    RandomSpreadTreeCanopy& operator=(RandomSpreadTreeCanopy const &) = delete;
    RandomSpreadTreeCanopy(RandomSpreadTreeCanopy const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?placeCanopy@RandomSpreadTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
    virtual std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

    // symbol: ??0RandomSpreadTreeCanopy@@QEAA@XZ
    MCAPI RandomSpreadTreeCanopy();

    // NOLINTEND

};

