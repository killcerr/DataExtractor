#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {

class Hash : public ::Crypto::Hash::IHash {
public:
    // prevent constructor by default
    Hash& operator=(Hash const &) = delete;
    Hash(Hash const &) = delete;
    Hash() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?reset@Hash@1Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@Hash@1Crypto@@UEAAXPEBXI@Z
    virtual void update(void const *, uint32_t);

    // vIndex: 3, symbol: ?final@Hash@1Crypto@@UEAAXPEAE@Z
    virtual void final(uint8_t *);

    // vIndex: 4, symbol: ?resultSize@Hash@1Crypto@@UEBA_KXZ
    virtual uint64_t resultSize() const;

    // symbol: ??1Hash@0Crypto@@UEAA@XZ
    MCVAPI ~Hash();

    // symbol: ??0Hash@0Crypto@@QEAA@W4HashType@01@@Z
    MCAPI Hash(::Crypto::Hash::HashType);

    // symbol: ?final@Hash@1Crypto@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string final();

    // symbol: ?getUUID@Hash@1Crypto@@QEAA?AVUUID@mce@@XZ
    MCAPI class mce::UUID getUUID();

    // NOLINTEND

};

};
