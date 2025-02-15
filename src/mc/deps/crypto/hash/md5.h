#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
// clang-format on

namespace Crypto::Hash {

class md5 : public ::Crypto::Hash::IHash {
public:
    // prevent constructor by default
    md5& operator=(md5 const &) = delete;
    md5(md5 const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?reset@md5@Hash@Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@md5@Hash@Crypto@@UEAAXPEBXI@Z
    virtual void update(void const *, uint32_t);

    // vIndex: 3, symbol: ?final@md5@Hash@Crypto@@UEAAXPEAE@Z
    virtual void final(uint8_t *);

    // vIndex: 4, symbol: ?resultSize@md5@Hash@Crypto@@UEBA_KXZ
    virtual uint64_t resultSize() const;

    // symbol: ??0md5@Hash@Crypto@@QEAA@XZ
    MCAPI md5();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_body@md5@Hash@Crypto@@AEAAPEBXPEBXI@Z
    MCAPI void const * _body(void const *, uint32_t);

    // NOLINTEND

};

};
