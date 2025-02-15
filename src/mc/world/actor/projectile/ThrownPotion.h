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
#include "mc/enums/ParticleType.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/Throwable.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ThrownPotion : public ::Throwable {
public:
    // prevent constructor by default
    ThrownPotion& operator=(ThrownPotion const &) = delete;
    ThrownPotion(ThrownPotion const &) = delete;
    ThrownPotion() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol: ?initializeComponents@ThrownPotion@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const &);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

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

    // vIndex: 101, symbol: ?queryEntityRenderer@ThrownPotion@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const & queryEntityRenderer() const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 143, symbol: ?setAuxValue@ThrownPotion@@UEAAXH@Z
    virtual void setAuxValue(int32_t);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 167, symbol: ?readAdditionalSaveData@ThrownPotion@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);

    // vIndex: 168, symbol: ?addAdditionalSaveData@ThrownPotion@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag &) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // symbol: ??0ThrownPotion@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ThrownPotion(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

    // symbol: ?getPotionId@ThrownPotion@@QEBAFXZ
    MCAPI int16_t getPotionId() const;

    // symbol: ?setLinger@ThrownPotion@@QEAAX_N@Z
    MCAPI void setLinger(bool);

    // symbol: ?SPLASH_RANGE@ThrownPotion@@2MB
    MCAPI static float const SPLASH_RANGE;

    // NOLINTEND

};

