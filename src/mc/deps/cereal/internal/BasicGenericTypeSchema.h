#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class BasicGenericTypeSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    BasicGenericTypeSchema& operator=(BasicGenericTypeSchema const &) = delete;
    BasicGenericTypeSchema(BasicGenericTypeSchema const &) = delete;
    BasicGenericTypeSchema() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?doLoadWithSchema@BasicGenericTypeSchema@internal@cereal@@IEBAXAEBVmeta_type@entt@@AEAUSchemaReader@3@AEAVmeta_any@5@AEBUSerializerTraits@3@AEBV75@AEAVSerializerContext@3@AEBUtype_info@5@@Z
    MCAPI void doLoadWithSchema(class entt::meta_type const &, struct cereal::SchemaReader &, class entt::meta_any &, struct cereal::SerializerTraits const &, class entt::meta_any const &, class cereal::SerializerContext &, struct entt::type_info const &) const;

    // symbol: ?doSaveWithSchema@BasicGenericTypeSchema@internal@cereal@@IEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@AEBU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@Z
    MCAPI void doSaveWithSchema(struct cereal::SchemaWriter &, class entt::meta_any const &, struct cereal::SerializerTraits const &, class cereal::SerializerContext &, std::pair<std::string, std::string> const &) const;

    // symbol: ?doValidateWithSchema@BasicGenericTypeSchema@internal@cereal@@IEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@AEBUtype_info@6@@Z
    MCAPI void doValidateWithSchema(struct cereal::SchemaReader &, class entt::meta_any &, struct cereal::SerializerTraits const &, class cereal::SerializerContext &, struct entt::type_info const &) const;

    // symbol: ?lookupSchema@BasicGenericTypeSchema@internal@cereal@@IEBAPEBVBasicSchema@23@AEAVSerializerContext@3@AEBU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@Z
    MCAPI class cereal::internal::BasicSchema const * lookupSchema(class cereal::SerializerContext &, std::pair<std::string, std::string> const &) const;

    // symbol: ?unpackWithInfo@BasicGenericTypeSchema@internal@cereal@@IEBAXAEBUtype_info@entt@@AEAV?$vector@V?$reference_wrapper@$$CBVBasicSchema@internal@cereal@@@std@@V?$allocator@V?$reference_wrapper@$$CBVBasicSchema@internal@cereal@@@std@@@2@@std@@AEAV?$dense_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@@std@@@2@@5@@Z
    MCAPI void unpackWithInfo(struct entt::type_info const &, std::vector<std::reference_wrapper<class cereal::internal::BasicSchema const>> &, class entt::dense_map<std::string, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>>> &) const;

    // NOLINTEND

};

};
