#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class FishingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    FishingEnchant& operator=(FishingEnchant const &) = delete;
    FishingEnchant(FishingEnchant const &) = delete;
    FishingEnchant() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getMinCost@FishingEnchant@@UEBAHH@Z
    virtual int32_t getMinCost(int32_t) const;

    // vIndex: 3, symbol: ?getMaxCost@FishingEnchant@@UEBAHH@Z
    virtual int32_t getMaxCost(int32_t) const;

    // vIndex: 5, symbol: ?getMaxLevel@FishingEnchant@@UEBAHXZ
    virtual int32_t getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // NOLINTEND

};

