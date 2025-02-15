#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class BeaconPaymentContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    BeaconPaymentContainerValidation& operator=(BeaconPaymentContainerValidation const &) = delete;
    BeaconPaymentContainerValidation(BeaconPaymentContainerValidation const &) = delete;
    BeaconPaymentContainerValidation() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int32_t) const;

    // vIndex: 2, symbol: ?isItemAllowedInSlot@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int32_t, class ItemStackBase const &, int32_t) const;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: ?isItemAllowedToAdd@BeaconPaymentContainerValidation@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: ?getContainerOffset@BeaconPaymentContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int32_t getContainerOffset(class ContainerScreenContext const &) const;

    // symbol: ?canDestroy@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@@Z
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;

    // symbol: ?getAvailableSetCount@BeaconPaymentContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
    MCVAPI int32_t getAvailableSetCount(int32_t, class ItemStackBase const &) const;

    // NOLINTEND

};

