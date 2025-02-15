#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class StrongholdPiece : public ::StructurePiece {
public:
    // StrongholdPiece inner types define
    enum class SmallDoorType {};
    
public:
    // prevent constructor by default
    StrongholdPiece& operator=(StrongholdPiece const &) = delete;
    StrongholdPiece(StrongholdPiece const &) = delete;
    StrongholdPiece() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1StrongholdPiece@@UEAA@XZ
    MCVAPI ~StrongholdPiece();

    // symbol: ?findAndCreatePieceFactory@StrongholdPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class StructurePiece> findAndCreatePieceFactory(std::string const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int32_t, int32_t, int32_t, int32_t, int32_t);

    // symbol: ?generateAndAddPiece@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH@Z
    MCAPI class StructurePiece * generateAndAddPiece(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int32_t, int32_t, int32_t, int32_t, int32_t);

    // symbol: ?generatePieceFromSmallDoor@StrongholdPiece@@QEAA?AV?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEBVRandom@@HHHHH@Z
    MCAPI std::unique_ptr<class StructurePiece> generatePieceFromSmallDoor(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random const &, int32_t, int32_t, int32_t, int32_t, int32_t);

    // symbol: ?generateSmallDoor@StrongholdPiece@@QEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@W4SmallDoorType@1@HHH@Z
    MCAPI void generateSmallDoor(class BlockSource &, class Random &, class BoundingBox const &, ::StrongholdPiece::SmallDoorType, int32_t, int32_t, int32_t);

    // symbol: ?generateSmallDoorChildForward@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH@Z
    MCAPI class StructurePiece * generateSmallDoorChildForward(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int32_t, int32_t);

    // symbol: ?generateSmallDoorChildLeft@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH@Z
    MCAPI class StructurePiece * generateSmallDoorChildLeft(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int32_t, int32_t);

    // symbol: ?generateSmallDoorChildRight@StrongholdPiece@@QEAAPEAVStructurePiece@@AEAVSHStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH@Z
    MCAPI class StructurePiece * generateSmallDoorChildRight(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int32_t, int32_t);

    // NOLINTEND

};

