#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandPosition {
public:
    // prevent constructor by default
    CommandPosition& operator=(CommandPosition const &) = delete;
    CommandPosition(CommandPosition const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandPosition@@QEAA@XZ
    MCAPI CommandPosition();

    // symbol: ??0CommandPosition@@QEAA@AEBVVec3@@@Z
    MCAPI CommandPosition(class Vec3 const &);

    // symbol: ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@AEBVVec3@@0@Z
    MCAPI class BlockPos getBlockPos(class Vec3 const &, class Vec3 const &) const;

    // symbol: ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@HAEBVCommandOrigin@@AEBVVec3@@@Z
    MCAPI class BlockPos getBlockPos(int32_t, class CommandOrigin const &, class Vec3 const &) const;

    // symbol: ?getPosition@CommandPosition@@QEBA?AVVec3@@AEBV2@0@Z
    MCAPI class Vec3 getPosition(class Vec3 const &, class Vec3 const &) const;

    // symbol: ?getPosition@CommandPosition@@QEBA?AVVec3@@HAEBVCommandOrigin@@AEBV2@@Z
    MCAPI class Vec3 getPosition(int32_t, class CommandOrigin const &, class Vec3 const &) const;

    // symbol: ?serialize@CommandPosition@@QEBA?AVCompoundTag@@XZ
    MCAPI class CompoundTag serialize() const;

    // NOLINTEND

};

