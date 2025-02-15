#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    InstantaneousMobEffect& operator=(InstantaneousMobEffect const &) = delete;
    InstantaneousMobEffect(InstantaneousMobEffect const &) = delete;
    InstantaneousMobEffect() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 5, symbol: ?isInstantaneous@InstantaneousMobEffect@@UEBA_NXZ
    virtual bool isInstantaneous() const;

    // vIndex: 7, symbol: ?isDurationEffectTick@InstantaneousMobEffect@@UEBA_NHH@Z
    virtual bool isDurationEffectTick(int32_t, int32_t) const;

    // symbol: ??0InstantaneousMobEffect@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH@Z
    MCAPI InstantaneousMobEffect(uint32_t, std::string const &, std::string const &, bool, int32_t, int32_t);

    // NOLINTEND

};

