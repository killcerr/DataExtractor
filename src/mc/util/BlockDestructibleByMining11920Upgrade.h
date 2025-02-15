#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDestroyTimeVersioning {

class BlockDestructibleByMining11920Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDestructibleByMining11920Upgrade& operator=(BlockDestructibleByMining11920Upgrade const &) = delete;
    BlockDestructibleByMining11920Upgrade(BlockDestructibleByMining11920Upgrade const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?previousSchema@BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory &) const;

    // vIndex: 2, symbol: ?upgradeToNext@BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;

    // symbol: ??0BlockDestructibleByMining11920Upgrade@BlockDestroyTimeVersioning@@QEAA@XZ
    MCAPI BlockDestructibleByMining11920Upgrade();

    // NOLINTEND

};

};
