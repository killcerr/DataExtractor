#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsChargedComponent {
public:
    // prevent constructor by default
    ScriptIsChargedComponent& operator=(ScriptIsChargedComponent const &) = delete;
    ScriptIsChargedComponent(ScriptIsChargedComponent const &) = delete;
    ScriptIsChargedComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptIsChargedComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptIsChargedComponent();

    // symbol: ?sClassName@ScriptIsChargedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsChargedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const * sComponentId;

    // NOLINTEND

};

};
