#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

class ConsoleGameTestListener : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    ConsoleGameTestListener& operator=(ConsoleGameTestListener const &) = delete;
    ConsoleGameTestListener(ConsoleGameTestListener const &) = delete;
    ConsoleGameTestListener() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?onTestStructureLoaded@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);

    // vIndex: 2, symbol: ?onTestPassed@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestPassed(class gametest::BaseGameTestInstance &);

    // vIndex: 3, symbol: ?onTestFailed@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestFailed(class gametest::BaseGameTestInstance &);

    // NOLINTEND

};

