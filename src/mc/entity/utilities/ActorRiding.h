#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorRiding {
    // NOLINTBEGIN
    // symbol: ?clearVehiclePrev@ActorRiding@@YAXAEAVEntityContext@@@Z
    MCAPI void clearVehiclePrev(class EntityContext &);

    // symbol: ?getPassengers@ActorRiding@@YAAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEBVEntityContext@@@Z
    MCAPI std::vector<struct StrictActorIDEntityContextPair> const & getPassengers(class EntityContext const &);

    // symbol: ?getPendingRemovePassengers@ActorRiding@@YAAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEBVEntityContext@@@Z
    MCAPI std::vector<struct StrictActorIDEntityContextPair> const & getPendingRemovePassengers(class EntityContext const &);

    // symbol: ?getVehicleID@ActorRiding@@YA?AUActorUniqueID@@AEBVEntityContext@@@Z
    MCAPI struct ActorUniqueID getVehicleID(class EntityContext const &);

    // symbol: ?getVehiclePrevEntity@ActorRiding@@YA?AVStrictEntityContext@@AEBVEntityContext@@@Z
    MCAPI class StrictEntityContext getVehiclePrevEntity(class EntityContext const &);

    // symbol: ?isPassenger@ActorRiding@@YA_NAEBVEntityContext@@@Z
    MCAPI bool isPassenger(class EntityContext const &);

    // symbol: ?setPassengersChanged@ActorRiding@@YAXAEAVEntityContext@@_N@Z
    MCAPI void setPassengersChanged(class EntityContext &, bool);

    // symbol: ?setVehicle@ActorRiding@@YAXAEAVEntityContext@@VStrictEntityContext@@AEBUActorUniqueID@@@Z
    MCAPI void setVehicle(class EntityContext &, class StrictEntityContext, struct ActorUniqueID const &);
    // NOLINTEND

};
