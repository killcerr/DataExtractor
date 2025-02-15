#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct IntRange {
public:
    // prevent constructor by default
    IntRange& operator=(IntRange const &) = delete;
    IntRange(IntRange const &) = delete;
    IntRange() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0IntRange@@QEAA@HH@Z
    MCAPI IntRange(int32_t, int32_t);

    // symbol: ??0IntRange@@QEAA@H@Z
    MCAPI IntRange(int32_t);

    // symbol: ?getValue@IntRange@@QEBAHAEAVRandom@@@Z
    MCAPI int32_t getValue(class Random &) const;

    // symbol: ?getValueInclusive@IntRange@@QEBAHAEAVRandom@@@Z
    MCAPI int32_t getValueInclusive(class Random &) const;

    // symbol: ?isInRangeInclusive@IntRange@@QEBA_NH@Z
    MCAPI bool isInRangeInclusive(int32_t) const;

    // symbol: ?parseJson@IntRange@@QEAA_NVValue@Json@@HH@Z
    MCAPI bool parseJson(class Json::Value, int32_t, int32_t);

    // symbol: ?ZERO@IntRange@@2U1@B
    MCAPI static struct IntRange const ZERO;

    // NOLINTEND

};

