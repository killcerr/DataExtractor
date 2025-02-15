#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatcherProcess {
public:
    // prevent constructor by default
    DispatcherProcess& operator=(DispatcherProcess const &) = delete;
    DispatcherProcess(DispatcherProcess const &) = delete;
    DispatcherProcess() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?send@HttpUrlValidator@Http@Bedrock@@UEAA?AV?$shared_ptr@V?$IAsyncResult@VResponse@Http@Bedrock@@@Threading@Bedrock@@@std@@$$QEAVRequest@23@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>> send(class Bedrock::Http::Request &&) = 0;

    // vIndex: 2, symbol: ?initialize@DispatcherProcess@Http@Bedrock@@UEAAXXZ
    virtual void initialize();

    // vIndex: 3, symbol: ?shutdown@DispatcherProcess@Http@Bedrock@@UEAAXXZ
    virtual void shutdown();

    // vIndex: 4, symbol: ?suspend@DispatcherProcess@Http@Bedrock@@UEAAXXZ
    virtual void suspend();

    // vIndex: 5, symbol: ?resume@DispatcherProcess@Http@Bedrock@@UEAAXXZ
    virtual void resume();

    // symbol: ??1DispatcherProcess@Http@Bedrock@@UEAA@XZ
    MCVAPI ~DispatcherProcess();

    // symbol: ??0DispatcherProcess@Http@Bedrock@@QEAA@V?$shared_ptr@VDispatcherProcess@Http@Bedrock@@@std@@@Z
    MCAPI DispatcherProcess(std::shared_ptr<class Bedrock::Http::DispatcherProcess>);

    // NOLINTEND

};

};
