#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequest {
public:
    // prevent constructor by default
    EventingRequest& operator=(EventingRequest const &) = delete;
    EventingRequest(EventingRequest const &) = delete;
    EventingRequest() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1EventingRequest@@QEAA@XZ
    MCAPI ~EventingRequest();

    // symbol: ?addPersonaEmotePlayed@EventingRequest@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
    MCAPI static struct EventingRequest addPersonaEmotePlayed(std::string const &, bool, int32_t);

    // symbol: ?addPlayerActionComparisonFailure@EventingRequest@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct EventingRequest addPlayerActionComparisonFailure(std::string const &);

    // symbol: ?addPlayerBounced@EventingRequest@@SA?AU1@AEBUActorUniqueID@@AEBVBlock@@H@Z
    MCAPI static struct EventingRequest addPlayerBounced(struct ActorUniqueID const &, class Block const &, int32_t);

    // NOLINTEND

};

