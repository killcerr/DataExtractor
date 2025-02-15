#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // prevent constructor by default
    FileStats& operator=(FileStats const &) = delete;
    FileStats(FileStats const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0FileStats@Core@@QEAA@XZ
    MCAPI FileStats();

    // symbol: ?addReadOperation@FileStats@Core@@QEAAX_N_K@Z
    MCAPI void addReadOperation(bool, uint64_t);

    // symbol: ?addReadWriteOperation@FileStats@Core@@QEAAX_N_K1@Z
    MCAPI void addReadWriteOperation(bool, uint64_t, uint64_t);

    // symbol: ?addWriteOperation@FileStats@Core@@QEAAX_N_K@Z
    MCAPI void addWriteOperation(bool, uint64_t);

    // symbol: ?getAllocatedUsedFileSystemSize@FileStats@Core@@QEBA_KXZ
    MCAPI uint64_t getAllocatedUsedFileSystemSize() const;

    // symbol: ?getUsedFileSystemSize@FileStats@Core@@QEBA_KXZ
    MCAPI uint64_t getUsedFileSystemSize() const;

    // symbol: ?notifyChangeInFileSize@FileStats@Core@@QEAAX_J0@Z
    MCAPI void notifyChangeInFileSize(int64_t, int64_t);

    // symbol: ?setFileSystemUsedSize@FileStats@Core@@QEAAX_J0@Z
    MCAPI void setFileSystemUsedSize(int64_t, int64_t);

    // NOLINTEND

};

};
