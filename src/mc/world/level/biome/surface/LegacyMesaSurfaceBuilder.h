#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ISurfaceBuilder;
class PerlinSimplexNoise;
class Random;
// clang-format on

namespace VanillaSurfaceBuilders {

class LegacyMesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    LegacyMesaSurfaceBuilder& operator=(LegacyMesaSurfaceBuilder const &) = delete;
    LegacyMesaSurfaceBuilder(LegacyMesaSurfaceBuilder const &) = delete;
    LegacyMesaSurfaceBuilder() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext &, uint32_t);

    // vIndex: 2, symbol: ?buildSurfaceAt@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?generateBands@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@AEAAXAEAVRandom@@@Z
    MCAPI void generateBands(class Random &);

    // symbol: ?getBand@LegacyMesaSurfaceBuilder@VanillaSurfaceBuilders@@AEBA?AW4BlockColor@@HHHAEBVPerlinSimplexNoise@@@Z
    MCAPI ::BlockColor getBand(int32_t, int32_t, int32_t, class PerlinSimplexNoise const &) const;

    // NOLINTEND

};

};
