#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReloadConfigCommand {
public:
    // prevent constructor by default
    ReloadConfigCommand& operator=(ReloadConfigCommand const &) = delete;
    ReloadConfigCommand(ReloadConfigCommand const &) = delete;
    ReloadConfigCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?execute@ReloadConfigCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@ReloadConfigCommand@@SAXAEAVCommandRegistry@@AEAUScriptSettings@@@Z
    MCAPI static void setup(class CommandRegistry &, struct ScriptSettings &);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sScriptSettings@ReloadConfigCommand@@0PEAUScriptSettings@@EA
    MCAPI static struct ScriptSettings * sScriptSettings;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $sScriptSettings() { return sScriptSettings; }

    // NOLINTEND

};

