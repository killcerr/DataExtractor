#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/IGetPlacementBlockCallback.h"
#include "mc/world/level/block/utils/ITrait.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class CompoundTag;
class Vec3;
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class PlacementPosition : public ::BlockTrait::ITrait {
public:
    // PlacementPosition inner types declare
    // clang-format off
    struct EnabledStates;
    class UpdateBlockFaceGetPlacementBlockCallback;
    class UpdateVerticalHalfGetPlacementBlockCallback;
    // clang-format on
    
    // PlacementPosition inner types define
    struct EnabledStates {
    public:
        // prevent constructor by default
        EnabledStates& operator=(EnabledStates const &) = delete;
        EnabledStates(EnabledStates const &) = delete;
        EnabledStates() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ?fromStringVector@EnabledStates@PlacementPosition@BlockTrait@@SAXAEAU123@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
        MCAPI static void fromStringVector(struct BlockTrait::PlacementPosition::EnabledStates &, std::vector<std::string> const &);
    
        // NOLINTEND
    
    };
    
    class UpdateBlockFaceGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // prevent constructor by default
        UpdateBlockFaceGetPlacementBlockCallback& operator=(UpdateBlockFaceGetPlacementBlockCallback const &) = delete;
        UpdateBlockFaceGetPlacementBlockCallback(UpdateBlockFaceGetPlacementBlockCallback const &) = delete;
        UpdateBlockFaceGetPlacementBlockCallback() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // vIndex: 1, symbol: ?getPlacementBlock@UpdateBlockFaceGetPlacementBlockCallback@PlacementPosition@BlockTrait@@UEBA?AV?$not_null@PEBVBlock@@@gsl@@V45@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
        virtual class gsl::not_null<class Block const *> getPlacementBlock(class gsl::not_null<class Block const *>, class Actor const &, class BlockPos const &, uint8_t, class Vec3 const &, int32_t) const;
    
        // NOLINTEND
    
    };
    
    class UpdateVerticalHalfGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // prevent constructor by default
        UpdateVerticalHalfGetPlacementBlockCallback& operator=(UpdateVerticalHalfGetPlacementBlockCallback const &) = delete;
        UpdateVerticalHalfGetPlacementBlockCallback(UpdateVerticalHalfGetPlacementBlockCallback const &) = delete;
        UpdateVerticalHalfGetPlacementBlockCallback() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // vIndex: 1, symbol: ?getPlacementBlock@UpdateVerticalHalfGetPlacementBlockCallback@PlacementPosition@BlockTrait@@UEBA?AV?$not_null@PEBVBlock@@@gsl@@V45@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
        virtual class gsl::not_null<class Block const *> getPlacementBlock(class gsl::not_null<class Block const *>, class Actor const &, class BlockPos const &, uint8_t, class Vec3 const &, int32_t) const;
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    PlacementPosition& operator=(PlacementPosition const &) = delete;
    PlacementPosition(PlacementPosition const &) = delete;
    PlacementPosition() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?applyToBlockLegacy@PlacementPosition@BlockTrait@@UEBAXAEAVBlockLegacy@@@Z
    virtual void applyToBlockLegacy(class BlockLegacy &) const;

    // vIndex: 2, symbol: ?buildNetworkTag@PlacementPosition@BlockTrait@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 3, symbol: ?initializeFromNetwork@PlacementPosition@BlockTrait@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const &);

    // symbol: ??1PlacementPosition@BlockTrait@@UEAA@XZ
    MCVAPI ~PlacementPosition();

    // symbol: ?BlockFace@PlacementPosition@BlockTrait@@SA?AV12@XZ
    MCAPI static class BlockTrait::PlacementPosition BlockFace();

    // symbol: ?VerticalHalf@PlacementPosition@BlockTrait@@SA?AV12@XZ
    MCAPI static class BlockTrait::PlacementPosition VerticalHalf();

    // symbol: ?bindType@PlacementPosition@BlockTrait@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?getName@PlacementPosition@BlockTrait@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string const & getName();

    // NOLINTEND

};

};
