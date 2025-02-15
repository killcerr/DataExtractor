#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AgentCommandExecutionGoal : public ::Goal {
public:
    // prevent constructor by default
    AgentCommandExecutionGoal& operator=(AgentCommandExecutionGoal const &) = delete;
    AgentCommandExecutionGoal(AgentCommandExecutionGoal const &) = delete;
    AgentCommandExecutionGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@AgentCommandExecutionGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 3, symbol: ?canBeInterrupted@AgentCommandExecutionGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@AgentCommandExecutionGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@AgentCommandExecutionGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol: ?appendDebugInfo@AgentCommandExecutionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0AgentCommandExecutionGoal@@QEAA@AEAVMob@@@Z
    MCAPI AgentCommandExecutionGoal(class Mob &);

    // NOLINTEND

};

