#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/JumpType.h"
#include "mc/world/actor/ai/control/Control.h"

class JumpControl : public ::Control {
public:
    // prevent constructor by default
    JumpControl& operator=(JumpControl const &) = delete;
    JumpControl(JumpControl const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeInternal@JumpControl@@UEAAXAEAVMob@@PEAUJumpControlDescription@@@Z
    virtual void initializeInternal(class Mob &, struct JumpControlDescription *);

    // vIndex: 2, symbol: ?clone@JumpControl@@UEBA?AV?$unique_ptr@VJumpControl@@U?$default_delete@VJumpControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class JumpControl> clone() const;

    // vIndex: 3, symbol: ?tick@JumpControl@@MEAAXAEAVJumpControlComponent@@AEAVMob@@@Z
    virtual void tick(class JumpControlComponent &, class Mob &);

    // vIndex: 4, symbol: ?getJumpDelay@JumpControl@@MEBAHAEBVJumpControlComponent@@@Z
    virtual int32_t getJumpDelay(class JumpControlComponent const &) const;

    // vIndex: 5, symbol: ?getJumpPower@JumpControl@@MEBAMAEBVJumpControlComponent@@@Z
    virtual float getJumpPower(class JumpControlComponent const &) const;

    // vIndex: 6, symbol: ?getJumpType@JumpControl@@MEBA?AW4JumpType@@AEBVJumpControlComponent@@@Z
    virtual ::JumpType getJumpType(class JumpControlComponent const &) const;

    // vIndex: 7, symbol: ?setJumpType@JumpControl@@MEAAXAEAVJumpControlComponent@@W4JumpType@@@Z
    virtual void setJumpType(class JumpControlComponent &, ::JumpType);

    // vIndex: 8, symbol: ?resetSpeedModifier@JumpControl@@MEAAXAEBVJumpControlComponent@@AEAVMob@@@Z
    virtual void resetSpeedModifier(class JumpControlComponent const &, class Mob &);

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: ?initializeInternal@LookControl@@UEAAXAEAVMob@@@Z
    virtual void initializeInternal(class Mob &);

    // symbol: ??0JumpControl@@QEAA@XZ
    MCAPI JumpControl();

    // NOLINTEND

};

