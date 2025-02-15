#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ScriptPackConfigurationManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const &) = delete;
    ScriptPackConfigurationManager() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptPackConfigurationManager@@UEAA@XZ
    MCVAPI ~ScriptPackConfigurationManager();

    // symbol: ??0ScriptPackConfigurationManager@@QEAA@$$QEAV0@@Z
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager &&);

    // symbol: ??0ScriptPackConfigurationManager@@QEAA@V?$optional@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@Z
    MCAPI ScriptPackConfigurationManager(std::optional<class Core::PathBuffer<std::string>>);

    // symbol: ??0ScriptPackConfigurationManager@@QEAA@AEBV0@@Z
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const &);

    // symbol: ?getConfigPath@ScriptPackConfigurationManager@@QEBAAEBV?$optional@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@XZ
    MCAPI std::optional<class Core::PathBuffer<std::string>> const & getConfigPath() const;

    // symbol: ?getPackConfiguration@ScriptPackConfigurationManager@@QEBAAEBVScriptPackConfiguration@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ScriptPackConfiguration const & getPackConfiguration(std::string const &) const;

    // symbol: ?loadPackConfigs@ScriptPackConfigurationManager@@QEAAXXZ
    MCAPI void loadPackConfigs();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sDefaultConfigurationName@ScriptPackConfigurationManager@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sDefaultConfigurationName;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $sDefaultConfigurationName() { return sDefaultConfigurationName; }

    // NOLINTEND

};

