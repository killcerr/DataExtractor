#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class EntityComponentFactoryBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    EntityComponentFactoryBase& operator=(EntityComponentFactoryBase const &) = delete;
    EntityComponentFactoryBase(EntityComponentFactoryBase const &) = delete;
    EntityComponentFactoryBase() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1EntityComponentFactoryBase@@MEAA@XZ
    MCVAPI ~EntityComponentFactoryBase();

    // symbol: ?addComponents@EntityComponentFactoryBase@@QEBAXAEAVEntityRegistry@@AEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
    MCAPI void addComponents(class EntityRegistry &, class EntityContext &, class DefinitionInstanceGroup const &) const;

    // symbol: ?removeComponents@EntityComponentFactoryBase@@QEBAXAEAVEntityRegistry@@AEAVEntityContext@@AEBVDefinitionInstanceGroup@@@Z
    MCAPI void removeComponents(class EntityRegistry &, class EntityContext &, class DefinitionInstanceGroup const &) const;

    // NOLINTEND

};

