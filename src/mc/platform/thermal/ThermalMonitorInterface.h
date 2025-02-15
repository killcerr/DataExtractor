#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ThermalState.h"

class ThermalMonitorInterface {
public:
    // prevent constructor by default
    ThermalMonitorInterface& operator=(ThermalMonitorInterface const &) = delete;
    ThermalMonitorInterface(ThermalMonitorInterface const &) = delete;
    ThermalMonitorInterface() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getThermalState@FakeThermalMonitorInterface@@UEBA?AW4ThermalState@@XZ
    virtual ::ThermalState getThermalState() const = 0;

    // vIndex: 2, symbol: ?getThermalValueCelsius@FakeThermalMonitorInterface@@UEBAMXZ
    virtual float getThermalValueCelsius() const = 0;

    // vIndex: 3, symbol: ?isLowBatteryModeEnabled@FakeThermalMonitorInterface@@UEBA_NXZ
    virtual bool isLowBatteryModeEnabled() const = 0;

    // NOLINTEND

};

