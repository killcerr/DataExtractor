#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/EducationEditionOffer.h"
#include "mc/enums/GameType.h"
#include "mc/enums/StorageVersion.h"
#include "mc/server/editor/WorldType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct LevelSummary {
public:
    // NOLINTBEGIN
    // symbol: ??0LevelSummary@@QEAA@AEBU0@@Z
    MCAPI LevelSummary(struct LevelSummary const &);

    // symbol: ??0LevelSummary@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@AEBVPath@Core@@2_N@Z
    MCAPI LevelSummary(std::string const &, class LevelData const &, class Core::Path const &, class Core::Path const &, bool);

    // symbol: ??0LevelSummary@@QEAA@XZ
    MCAPI LevelSummary();

    // symbol: ??0LevelSummary@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_JW4GameType@@W4Difficulty@@VLevelSeed64@@H_K_N6W4GamePublishSetting@Social@@6W4EducationEditionOffer@@AEBVGameVersion@@9W4StorageVersion@@AEBVPath@Core@@AEBVContentIdentity@@0_NAEBUEduSharedUriResource@@AEBVExperiments@@AEBVBaseGameVersion@@W4WorldType@Editor@@@Z
    MCAPI LevelSummary(std::string const &, std::string const &, int64_t, ::GameType, ::Difficulty, class LevelSeed64, int32_t, uint64_t, bool, bool, ::Social::GamePublishSetting, bool, ::EducationEditionOffer, class GameVersion const &, class GameVersion const &, ::StorageVersion, class Core::Path const &, class ContentIdentity const &, std::string const &, bool, struct EduSharedUriResource const &, class Experiments const &, class BaseGameVersion const &, ::Editor::WorldType);

    // symbol: ??4LevelSummary@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct LevelSummary & operator=(struct LevelSummary const &);

    // symbol: ?setName@LevelSummary@@QEAAAEAU1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct LevelSummary & setName(std::string);

    // symbol: ??1LevelSummary@@QEAA@XZ
    MCAPI ~LevelSummary();

    // symbol: ?buildCustomIconPath@LevelSummary@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    MCAPI static class Core::PathBuffer<std::string> buildCustomIconPath(class Core::Path const &);

    // symbol: ?buildWorldIconPath@LevelSummary@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    MCAPI static class Core::PathBuffer<std::string> buildWorldIconPath(class Core::Path const &);

    // symbol: ?CUSTOM_ICON_FILENAME@LevelSummary@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const CUSTOM_ICON_FILENAME;

    // symbol: ?DEFAULT_WORLD_ICON_FILENAME@LevelSummary@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_WORLD_ICON_FILENAME;

    // symbol: ?INVALID_LEVEL_ID@LevelSummary@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const INVALID_LEVEL_ID;

    // symbol: ?WORLD_ICON_FILENAME@LevelSummary@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const WORLD_ICON_FILENAME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initializeWorldIconPath@LevelSummary@@AEAAXAEBVPath@Core@@@Z
    MCAPI void _initializeWorldIconPath(class Core::Path const &);

    // NOLINTEND

};

