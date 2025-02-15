#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerCloseListener {
public:
    // prevent constructor by default
    ContainerCloseListener& operator=(ContainerCloseListener const &) = delete;
    ContainerCloseListener(ContainerCloseListener const &) = delete;
    ContainerCloseListener() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ContainerCloseListener@@UEAA@XZ
    MCVAPI ~ContainerCloseListener();

    // NOLINTEND

};

