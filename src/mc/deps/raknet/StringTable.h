#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringTable {
public:
    // prevent constructor by default
    StringTable& operator=(StringTable const &) = delete;
    StringTable(StringTable const &) = delete;
    StringTable() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?AddReference@StringTable@RakNet@@SAXXZ
    MCAPI static void AddReference();

    // symbol: ?RemoveReference@StringTable@RakNet@@SAXXZ
    MCAPI static void RemoveReference();

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?instance@StringTable@RakNet@@1PEAV12@EA
    MCAPI static class RakNet::StringTable * instance;

    // symbol: ?referenceCount@StringTable@RakNet@@1HA
    MCAPI static int32_t referenceCount;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    // NOLINTEND

};

};
