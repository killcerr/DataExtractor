#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template<typename... T0>
class Result {
public:
    // prevent constructor by default
    Result& operator=(Result const &) = delete;
    Result(Result const &) = delete;
    Result() = delete;

};

};
