#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IItemComponentLegacyFactoryData.h"
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct FoodItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // prevent constructor by default
    FoodItemComponentLegacyFactoryData& operator=(FoodItemComponentLegacyFactoryData const &) = delete;
    FoodItemComponentLegacyFactoryData(FoodItemComponentLegacyFactoryData const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0FoodItemComponentLegacyFactoryData@@QEAA@XZ
    MCAPI FoodItemComponentLegacyFactoryData();

    // symbol: ?bindType@FoodItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<::AllExperiments> const &, std::optional<class SemVersion>);

    // NOLINTEND

};

