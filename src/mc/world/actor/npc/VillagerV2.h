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
#include "mc/world/actor/npc/VillagerBase.h"
#include "mc/world/item/components/ItemUseMethod.h"

class VillagerV2 : public ::VillagerBase {
public:
    // prevent constructor by default
    VillagerV2& operator=(VillagerV2 const &) = delete;
    VillagerV2(VillagerV2 const &) = delete;
    VillagerV2() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@VillagerV2@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const &);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 13, symbol: ?remove@VillagerV2@@UEAAXXZ
    virtual void remove();

    // vIndex: 14, symbol: ?isRuntimePredictedMovementEnabled@VillagerV2@@UEBA_NXZ
    virtual bool isRuntimePredictedMovementEnabled() const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

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

    // vIndex: 123, symbol: ?buildDebugInfo@VillagerV2@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string &) const;

    // vIndex: 141, symbol: ?getInteraction@VillagerV2@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 150, symbol: ?die@VillagerV2@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const &);

    // vIndex: 163, symbol: ?updateEntitySpecificMolangVariables@VillagerV2@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 211, symbol: ?newServerAiStep@VillagerV2@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0VillagerV2@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI VillagerV2(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

    // NOLINTEND

};

