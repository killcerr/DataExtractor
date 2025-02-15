#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerLeaveBeforeEvent& operator=(ScriptPlayerLeaveBeforeEvent const &) = delete;
    ScriptPlayerLeaveBeforeEvent(ScriptPlayerLeaveBeforeEvent const &) = delete;
    ScriptPlayerLeaveBeforeEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptPlayerLeaveBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerLeaveBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerLeaveBeforeEvent> bind();

    // NOLINTEND

};

};
