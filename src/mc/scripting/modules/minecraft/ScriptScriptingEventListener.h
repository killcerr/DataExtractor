#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct ScriptCommandMessageEvent;
struct ScriptingNotificationEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScriptingEventListener {
public:
    // prevent constructor by default
    ScriptScriptingEventListener& operator=(ScriptScriptingEventListener const &) = delete;
    ScriptScriptingEventListener(ScriptScriptingEventListener const &) = delete;
    ScriptScriptingEventListener() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?onEvent@ScriptScriptingEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUScriptCommandMessageEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptCommandMessageEvent const &);

    // vIndex: 2, symbol: ?onEvent@ScriptingEventListener@@UEAA?AW4EventResult@@AEBUScriptingNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptingNotificationEvent const &);

    // symbol: ??0ScriptScriptingEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptScriptingEventListener(class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents>);

    // NOLINTEND

};

};
