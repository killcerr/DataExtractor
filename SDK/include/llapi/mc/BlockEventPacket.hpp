/**
 * @file  BlockEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventPacket.
 *
 */
class BlockEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTPACKET
public:
    class BlockEventPacket& operator=(class BlockEventPacket const &) = delete;
    BlockEventPacket(class BlockEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BlockEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@BlockEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BlockEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@BlockEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockEventPacket();
#endif
    /**
     * @symbol ??0BlockEventPacket\@\@QEAA\@XZ
     */
    MCAPI BlockEventPacket();
    /**
     * @symbol ??0BlockEventPacket\@\@QEAA\@VBlockPos\@\@HH\@Z
     */
    MCAPI BlockEventPacket(class BlockPos, int, int);

};
