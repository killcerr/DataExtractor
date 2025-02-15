#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/OperationMode.h"
#include "mc/deps/crypto/symmetric/System.h"

namespace Crypto::Symmetric {

class Symmetric {
public:
    // prevent constructor by default
    Symmetric& operator=(Symmetric const &) = delete;
    Symmetric(Symmetric const &) = delete;
    Symmetric() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@Symmetric@1Crypto@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual void init(std::string const &, std::string const &);

    // vIndex: 2, symbol: ?encrypt@Symmetric@1Crypto@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV34@@Z
    virtual void encrypt(std::string const &, std::string &);

    // vIndex: 3, symbol: ?decrypt@Symmetric@1Crypto@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV34@@Z
    virtual void decrypt(std::string const &, std::string &);

    // vIndex: 4, symbol: ?getKeySize@Symmetric@1Crypto@@UEBA_KXZ
    virtual uint64_t getKeySize() const;

    // vIndex: 5, symbol: ?getBlockSize@Symmetric@1Crypto@@UEBA_KXZ
    virtual uint64_t getBlockSize() const;

    // vIndex: 6, symbol: ?getEncryptionBufferSize@Symmetric@1Crypto@@UEBA_K_K@Z
    virtual uint64_t getEncryptionBufferSize(uint64_t) const;

    // vIndex: 7, symbol: ?encryptToBuffer@Symmetric@1Crypto@@UEAA_NV?$span@$$CBD$0?0@gsl@@V?$span@D$0?0@4@AEA_K@Z
    virtual bool encryptToBuffer(class gsl::span<char const>, class gsl::span<char>, uint64_t &);

    // symbol: ??1Symmetric@0Crypto@@UEAA@XZ
    MCVAPI ~Symmetric();

    // symbol: ??0Symmetric@0Crypto@@QEAA@W4System@01@W4OperationMode@01@@Z
    MCAPI Symmetric(::Crypto::Symmetric::System, ::Crypto::Symmetric::OperationMode);

    // NOLINTEND

};

};
