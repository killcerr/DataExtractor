#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume {
public:
    // SimpleBlockVolume inner types define
    enum class IntersectionResult {};
    
public:
    // prevent constructor by default
    SimpleBlockVolume() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SimpleBlockVolume@@QEAA@AEBV0@@Z
    MCAPI SimpleBlockVolume(class SimpleBlockVolume const &);

    // symbol: ??0SimpleBlockVolume@@QEAA@$$QEAV0@@Z
    MCAPI SimpleBlockVolume(class SimpleBlockVolume &&);

    // symbol: ?begin@SimpleBlockVolume@@QEBA?AVSimpleBlockVolumeIterator@@XZ
    MCAPI class SimpleBlockVolumeIterator begin() const;

    // symbol: ?contains@SimpleBlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool contains(class BlockPos const &) const;

    // symbol: ?doesAreaTouchFaces@SimpleBlockVolume@@QEBA_NAEBVBlockPos@@0@Z
    MCAPI bool doesAreaTouchFaces(class BlockPos const &, class BlockPos const &) const;

    // symbol: ?doesBlockTouchFaces@SimpleBlockVolume@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool doesBlockTouchFaces(class BlockPos const &) const;

    // symbol: ?getBoundingBox@SimpleBlockVolume@@QEBA?AVBoundingBox@@XZ
    MCAPI class BoundingBox getBoundingBox() const;

    // symbol: ?getCapacity@SimpleBlockVolume@@QEBAHXZ
    MCAPI int32_t getCapacity() const;

    // symbol: ?getFrom@SimpleBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getFrom() const;

    // symbol: ?getMax@SimpleBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getMax() const;

    // symbol: ?getMin@SimpleBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getMin() const;

    // symbol: ?getSpan@SimpleBlockVolume@@QEBA?AU?$vec@$02H$0A@@glm@@XZ
    MCAPI struct glm::vec<3, int32_t, 0> getSpan() const;

    // symbol: ?getTo@SimpleBlockVolume@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getTo() const;

    // symbol: ?getWorldAABB@SimpleBlockVolume@@QEBA?AVAABB@@XZ
    MCAPI class AABB getWorldAABB() const;

    // symbol: ?intersects@SimpleBlockVolume@@QEBA?AW4IntersectionResult@1@AEBV1@@Z
    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(class SimpleBlockVolume const &) const;

    // symbol: ??4SimpleBlockVolume@@QEAAAEAV0@AEBV0@@Z
    MCAPI class SimpleBlockVolume & operator=(class SimpleBlockVolume const &);

    // symbol: ??4SimpleBlockVolume@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class SimpleBlockVolume & operator=(class SimpleBlockVolume &&);

    // symbol: ??8SimpleBlockVolume@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class SimpleBlockVolume const &) const;

    // symbol: ?translate@SimpleBlockVolume@@QEAAAEAV1@AEBVBlockPos@@@Z
    MCAPI class SimpleBlockVolume & translate(class BlockPos const &);

    // symbol: ?translated@SimpleBlockVolume@@QEBA?AV1@AEBU?$vec@$02H$0A@@glm@@@Z
    MCAPI class SimpleBlockVolume translated(struct glm::vec<3, int32_t, 0> const &) const;

    // symbol: ?cerealBindTypes@SimpleBlockVolume@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void cerealBindTypes(struct cereal::ReflectionCtx &);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_setFrom@SimpleBlockVolume@@IEAAXAEBVVec3@@@Z
    MCAPI void _setFrom(class Vec3 const &);

    // symbol: ?_setTo@SimpleBlockVolume@@IEAAXAEBVVec3@@@Z
    MCAPI void _setTo(class Vec3 const &);

    // NOLINTEND

};

