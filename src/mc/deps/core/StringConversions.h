#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // prevent constructor by default
    StringConversions& operator=(StringConversions const &) = delete;
    StringConversions(StringConversions const &) = delete;
    StringConversions() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?toUtf8@StringConversions@Core@@SAHPEB_WHPEADH@Z
    MCAPI static int32_t toUtf8(wchar_t const *, int32_t, char *, int32_t);

    // symbol: ?toUtf8@StringConversions@Core@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z
    MCAPI static std::string toUtf8(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const &);

    // symbol: ?toUtf8@StringConversions@Core@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEB_WH@Z
    MCAPI static std::string toUtf8(wchar_t const *, int32_t);

    // symbol: ?toWide@StringConversions@Core@@SA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEBDH@Z
    MCAPI static std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> toWide(char const *, int32_t);

    // symbol: ?toWide@StringConversions@Core@@SAHPEBDHPEA_WH@Z
    MCAPI static int32_t toWide(char const *, int32_t, wchar_t *, int32_t);

    // symbol: ?toWide@StringConversions@Core@@SA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI static std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> toWide(std::string_view);

    // NOLINTEND

};

};
