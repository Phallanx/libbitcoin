#ifndef LIBBITCOIN_PROTOBUF_WRAPPER_H
#define LIBBITCOIN_PROTOBUF_WRAPPER_H

#include <bitcoin/messages.hpp>

#include "bitcoin.pb.h"

namespace libbitcoin {

protobuf::Block block_header_to_protobuf(uint32_t depth,
    const message::block serial_block);

protobuf::Transaction transaction_to_protobuf(
    const message::transaction& block_tx);

message::block protobuf_to_block_header(const protobuf::Block& proto_block);

message::transaction protobuf_to_transaction(
    const protobuf::Transaction& proto_tx);

} // namespace libbitcoin

#endif

