#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseDefinition.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TimerActorFlag2Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag2Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // TimerActorFlag2Goal inner types define
    class Definition : public ::TimerActorFlagBaseDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const &) = delete;
        Definition(Definition const &) = delete;
        Definition() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ?buildSchema@Definition@TimerActorFlag2Goal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@TimerActorFlag2Goal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerActorFlag2Goal::Definition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    TimerActorFlag2Goal& operator=(TimerActorFlag2Goal const &) = delete;
    TimerActorFlag2Goal(TimerActorFlag2Goal const &) = delete;
    TimerActorFlag2Goal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??0TimerActorFlag2Goal@@QEAA@AEAVMob@@@Z
    MCAPI TimerActorFlag2Goal(class Mob &);

    // NOLINTEND

};

