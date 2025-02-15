#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class MaterialReducerInputValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    MaterialReducerInputValidation& operator=(MaterialReducerInputValidation const &) = delete;
    MaterialReducerInputValidation(MaterialReducerInputValidation const &) = delete;
    MaterialReducerInputValidation() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int32_t) const;

    // vIndex: 2, symbol: ?isItemAllowedInSlot@MaterialReducerInputValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int32_t, class ItemStackBase const &, int32_t) const;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: ?isItemAllowedToAdd@MaterialReducerInputValidation@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?getContainerOffset@MaterialReducerInputValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int32_t getContainerOffset(class ContainerScreenContext const &) const;

    // symbol: ?canDestroy@MaterialReducerInputValidation@@UEBA_NAEBVContainerScreenContext@@@Z
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;

    // symbol: ?getAvailableSetCount@MaterialReducerInputValidation@@UEBAHHAEBVItemStackBase@@@Z
    MCVAPI int32_t getAvailableSetCount(int32_t, class ItemStackBase const &) const;

    // symbol: ??0MaterialReducerInputValidation@@QEAA@AEBVContainerScreenContext@@@Z
    MCAPI MaterialReducerInputValidation(class ContainerScreenContext const &);

    // NOLINTEND

};

