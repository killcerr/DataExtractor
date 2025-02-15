#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Detail {

template<typename T0>
struct ErrorInfoBuilder {
public:
    // prevent constructor by default
    ErrorInfoBuilder& operator=(ErrorInfoBuilder const &) = delete;
    ErrorInfoBuilder(ErrorInfoBuilder const &) = delete;
    ErrorInfoBuilder() = delete;

};

};
