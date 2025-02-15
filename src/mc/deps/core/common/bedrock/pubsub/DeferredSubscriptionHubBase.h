#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/ConnectPosition.h"
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class DeferredSubscriptionHub; }
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHubBase : public ::Bedrock::PubSub::DeferredSubscriptionHub {
public:
    // prevent constructor by default
    DeferredSubscriptionHubBase& operator=(DeferredSubscriptionHubBase const &) = delete;
    DeferredSubscriptionHubBase(DeferredSubscriptionHubBase const &) = delete;
    DeferredSubscriptionHubBase() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?runDeferredEvents@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA_K_K@Z
    virtual uint64_t runDeferredEvents(uint64_t);

    // vIndex: 2, symbol: ?runDeferredEventsForDuration@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z
    virtual uint64_t runDeferredEventsForDuration(std::chrono::milliseconds);

    // vIndex: 4, symbol: ?clear@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAAXXZ
    virtual void clear();

    // vIndex: 5, symbol: ?erase@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA_KAEAVRawSubscription@23@@Z
    virtual uint64_t erase(class Bedrock::PubSub::RawSubscription &);

    // vIndex: 6, symbol: ?size@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEBA_KXZ
    virtual uint64_t size() const;

    // vIndex: 7, symbol: ?empty@DeferredSubscriptionHubBase@PubSub@Bedrock@@UEBA_NXZ
    virtual bool empty() const;

    // vIndex: 9, symbol: ?_join@DeferredSubscriptionHubBase@PubSub@Bedrock@@EEAAX$$QEAVDeferredSubscription@23@@Z
    virtual void _join(class Bedrock::PubSub::DeferredSubscription &&);

    // vIndex: 11, symbol: ?_runOneEvent@PriorityDeferredSubscriptionHub@PubSub@Bedrock@@EEAA_NXZ
    virtual bool _runOneEvent() = 0;

    // symbol: ??1DeferredSubscriptionHubBase@PubSub@Bedrock@@UEAA@XZ
    MCVAPI ~DeferredSubscriptionHubBase();

    // NOLINTEND

};

};
