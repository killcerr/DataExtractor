#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class ShipwreckStart : public ::StructureStart {
public:
    // prevent constructor by default
    ShipwreckStart& operator=(ShipwreckStart const &) = delete;
    ShipwreckStart(ShipwreckStart const &) = delete;
    ShipwreckStart() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??0ShipwreckStart@@QEAA@AEBVBiomeSource@@AEAVRandom@@HHF@Z
    MCAPI ShipwreckStart(class BiomeSource const &, class Random &, int32_t, int32_t, int16_t);

    // NOLINTEND

};

