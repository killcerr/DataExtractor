#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockLightEmissionVersioning {

class BlockLightEmission11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightEmission11910Upgrade& operator=(BlockLightEmission11910Upgrade const &) = delete;
    BlockLightEmission11910Upgrade(BlockLightEmission11910Upgrade const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?previousSchema@BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory &) const;

    // vIndex: 2, symbol: ?upgradeToNext@BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;

    // symbol: ??0BlockLightEmission11910Upgrade@BlockLightEmissionVersioning@@QEAA@XZ
    MCAPI BlockLightEmission11910Upgrade();

    // NOLINTEND

};

};
