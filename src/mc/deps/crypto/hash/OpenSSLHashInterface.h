#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
// clang-format on

namespace Crypto::Hash {

class OpenSSLHashInterface : public ::Crypto::Hash::IHash {
public:
    // prevent constructor by default
    OpenSSLHashInterface& operator=(OpenSSLHashInterface const &) = delete;
    OpenSSLHashInterface(OpenSSLHashInterface const &) = delete;
    OpenSSLHashInterface() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?reset@OpenSSLHashInterface@Hash@Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@OpenSSLHashInterface@Hash@Crypto@@UEAAXPEBXI@Z
    virtual void update(void const *, uint32_t);

    // vIndex: 3, symbol: ?final@OpenSSLHashInterface@Hash@Crypto@@UEAAXPEAE@Z
    virtual void final(uint8_t *);

    // vIndex: 4, symbol: ?resultSize@OpenSSLHashInterface@Hash@Crypto@@UEBA_KXZ
    virtual uint64_t resultSize() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initHashContextPointer@OpenSSLHashInterface@Hash@Crypto@@AEAAXXZ
    MCAPI void _initHashContextPointer();

    // NOLINTEND

};

};
