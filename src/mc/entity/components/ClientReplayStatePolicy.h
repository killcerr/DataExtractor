#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/AdvanceFrameResult.h"
#include "mc/entity/components/IReplayStatePolicy.h"

class ClientReplayStatePolicy : public ::IReplayStatePolicy {
public:
    // prevent constructor by default
    ClientReplayStatePolicy& operator=(ClientReplayStatePolicy const &) = delete;
    ClientReplayStatePolicy(ClientReplayStatePolicy const &) = delete;
    ClientReplayStatePolicy() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isReplayNeeded@ClientReplayStatePolicy@@UEBA_NW4AdvanceFrameResult@@@Z
    virtual bool isReplayNeeded(::AdvanceFrameResult) const;

    // vIndex: 2, symbol: ?canRewindToFrame@ClientReplayStatePolicy@@UEAA_NAEAVEntityContext@@_K1@Z
    virtual bool canRewindToFrame(class EntityContext &, uint64_t, uint64_t);

    // vIndex: 3, symbol: ?shouldCorrectMovement@ClientReplayStatePolicy@@UEAA?AUMovementCorrection@@AEAVEntityContext@@AEBVIConstBlockSource@@AEBVPlayerAuthInputPacket@@_K@Z
    virtual struct MovementCorrection shouldCorrectMovement(class EntityContext &, class IConstBlockSource const &, class PlayerAuthInputPacket const &, uint64_t);

    // vIndex: 4, symbol: ?flagUnsupportedMovement@ClientReplayStatePolicy@@UEAAX_K@Z
    virtual void flagUnsupportedMovement(uint64_t);

    // vIndex: 5, symbol: ?storeCurrentFrameSupported@ClientReplayStatePolicy@@UEAAX_KAEAVEntityContext@@AEBVIConstBlockSource@@@Z
    virtual void storeCurrentFrameSupported(uint64_t, class EntityContext &, class IConstBlockSource const &);

    // symbol: ?_checkSupportedFrame@ClientReplayStatePolicy@@QEBA_NAEAVEntityContext@@AEBVIConstBlockSource@@@Z
    MCAPI bool _checkSupportedFrame(class EntityContext &, class IConstBlockSource const &) const;

    // NOLINTEND

};

