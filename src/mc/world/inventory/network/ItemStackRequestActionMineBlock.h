#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionMineBlock : public ::ItemStackRequestAction {
public:
    // ItemStackRequestActionMineBlock inner types define
    enum class PreValidationStatus {};
    
public:
    // prevent constructor by default
    ItemStackRequestActionMineBlock& operator=(ItemStackRequestActionMineBlock const &) = delete;
    ItemStackRequestActionMineBlock(ItemStackRequestActionMineBlock const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionMineBlock@@MEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream &) const;

    // vIndex: 5, symbol: ?_read@ItemStackRequestActionMineBlock@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??0ItemStackRequestActionMineBlock@@QEAA@XZ
    MCAPI ItemStackRequestActionMineBlock();

    // symbol: ?getSrc@ItemStackRequestActionMineBlock@@QEBA?AUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;

    // symbol: ?setPreValidationStatus@ItemStackRequestActionMineBlock@@QEBAXW4PreValidationStatus@1@@Z
    MCAPI void setPreValidationStatus(::ItemStackRequestActionMineBlock::PreValidationStatus) const;

    // NOLINTEND

};

