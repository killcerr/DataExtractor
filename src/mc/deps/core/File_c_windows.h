#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystem_windows; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File_c_windows {
public:
    // prevent constructor by default
    File_c_windows& operator=(File_c_windows const &) = delete;
    File_c_windows(File_c_windows const &) = delete;
    File_c_windows() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_getPath@File_c_windows@Core@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    virtual class Core::PathBuffer<std::string> _getPath() const;

    // vIndex: 2, symbol: ?_getBlockSize@File_c_windows@Core@@UEBA_KXZ
    virtual uint64_t _getBlockSize() const;

    // vIndex: 3, symbol: ?_isOpen@File_c_windows@Core@@UEAA_NXZ
    virtual bool _isOpen();

    // vIndex: 4, symbol: ?_close@File_c_windows@Core@@UEAA?AVResult@2@XZ
    virtual class Core::Result _close();

    // vIndex: 5, symbol: ?_read@File_c_windows@Core@@UEAA?AVResult@2@PEAX_KPEA_K@Z
    virtual class Core::Result _read(void *, uint64_t, uint64_t *);

    // vIndex: 6, symbol: ?_readExactly@File_c_windows@Core@@UEAA?AVResult@2@PEAX_K@Z
    virtual class Core::Result _readExactly(void *, uint64_t);

    // vIndex: 7, symbol: ?_skip@File_c_windows@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _skip(uint64_t);

    // vIndex: 8, symbol: ?_readAtPosition@File_c_windows@Core@@UEAA?AVResult@2@_KPEAX0PEA_K@Z
    virtual class Core::Result _readAtPosition(uint64_t, void *, uint64_t, uint64_t *);

    // vIndex: 9, symbol: ?_getPosition@File_c_windows@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getPosition(uint64_t *);

    // vIndex: 10, symbol: ?_setPosition@File_c_windows@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _setPosition(uint64_t);

    // vIndex: 11, symbol: ?_write@File_c_windows@Core@@UEAA?AVResult@2@PEBX_K@Z
    virtual class Core::Result _write(void const *, uint64_t);

    // vIndex: 12, symbol: ?_flush@File_c_windows@Core@@UEAA?AVResult@2@XZ
    virtual class Core::Result _flush();

    // vIndex: 13, symbol: ?_getSize@File_c_windows@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getSize(uint64_t *);

    // vIndex: 14, symbol: ?_getRemainingSize@File_c_windows@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getRemainingSize(uint64_t *);

    // symbol: ?initialize@File_c_windows@Core@@SAXXZ
    MCAPI static void initialize();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_open@File_c_windows@Core@@CA?AVResult@2@PEAVFileSystem_windows@2@AEAV?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI static class Core::Result _open(class Core::FileSystem_windows *, std::unique_ptr<class Core::FileImpl> &, class Core::Path const &, class Core::FileOpenMode, ::Core::FileBufferingMode);

    // NOLINTEND

};

};
