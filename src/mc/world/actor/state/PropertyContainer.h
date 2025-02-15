#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

class PropertyContainer {
public:
    // prevent constructor by default
    PropertyContainer& operator=(PropertyContainer const &) = delete;
    PropertyContainer(PropertyContainer const &) = delete;
    PropertyContainer() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyContainer@@QEAA@V?$not_null@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@gsl@@AEAVRenderParams@@@Z
    MCAPI PropertyContainer(class gsl::not_null<std::shared_ptr<class PropertyGroup const>>, class RenderParams &);

    // symbol: ?addEntryToSyncData@PropertyContainer@@QEBAXAEBVPropertyMetadata@@AEAUPropertySyncData@@@Z
    MCAPI void addEntryToSyncData(class PropertyMetadata const &, struct PropertySyncData &) const;

    // symbol: ?getMolangValue@PropertyContainer@@QEBA_N_KAEAUMolangScriptArg@@@Z
    MCAPI bool getMolangValue(uint64_t, struct MolangScriptArg &) const;

    // symbol: ?readLoadedProperties@PropertyContainer@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readLoadedProperties(class CompoundTag const &);

    // symbol: ?setAliasProperties@PropertyContainer@@QEAAXAEBV?$unordered_map@VHashedString@@V?$shared_ptr@VTag@@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$shared_ptr@VTag@@@std@@@std@@@3@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1@Z
    MCAPI void setAliasProperties(std::unordered_map<class HashedString,std::shared_ptr<class Tag>> const &, std::string const &, std::string const &);

    // symbol: ?setFloatValue@PropertyContainer@@QEAAX_KM@Z
    MCAPI void setFloatValue(uint64_t, float);

    // symbol: ?setIntValue@PropertyContainer@@QEAAX_KH@Z
    MCAPI void setIntValue(uint64_t, int32_t);

    // symbol: ??1PropertyContainer@@QEAA@XZ
    MCAPI ~PropertyContainer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addDataToCompoundTag@PropertyContainer@@AEBAXAEAVCompoundTag@@AEBVPropertyMetadata@@@Z
    MCAPI void _addDataToCompoundTag(class CompoundTag &, class PropertyMetadata const &) const;

    // symbol: ?_getPropertyTypeArrayIndex@PropertyContainer@@AEBA?AV?$optional@_K@std@@_KW4ContainedType@PropertyMetadata@@@Z
    MCAPI std::optional<uint64_t> _getPropertyTypeArrayIndex(uint64_t, ::PropertyMetadata::ContainedType) const;

    // symbol: ?_readValueFromTag@PropertyContainer@@AEAA_NAEBVPropertyMetadata@@AEBVTag@@@Z
    MCAPI bool _readValueFromTag(class PropertyMetadata const &, class Tag const &);

    // symbol: ?_trySetEnumIndexByString@PropertyContainer@@AEAA_N_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _trySetEnumIndexByString(uint64_t, std::string const &);

    // NOLINTEND

};

