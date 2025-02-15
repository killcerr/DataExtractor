#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class TradeContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    TradeContainerManagerModel& operator=(TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel(TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?getItemCopies@TradeContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@TradeContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int32_t, class ItemStack const &, bool);

    // vIndex: 8, symbol: ?getSlot@TradeContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const & getSlot(int32_t) const;

    // vIndex: 10, symbol: ?broadcastChanges@TradeContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@TradeContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@TradeContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0TradeContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
    MCAPI TradeContainerManagerModel(::ContainerID, class Player &, struct ActorUniqueID const &);

    // NOLINTEND

};

