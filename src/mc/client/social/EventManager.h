#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class EventManager {
public:
    // prevent constructor by default
    EventManager& operator=(EventManager const &) = delete;
    EventManager(EventManager const &) = delete;
    EventManager() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0EventManager@Events@Social@@QEAA@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    MCAPI EventManager(class Bedrock::NonOwnerPointer<class AppPlatform> const &);

    // symbol: ?UpdateDnAPlatString@EventManager@Events@Social@@QEAAXXZ
    MCAPI void UpdateDnAPlatString();

    // symbol: ?addListener@EventManager@Events@Social@@QEAAXV?$unique_ptr@VIEventListener@Events@Social@@U?$default_delete@VIEventListener@Events@Social@@@std@@@std@@@Z
    MCAPI void addListener(std::unique_ptr<class Social::Events::IEventListener>);

    // symbol: ?buildCommonProperties@EventManager@Events@Social@@QEBA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@@std@@@2@@std@@IAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    MCAPI std::unordered_map<std::string,class Social::Events::Property> buildCommonProperties(uint32_t, std::vector<std::string> const &) const;

    // symbol: ?buildCommonProperties@EventManager@Events@Social@@QEBAXAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VProperty@Events@Social@@@std@@@2@@std@@IAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    MCAPI void buildCommonProperties(std::unordered_map<std::string,class Social::Events::Property> &, uint32_t, std::vector<std::string> const &) const;

    // symbol: ?disableEventRecording@EventManager@Events@Social@@QEAAXXZ
    MCAPI void disableEventRecording();

    // symbol: ?enableEventRecording@EventManager@Events@Social@@QEAAXXZ
    MCAPI void enableEventRecording();

    // symbol: ?getCommonProperty@EventManager@Events@Social@@QEBA?AV?$optional@VProperty@Events@Social@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    MCAPI std::optional<class Social::Events::Property> getCommonProperty(std::string const &) const;

    // symbol: ?getGlobalProperty@EventManager@Events@Social@@QEBA?AVProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Social::Events::Property getGlobalProperty(std::string const &) const;

    // symbol: ?getPlayerGlobalProperty@EventManager@Events@Social@@QEBA?AVProperty@23@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Social::Events::Property getPlayerGlobalProperty(uint32_t, std::string const &) const;

    // symbol: ?isEventRecordingEnabled@EventManager@Events@Social@@QEAA_NXZ
    MCAPI bool isEventRecordingEnabled();

    // symbol: ?recordDelayedEventAction@EventManager@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void recordDelayedEventAction(std::string const &);

    // symbol: ?recordEvent@EventManager@Events@Social@@QEAAXAEAVEvent@23@@Z
    MCAPI void recordEvent(class Social::Events::Event &);

    // symbol: ?removeCommonProperty@EventManager@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeCommonProperty(std::string const &);

    // symbol: ?removeGlobalProperty@EventManager@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeGlobalProperty(std::string const &);

    // symbol: ?removePlayerCommonProperty@EventManager@Events@Social@@QEAAXIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removePlayerCommonProperty(uint32_t, std::string const &);

    // symbol: ?removePlayerCommonPropertyForAllPlayers@EventManager@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removePlayerCommonPropertyForAllPlayers(std::string const &);

    // symbol: ?requestEventDeferment@EventManager@Events@Social@@QEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCAPI std::shared_ptr<void *> requestEventDeferment();

    // symbol: ?sendEvents@EventManager@Events@Social@@QEAAX_N@Z
    MCAPI void sendEvents(bool);

    // symbol: ?setAcceptNewEvents@EventManager@Events@Social@@QEAAX_N@Z
    MCAPI void setAcceptNewEvents(bool);

    // symbol: ?shutdown@EventManager@Events@Social@@QEAAXXZ
    MCAPI void shutdown();

    // symbol: ?stopDebugEventLoggingForAllListeners@EventManager@Events@Social@@QEAAXXZ
    MCAPI void stopDebugEventLoggingForAllListeners();

    // symbol: ?tick@EventManager@Events@Social@@QEAAXXZ
    MCAPI void tick();

    // symbol: ??1EventManager@Events@Social@@QEAA@XZ
    MCAPI ~EventManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_buildDnAPlatformString@EventManager@Events@Social@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _buildDnAPlatformString();

    // symbol: ?setupCommonProperties@EventManager@Events@Social@@AEAAXXZ
    MCAPI void setupCommonProperties();

    // NOLINTEND

};

};
