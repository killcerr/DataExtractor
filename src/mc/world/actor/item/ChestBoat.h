#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/item/Boat.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ChestBoat : public ::Boat {
public:
    // prevent constructor by default
    ChestBoat& operator=(ChestBoat const &) = delete;
    ChestBoat(ChestBoat const &) = delete;
    ChestBoat() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 35, symbol: ?getEntityLocNameString@ChestBoat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getEntityLocNameString() const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 149, symbol: ?kill@ChestBoat@@UEAAXXZ
    virtual void kill();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?destroy@ChestBoat@@UEAAXPEAVActor@@@Z
    virtual void destroy(class Actor *);

    // symbol: ??0ChestBoat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ChestBoat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dropChestContents@ChestBoat@@AEAAXAEBVVec3@@@Z
    MCAPI void _dropChestContents(class Vec3 const &);

    // NOLINTEND

};

