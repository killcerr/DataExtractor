#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING& operator=(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 4, symbol: ?_handleCraftAction@CraftHandleNonImplemented_DEPRECATEDASKTYLAING@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);

    // NOLINTEND

};

