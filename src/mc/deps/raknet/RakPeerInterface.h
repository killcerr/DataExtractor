#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakPeerInterface {
public:
    // prevent constructor by default
    RakPeerInterface& operator=(RakPeerInterface const &) = delete;
    RakPeerInterface(RakPeerInterface const &) = delete;
    RakPeerInterface() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1RakPeerInterface@RakNet@@UEAA@XZ
    MCVAPI ~RakPeerInterface();

    // symbol: ?DestroyInstance@RakPeerInterface@RakNet@@SAXPEAV12@@Z
    MCAPI static void DestroyInstance(class RakNet::RakPeerInterface *);

    // symbol: ?GetInstance@RakPeerInterface@RakNet@@SAPEAV12@XZ
    MCAPI static class RakNet::RakPeerInterface * GetInstance();

    // NOLINTEND

};

};
