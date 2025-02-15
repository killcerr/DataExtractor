#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ThermalState.h"
#include "mc/platform/thermal/ThermalMonitorInterface.h"

class FakeThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // prevent constructor by default
    FakeThermalMonitorInterface& operator=(FakeThermalMonitorInterface const &) = delete;
    FakeThermalMonitorInterface(FakeThermalMonitorInterface const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getThermalState@FakeThermalMonitorInterface@@UEBA?AW4ThermalState@@XZ
    virtual ::ThermalState getThermalState() const;

    // vIndex: 2, symbol: ?getThermalValueCelsius@FakeThermalMonitorInterface@@UEBAMXZ
    virtual float getThermalValueCelsius() const;

    // vIndex: 3, symbol: ?isLowBatteryModeEnabled@FakeThermalMonitorInterface@@UEBA_NXZ
    virtual bool isLowBatteryModeEnabled() const;

    // symbol: ??0FakeThermalMonitorInterface@@QEAA@XZ
    MCAPI FakeThermalMonitorInterface();

    // NOLINTEND

};

