#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BlockItem : public ::Item {
public:
    // prevent constructor by default
    BlockItem& operator=(BlockItem const &) = delete;
    BlockItem(BlockItem const &) = delete;
    BlockItem() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 56, symbol: ?isDestructive@BlockItem@@UEBA_NH@Z
    virtual bool isDestructive(int32_t) const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 67, symbol: ?isValidAuxValue@BlockItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int32_t) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 95, symbol: ?buildDescriptionId@BlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 120, symbol: ?getIconInfo@BlockItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int32_t, bool) const;

    // vIndex: 124, symbol: ?getLightEmission@BlockItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int32_t) const;

    // vIndex: 125, symbol: ?getIconYOffset@BlockItem@@UEBAHXZ
    virtual int32_t getIconYOffset() const;

    // vIndex: 133, symbol: ?_calculatePlacePos@BlockItem@@MEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, uint8_t &, class BlockPos &) const;

    // vIndex: 135, symbol: ?_useOn@BlockItem@@MEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult _useOn(class ItemStack &, class Actor &, class BlockPos, uint8_t, class Vec3 const &) const;

    // symbol: ??1BlockItem@@UEAA@XZ
    MCVAPI ~BlockItem();

    // symbol: ??0BlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BlockItem(std::string const &, int32_t);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_displayHeightLimitErrorMessages@BlockItem@@IEBAXAEAVActor@@H_N@Z
    MCAPI void _displayHeightLimitErrorMessages(class Actor &, int32_t, bool) const;

    // NOLINTEND

};

