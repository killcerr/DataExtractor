#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SniffGoal : public ::Goal {
public:
    // SniffGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // SniffGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const &) = delete;
        Definition(Definition const &) = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ??0Definition@SniffGoal@@QEAA@XZ
        MCAPI Definition();
    
        // symbol: ?initialize@Definition@SniffGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext &, class SniffGoal &) const;
    
        // symbol: ?buildSchema@Definition@SniffGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@SniffGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SniffGoal::Definition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    SniffGoal& operator=(SniffGoal const &) = delete;
    SniffGoal(SniffGoal const &) = delete;
    SniffGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SniffGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SniffGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SniffGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SniffGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SniffGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@SniffGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0SniffGoal@@QEAA@AEAVMob@@@Z
    MCAPI SniffGoal(class Mob &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fetchNearbySniffableActors@SniffGoal@@AEBA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@W4ActorType@@@Z
    MCAPI std::vector<struct DistanceSortedActor> _fetchNearbySniffableActors(::ActorType) const;

    // symbol: ?_fetchNearestSniffableActor@SniffGoal@@AEBA?AV?$optional@UDistanceSortedActor@@@std@@XZ
    MCAPI std::optional<struct DistanceSortedActor> _fetchNearestSniffableActor() const;

    // NOLINTEND

};

