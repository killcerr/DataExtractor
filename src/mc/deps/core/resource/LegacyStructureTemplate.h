#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

class LegacyStructureTemplate {
public:
    // prevent constructor by default
    LegacyStructureTemplate& operator=(LegacyStructureTemplate const &) = delete;
    LegacyStructureTemplate(LegacyStructureTemplate const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getMarkers@LegacyStructureTemplate@@UEBA?AV?$unordered_map@VBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEBVBlockPos@@AEAVLegacyStructureSettings@@@Z
    virtual std::unordered_map<class BlockPos,std::string> getMarkers(class BlockPos const &, class LegacyStructureSettings &) const;

    // vIndex: 1, symbol: ?placeInWorld@LegacyStructureTemplate@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
    virtual void placeInWorld(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &) const;

    // symbol: ??0LegacyStructureTemplate@@QEAA@XZ
    MCAPI LegacyStructureTemplate();

    // symbol: ?calculateConnectedPosition@LegacyStructureTemplate@@QEBA?AVBlockPos@@AEBVLegacyStructureSettings@@AEBV2@01@Z
    MCAPI class BlockPos calculateConnectedPosition(class LegacyStructureSettings const &, class BlockPos const &, class LegacyStructureSettings const &, class BlockPos const &) const;

    // symbol: ?finalizeBlockRules@LegacyStructureTemplate@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
    MCAPI void finalizeBlockRules(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &) const;

    // symbol: ?getJigsawMarkers@LegacyStructureTemplate@@QEBA?AV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@std@@XZ
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;

    // symbol: ?getSize@LegacyStructureTemplate@@QEBA?AVBlockPos@@W4Rotation@@@Z
    MCAPI class BlockPos getSize(::Rotation) const;

    // symbol: ?load@LegacyStructureTemplate@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void load(class CompoundTag const &);

    // symbol: ?placeInWorldChunk@LegacyStructureTemplate@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
    MCAPI void placeInWorldChunk(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &);

    // symbol: ?_mapPropertyToExtraBlock@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI static class Block const * _mapPropertyToExtraBlock(std::string const &, std::string const &);

    // symbol: ?_mapToBlock@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Block const * _mapToBlock(std::string const &);

    // symbol: ?_mapToData@LegacyStructureTemplate@@SAAEBVBlock@@AEBV2@AEBVLegacyStructureSettings@@@Z
    MCAPI static class Block const & _mapToData(class Block const &, class LegacyStructureSettings const &);

    // symbol: ?_mapToProperty@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBV2@@Z
    MCAPI static class Block const * _mapToProperty(std::string const &, std::string const &, class Block const &);

    // symbol: ?getZeroPositionWithTransform@LegacyStructureTemplate@@SA?AVBlockPos@@AEBV2@W4Mirror@@W4Rotation@@HH@Z
    MCAPI static class BlockPos getZeroPositionWithTransform(class BlockPos const &, ::Mirror, ::Rotation, int32_t, int32_t);

    // symbol: ?transform@LegacyStructureTemplate@@SA?AVBlockPos@@V2@W4Mirror@@W4Rotation@@@Z
    MCAPI static class BlockPos transform(class BlockPos, ::Mirror, ::Rotation);

    // symbol: ?AUTHOR_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const AUTHOR_TAG;

    // symbol: ?BLOCKS_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCKS_TAG;

    // symbol: ?BLOCK_TAG_NBT@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCK_TAG_NBT;

    // symbol: ?BLOCK_TAG_POS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCK_TAG_POS;

    // symbol: ?BLOCK_TAG_STATE@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCK_TAG_STATE;

    // symbol: ?CHUNK_SIZE@LegacyStructureTemplate@@2HB
    MCAPI static int32_t const CHUNK_SIZE;

    // symbol: ?ENTITIES_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ENTITIES_TAG;

    // symbol: ?ENTITY_TAG_BLOCKPOS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ENTITY_TAG_BLOCKPOS;

    // symbol: ?ENTITY_TAG_NBT@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ENTITY_TAG_NBT;

    // symbol: ?ENTITY_TAG_POS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ENTITY_TAG_POS;

    // symbol: ?MINECRAFT_PREFIX@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const MINECRAFT_PREFIX;

    // symbol: ?PALETTE_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PALETTE_TAG;

    // symbol: ?SIZE_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SIZE_TAG;

    // symbol: ?STRUCTURE_VERSION@LegacyStructureTemplate@@2HB
    MCAPI static int32_t const STRUCTURE_VERSION;

    // symbol: ?VERSION_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const VERSION_TAG;

    // symbol: ?defaultSettings@LegacyStructureTemplate@@2VLegacyStructureSettings@@B
    MCAPI static class LegacyStructureSettings const defaultSettings;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_mapPropertiesToTags@LegacyStructureTemplate@@CAXAEAVCompoundTag@@AEBV2@@Z
    MCAPI static void _mapPropertiesToTags(class CompoundTag &, class CompoundTag const &);

    // symbol: ?_mapPropertyToTag@LegacyStructureTemplate@@CAXAEAVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI static void _mapPropertyToTag(class CompoundTag &, std::string const &, std::string const &);

    // symbol: ?_mapTag@LegacyStructureTemplate@@CA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::unique_ptr<class CompoundTag> _mapTag(std::unique_ptr<class CompoundTag>, std::string const &);

    // NOLINTEND

};

