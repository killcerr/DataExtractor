#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsStunnedComponent {
public:
    // prevent constructor by default
    ScriptIsStunnedComponent& operator=(ScriptIsStunnedComponent const &) = delete;
    ScriptIsStunnedComponent(ScriptIsStunnedComponent const &) = delete;
    ScriptIsStunnedComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptIsStunnedComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptIsStunnedComponent();

    // symbol: ?sClassName@ScriptIsStunnedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsStunnedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const * sComponentId;

    // NOLINTEND

};

};
