#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockVolume;
class EntityContext;
class ISurfaceBuilder;
class Pos;
// clang-format on

namespace VanillaSurfaceBuilders {

class CappedSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // CappedSurfaceBuilder inner types declare
    // clang-format off
    class MaterialHelper;
    // clang-format on
    
    // CappedSurfaceBuilder inner types define
    class MaterialHelper {
    public:
        // prevent constructor by default
        MaterialHelper& operator=(MaterialHelper const &) = delete;
        MaterialHelper(MaterialHelper const &) = delete;
        MaterialHelper() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // vIndex: 1, symbol: ?isFoundationBlock@MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBA_NAEBVBlock@@@Z
        virtual bool isFoundationBlock(class Block const &) const;
    
        // vIndex: 2, symbol: ?isWaterBlock@MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBA_NAEBVBlock@@@Z
        virtual bool isWaterBlock(class Block const &) const;
    
        // vIndex: 3, symbol: ?isSolidBlock@MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBA_NAEBVBlock@@@Z
        virtual bool isSolidBlock(class Block const &) const;
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    CappedSurfaceBuilder& operator=(CappedSurfaceBuilder const &) = delete;
    CappedSurfaceBuilder(CappedSurfaceBuilder const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext &, uint32_t);

    // vIndex: 2, symbol: ?buildSurfaceAt@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const &) const;

    // symbol: ??0CappedSurfaceBuilder@VanillaSurfaceBuilders@@QEAA@XZ
    MCAPI CappedSurfaceBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?addSurfaceMaterial@CappedSurfaceBuilder@VanillaSurfaceBuilders@@AEBAXAEAVBlockVolume@@VPos@@HAEBV?$function@$$A6APEBVBlock@@H@Z@std@@@Z
    MCAPI void addSurfaceMaterial(class BlockVolume &, class Pos, int32_t, std::function<class Block const * (int32_t)> const &) const;

    // NOLINTEND

};

};
