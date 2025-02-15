#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"

class SubChunkRelighter {
public:
    // prevent constructor by default
    SubChunkRelighter& operator=(SubChunkRelighter const &) = delete;
    SubChunkRelighter(SubChunkRelighter const &) = delete;
    SubChunkRelighter() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SubChunkRelighter@@QEAA@AEAVBlockSource@@_KAEBVChunkPos@@_N3@Z
    MCAPI SubChunkRelighter(class BlockSource &, uint64_t, class ChunkPos const &, bool, bool);

    // symbol: ?_getAbsorption@SubChunkRelighter@@QEBAPEAUSubChunk@@USubChunkLightIndex@@AEAE@Z
    MCAPI struct SubChunk * _getAbsorption(struct SubChunkLightIndex, uint8_t &) const;

    // symbol: ?_propagateBlockLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateBlockLight();

    // symbol: ?_propagateBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, uint8_t);

    // symbol: ?_propagateSkyLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateSkyLight();

    // symbol: ?_propagateSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, uint8_t);

    // symbol: ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, uint8_t);

    // symbol: ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateSubtractiveBlockLight();

    // symbol: ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXXZ
    MCAPI void _propagateSubtractiveSkyLight();

    // symbol: ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, uint8_t);

    // symbol: ?_setLightHelper@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111II@Z
    MCAPI void _setLightHelper(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness, uint32_t, uint32_t);

    // symbol: ?_setPropagatedBlockLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, uint8_t);

    // symbol: ?_setPropagatedSkyLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, uint8_t);

    // symbol: ?_setSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111@Z
    MCAPI void _setSkyLight(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness);

    // symbol: ?getBlock@SubChunkRelighter@@QEAAXAEBVPos@@AEAPEBVBlock@@1@Z
    MCAPI void getBlock(class Pos const &, class Block const *&, class Block const *&);

    // symbol: ?getCentralSubchunkOrigin@SubChunkRelighter@@QEAA?AVPos@@XZ
    MCAPI class Pos getCentralSubchunkOrigin();

    // symbol: ?getLightPair@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const &) const;

    // symbol: ?getLightPairWithPlaceholderCheck@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@AEBU23@@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(class Pos const &, struct SubChunkBrightnessStorage::LightPair const &) const;

    // symbol: ?getTouchedSubChunks@SubChunkRelighter@@QEAAXAEAV?$vector@VPos@@V?$allocator@VPos@@@std@@@std@@@Z
    MCAPI void getTouchedSubChunks(std::vector<class Pos> &);

    // symbol: ?setBlockLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
    MCAPI void setBlockLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);

    // symbol: ?setSkyLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
    MCAPI void setSkyLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);

    // symbol: ?update@SubChunkRelighter@@QEAAXAEBVBlockPos@@_K@Z
    MCAPI void update(class BlockPos const &, uint64_t);

    // symbol: ??1SubChunkRelighter@@QEAA@XZ
    MCAPI ~SubChunkRelighter();

    // symbol: ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
    MCAPI static std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    // symbol: ?computeOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
    MCAPI static std::bitset<196608> computeOuterEdgeOfComputationBits();

    // symbol: ?initializeStatics@SubChunkRelighter@@SAXXZ
    MCAPI static void initializeStatics();

    // symbol: ?shutdownStatics@SubChunkRelighter@@SAXXZ
    MCAPI static void shutdownStatics();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dirtySubChunk@SubChunkRelighter@@AEAAPEAUSubChunk@@USubChunkLightIndex@@AEAI@Z
    MCAPI struct SubChunk * _dirtySubChunk(struct SubChunkLightIndex, uint32_t &);

    // symbol: ?_getBlock@SubChunkRelighter@@AEBAPEAUSubChunk@@USubChunkLightIndex@@AEAPEBVBlock@@1@Z
    MCAPI struct SubChunk * _getBlock(struct SubChunkLightIndex, class Block const *&, class Block const *&) const;

    // symbol: ?_getLight@SubChunkRelighter@@AEAAEUSubChunkLightIndex@@@Z
    MCAPI uint8_t _getLight(struct SubChunkLightIndex);

    // symbol: ?_getLightPair@SubChunkRelighter@@AEBA?AULightPair@SubChunkBrightnessStorage@@USubChunkLightIndex@@@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@0V?$bitset@$0DAAAA@@std@@A
    MCAPI static std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;

    // symbol: ?mOuterEdgeOfComputationBits@SubChunkRelighter@@0V?$bitset@$0DAAAA@@std@@A
    MCAPI static std::bitset<196608> mOuterEdgeOfComputationBits;

    // symbol: ?sDarkSpinLock@SubChunkRelighter@@0VSpinLock@@A
    MCAPI static class SpinLock sDarkSpinLock;

    // symbol: ?sFullyDarkSubChunk@SubChunkRelighter@@0USubChunk@@A
    MCAPI static struct SubChunk sFullyDarkSubChunk;

    // symbol: ?sFullyLitSubChunk@SubChunkRelighter@@0USubChunk@@A
    MCAPI static struct SubChunk sFullyLitSubChunk;

    // symbol: ?sLitSpinLock@SubChunkRelighter@@0VSpinLock@@A
    MCAPI static class SpinLock sLitSpinLock;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits() { return mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits; }

    inline auto& $mOuterEdgeOfComputationBits() { return mOuterEdgeOfComputationBits; }

    inline auto& $sDarkSpinLock() { return sDarkSpinLock; }

    inline auto& $sFullyDarkSubChunk() { return sFullyDarkSubChunk; }

    inline auto& $sFullyLitSubChunk() { return sFullyLitSubChunk; }

    inline auto& $sLitSpinLock() { return sLitSpinLock; }

    // NOLINTEND

};

