#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHistory {
public:
    // ActorHistory inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on
    
    // ActorHistory inner types define
    struct Snapshot {
    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const &) = delete;
        Snapshot(Snapshot const &) = delete;
        Snapshot() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1Snapshot@ActorHistory@@QEAA@XZ
        MCAPI ~Snapshot();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    ActorHistory& operator=(ActorHistory const &) = delete;
    ActorHistory(ActorHistory const &) = delete;
    ActorHistory() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?addFrame@ActorHistory@@QEAA_NAEAVEntityContext@@_KAEAVEntityRegistry@@@Z
    MCAPI bool addFrame(class EntityContext &, uint64_t, class EntityRegistry &);

    // symbol: ?addInputToFrontOfFrame@ActorHistory@@QEAAXV?$shared_ptr@UIReplayableActorInput@@@std@@_K@Z
    MCAPI void addInputToFrontOfFrame(std::shared_ptr<struct IReplayableActorInput>, uint64_t);

    // symbol: ?createSnapshot@ActorHistory@@QEBA?AUSnapshot@1@AEBVEntityContext@@AEAVEntityRegistry@@@Z
    MCAPI struct ActorHistory::Snapshot createSnapshot(class EntityContext const &, class EntityRegistry &) const;

    // symbol: ?getFrame@ActorHistory@@QEBAPEBUSnapshot@1@_K@Z
    MCAPI struct ActorHistory::Snapshot const * getFrame(uint64_t) const;

    // symbol: ??1ActorHistory@@QEAA@XZ
    MCAPI ~ActorHistory();

    // symbol: ?copyEntityState@ActorHistory@@SAXAEBVEntityContext@@AEAV2@_N@Z
    MCAPI static void copyEntityState(class EntityContext const &, class EntityContext &, bool);

    // NOLINTEND

};

