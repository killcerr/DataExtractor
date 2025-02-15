#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/AttributeBuffType.h"

class AttributeBuff {
public:
    // prevent constructor by default
    AttributeBuff& operator=(AttributeBuff const &) = delete;
    AttributeBuff() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
    virtual bool isInstantaneous() const = 0;

    // vIndex: 2, symbol: ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
    virtual bool isSerializable() const = 0;

    // vIndex: 3, symbol: ?setDurationAmplifier@AttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    virtual void setDurationAmplifier(std::shared_ptr<class Amplifier>);

    // symbol: ??1AttributeBuff@@UEAA@XZ
    MCVAPI ~AttributeBuff();

    // symbol: ??0AttributeBuff@@QEAA@AEBV0@@Z
    MCAPI AttributeBuff(class AttributeBuff const &);

    // symbol: ?getAmount@AttributeBuff@@QEBAMXZ
    MCAPI float getAmount() const;

    // symbol: ?getId@AttributeBuff@@QEBA_KXZ
    MCAPI uint64_t getId() const;

    // symbol: ?getOperand@AttributeBuff@@QEBAHXZ
    MCAPI int32_t getOperand() const;

    // symbol: ?getType@AttributeBuff@@QEBA?AW4AttributeBuffType@@XZ
    MCAPI ::AttributeBuffType getType() const;

    // symbol: ??8AttributeBuff@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class AttributeBuff const &) const;

    // symbol: ?setAmplificationAmount@AttributeBuff@@QEAAXHM@Z
    MCAPI void setAmplificationAmount(int32_t, float);

    // symbol: ?setId@AttributeBuff@@QEAAX_K@Z
    MCAPI void setId(uint64_t);

    // symbol: ?setOperand@AttributeBuff@@QEAAXH@Z
    MCAPI void setOperand(int32_t);

    // symbol: ?setSource@AttributeBuff@@QEAAXPEAVActor@@@Z
    MCAPI void setSource(class Actor *);

    // symbol: ?setValueAmplifier@AttributeBuff@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier>);

    // symbol: ?buffTypeToDamageCause@AttributeBuff@@SA?AW4ActorDamageCause@@W4AttributeBuffType@@@Z
    MCAPI static ::ActorDamageCause buffTypeToDamageCause(::AttributeBuffType);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0AttributeBuff@@IEAA@MHW4AttributeBuffType@@@Z
    MCAPI AttributeBuff(float, int32_t, ::AttributeBuffType);

    // symbol: ??0AttributeBuff@@IEAA@MHAEBVActorDamageSource@@W4AttributeBuffType@@@Z
    MCAPI AttributeBuff(float, int32_t, class ActorDamageSource const &, ::AttributeBuffType);

    // NOLINTEND

};

