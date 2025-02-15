#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/containers/ContainerType.h"

class ContainerComponent {
public:
    // prevent constructor by default
    ContainerComponent& operator=(ContainerComponent const &) = delete;
    ContainerComponent(ContainerComponent const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?containerClosed@ContainerComponent@@UEAAXAEAVPlayer@@@Z
    MCVAPI void containerClosed(class Player &);

    // symbol: ?containerContentChanged@ContainerComponent@@UEAAXH@Z
    MCVAPI void containerContentChanged(int32_t);

    // symbol: ??1ContainerComponent@@UEAA@XZ
    MCVAPI ~ContainerComponent();

    // symbol: ??0ContainerComponent@@QEAA@XZ
    MCAPI ContainerComponent();

    // symbol: ??0ContainerComponent@@QEAA@$$QEAV0@@Z
    MCAPI ContainerComponent(class ContainerComponent &&);

    // symbol: ?_getRawContainerPtr@ContainerComponent@@QEAAPEAVFillingContainer@@XZ
    MCAPI class FillingContainer * _getRawContainerPtr();

    // symbol: ?addAdditionalSaveData@ContainerComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;

    // symbol: ?addItem@ContainerComponent@@QEAA_NAEAVItemActor@@@Z
    MCAPI bool addItem(class ItemActor &);

    // symbol: ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@HH@Z
    MCAPI bool addItem(class ItemStack &, int32_t, int32_t);

    // symbol: ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@@Z
    MCAPI bool addItem(class ItemStack &);

    // symbol: ?canBeSiphonedFrom@ContainerComponent@@QEBA_NXZ
    MCAPI bool canBeSiphonedFrom() const;

    // symbol: ?canOpenContainer@ContainerComponent@@QEBA_NAEBVActor@@AEAVPlayer@@@Z
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;

    // symbol: ?countItemsOfType@ContainerComponent@@QEBAHAEBVItemStack@@@Z
    MCAPI int32_t countItemsOfType(class ItemStack const &) const;

    // symbol: ?dropContents@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);

    // symbol: ?findFirstSlotForItem@ContainerComponent@@QEBAHAEBVItemStack@@@Z
    MCAPI int32_t findFirstSlotForItem(class ItemStack const &) const;

    // symbol: ?getContainerSize@ContainerComponent@@QEBAHXZ
    MCAPI int32_t getContainerSize() const;

    // symbol: ?getEmptySlotsCount@ContainerComponent@@QEBAHXZ
    MCAPI int32_t getEmptySlotsCount() const;

    // symbol: ?getItem@ContainerComponent@@QEBAAEBVItemStack@@H@Z
    MCAPI class ItemStack const & getItem(int32_t) const;

    // symbol: ?getSlots@ContainerComponent@@QEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    MCAPI std::vector<class ItemStack const *> const getSlots() const;

    // symbol: ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemStack@@@Z
    MCAPI bool hasRoomForItem(class ItemStack const &);

    // symbol: ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemActor@@@Z
    MCAPI bool hasRoomForItem(class ItemActor const &);

    // symbol: ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor &);

    // symbol: ?isEmpty@ContainerComponent@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isPrivate@ContainerComponent@@QEBA_NXZ
    MCAPI bool isPrivate() const;

    // symbol: ?openContainer@ContainerComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
    MCAPI bool openContainer(class Actor &, class Player &);

    // symbol: ??4ContainerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);

    // symbol: ?readAdditionalSaveData@ContainerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?rebuildContainer@ContainerComponent@@QEAAXAEAVActor@@W4ContainerType@@H_NH2@Z
    MCAPI void rebuildContainer(class Actor &, ::ContainerType, int32_t, bool, int32_t, bool);

    // symbol: ?removeItem@ContainerComponent@@QEAAXHH@Z
    MCAPI void removeItem(int32_t, int32_t);

    // symbol: ?removeItemsOfType@ContainerComponent@@QEAAXAEBVItemStack@@H@Z
    MCAPI void removeItemsOfType(class ItemStack const &, int32_t);

    // symbol: ?serverInitItemStackIds@ContainerComponent@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // symbol: ?setCustomName@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCustomName(std::string const &);

    // symbol: ?setItem@ContainerComponent@@QEAA_NHAEBVItemStack@@@Z
    MCAPI bool setItem(int32_t, class ItemStack const &);

    // symbol: ?setLootTable@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI void setLootTable(std::string const &, int32_t);

    // symbol: ?unpackLootTable@ContainerComponent@@QEAAXAEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void unpackLootTable(class Level &, DimensionType);

    // NOLINTEND

};

