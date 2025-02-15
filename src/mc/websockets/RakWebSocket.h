#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WSConnectionResult.h"
#include "mc/enums/CloseStatusCode.h"
#include "mc/enums/OpCode.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocket& operator=(RakWebSocket const &) = delete;
    RakWebSocket(RakWebSocket const &) = delete;
    RakWebSocket() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    virtual ::WSConnectionResult connect(std::string const &, std::vector<std::string> const &);

    // vIndex: 2, symbol: ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::WSConnectionResult connect(std::string const &);

    // vIndex: 3, symbol: ?isReady@RakWebSocket@@UEBA_NXZ
    virtual bool isReady() const;

    // vIndex: 4, symbol: ?setOnMessageReceivedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBVRakWebSocketDataFrame@@@Z@std@@@Z
    virtual void setOnMessageReceivedHandler(std::function<void (class RakWebSocketDataFrame const &)> const &);

    // vIndex: 5, symbol: ?setOnCloseHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXW4CloseStatusCode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    virtual void setOnCloseHandler(std::function<void (::CloseStatusCode, std::string const &)> const &);

    // vIndex: 6, symbol: ?setOnConnectedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    virtual void setOnConnectedHandler(std::function<void (std::string const &)> const &);

    // vIndex: 7, symbol: ?tick@RakWebSocket@@UEAAXXZ
    virtual void tick();

    // vIndex: 8, symbol: ?_updateState@RakWebSocketClient@@MEAAXXZ
    virtual void _updateState() = 0;

    // vIndex: 9, symbol: ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
    virtual uint32_t _genMaskingKey() const = 0;

    // symbol: ??1RakWebSocket@@UEAA@XZ
    MCVAPI ~RakWebSocket();

    // symbol: ??0RakWebSocket@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@_N@Z
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool);

    // symbol: ?send@RakWebSocket@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool send(std::string const &);

    // symbol: ?sendBinary@RakWebSocket@@QEAA_NPEBE_K@Z
    MCAPI bool sendBinary(uint8_t const *, uint64_t);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_close@RakWebSocket@@IEAAXW4CloseStatusCode@@@Z
    MCAPI void _close(::CloseStatusCode);

    // symbol: ?_createWebSocketKey@RakWebSocket@@IEAAXXZ
    MCAPI void _createWebSocketKey();

    // symbol: ?_fail@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CloseStatusCode@@@Z
    MCAPI void _fail(std::string const &, ::CloseStatusCode);

    // symbol: ?_generateBase64SHA1Key@RakWebSocket@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI std::string _generateBase64SHA1Key(std::string const &);

    // symbol: ?_invokeOnCloseHandler@RakWebSocket@@IEAAXXZ
    MCAPI void _invokeOnCloseHandler();

    // symbol: ?_processClosingHandshake@RakWebSocket@@IEAAX_N@Z
    MCAPI void _processClosingHandshake(bool);

    // symbol: ?_processDataFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
    MCAPI void _processDataFrames(class RakNet::BitStream &);

    // symbol: ?_processPacket@RakWebSocket@@IEAA_NAEBV?$function@$$A6AXAEAVBitStream@RakNet@@@Z@std@@_N@Z
    MCAPI bool _processPacket(std::function<void (class RakNet::BitStream &)> const &, bool);

    // symbol: ?_reset@RakWebSocket@@IEAAXXZ
    MCAPI void _reset();

    // symbol: ?_sendControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
    MCAPI bool _sendControlFrame(uint8_t const *, uint64_t, ::OpCode);

    // symbol: ?_sendDataFrame@RakWebSocket@@IEAA_NPEBEIW4OpCode@@_N@Z
    MCAPI bool _sendDataFrame(uint8_t const *, uint32_t, ::OpCode, bool);

    // symbol: ?_sendNonControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
    MCAPI bool _sendNonControlFrame(uint8_t const *, uint64_t, ::OpCode);

    // symbol: ?_splitWebSocketURI@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@11@Z
    MCAPI void _splitWebSocketURI(std::string const &, std::string &, std::string &, std::string &);

    // symbol: ?_subProcessHttpResponse@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream &);

    // symbol: ?_validateFields@RakWebSocket@@IEAAXXZ
    MCAPI void _validateFields();

    // symbol: ?_validateWebSocketURI@RakWebSocket@@IEAA_NXZ
    MCAPI bool _validateWebSocketURI();

    // NOLINTEND

};

