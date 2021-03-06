// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SERVERMESSAGE_MSG_MESSAGE_H_
#define FLATBUFFERS_GENERATED_SERVERMESSAGE_MSG_MESSAGE_H_

#include "flatbuffers.h"

namespace Msg {
namespace Message {

struct Content;

struct Content FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_MESSAGEID = 4,
    VT_PLATFORM = 6,
    VT_VERSION = 8,
    VT_TYPE = 10,
    VT_ACTION = 12,
    VT_ACCEPTOR_ID = 14,
    VT_START = 16,
    VT_END = 18,
    VT_PAYLOAD = 20
  };
  uint64_t messageId() const { return GetField<uint64_t>(VT_MESSAGEID, 0); }
  uint8_t platform() const { return GetField<uint8_t>(VT_PLATFORM, 0); }
  const flatbuffers::String *version() const { return GetPointer<const flatbuffers::String *>(VT_VERSION); }
  uint8_t type() const { return GetField<uint8_t>(VT_TYPE, 0); }
  uint8_t action() const { return GetField<uint8_t>(VT_ACTION, 0); }
  uint32_t acceptor_id() const { return GetField<uint32_t>(VT_ACCEPTOR_ID, 0); }
  uint64_t start() const { return GetField<uint64_t>(VT_START, 0); }
  uint64_t end() const { return GetField<uint64_t>(VT_END, 0); }
  const flatbuffers::String *payload() const { return GetPointer<const flatbuffers::String *>(VT_PAYLOAD); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_MESSAGEID) &&
           VerifyField<uint8_t>(verifier, VT_PLATFORM) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_VERSION) &&
           verifier.Verify(version()) &&
           VerifyField<uint8_t>(verifier, VT_TYPE) &&
           VerifyField<uint8_t>(verifier, VT_ACTION) &&
           VerifyField<uint32_t>(verifier, VT_ACCEPTOR_ID) &&
           VerifyField<uint64_t>(verifier, VT_START) &&
           VerifyField<uint64_t>(verifier, VT_END) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PAYLOAD) &&
           verifier.Verify(payload()) &&
           verifier.EndTable();
  }
};

struct ContentBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_messageId(uint64_t messageId) { fbb_.AddElement<uint64_t>(Content::VT_MESSAGEID, messageId, 0); }
  void add_platform(uint8_t platform) { fbb_.AddElement<uint8_t>(Content::VT_PLATFORM, platform, 0); }
  void add_version(flatbuffers::Offset<flatbuffers::String> version) { fbb_.AddOffset(Content::VT_VERSION, version); }
  void add_type(uint8_t type) { fbb_.AddElement<uint8_t>(Content::VT_TYPE, type, 0); }
  void add_action(uint8_t action) { fbb_.AddElement<uint8_t>(Content::VT_ACTION, action, 0); }
  void add_acceptor_id(uint32_t acceptor_id) { fbb_.AddElement<uint32_t>(Content::VT_ACCEPTOR_ID, acceptor_id, 0); }
  void add_start(uint64_t start) { fbb_.AddElement<uint64_t>(Content::VT_START, start, 0); }
  void add_end(uint64_t end) { fbb_.AddElement<uint64_t>(Content::VT_END, end, 0); }
  void add_payload(flatbuffers::Offset<flatbuffers::String> payload) { fbb_.AddOffset(Content::VT_PAYLOAD, payload); }
  ContentBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ContentBuilder &operator=(const ContentBuilder &);
  flatbuffers::Offset<Content> Finish() {
    auto o = flatbuffers::Offset<Content>(fbb_.EndTable(start_, 9));
    return o;
  }
};

inline flatbuffers::Offset<Content> CreateContent(flatbuffers::FlatBufferBuilder &_fbb,
   uint64_t messageId = 0,
   uint8_t platform = 0,
   flatbuffers::Offset<flatbuffers::String> version = 0,
   uint8_t type = 0,
   uint8_t action = 0,
   uint32_t acceptor_id = 0,
   uint64_t start = 0,
   uint64_t end = 0,
   flatbuffers::Offset<flatbuffers::String> payload = 0) {
  ContentBuilder builder_(_fbb);
  builder_.add_end(end);
  builder_.add_start(start);
  builder_.add_messageId(messageId);
  builder_.add_payload(payload);
  builder_.add_acceptor_id(acceptor_id);
  builder_.add_version(version);
  builder_.add_action(action);
  builder_.add_type(type);
  builder_.add_platform(platform);
  return builder_.Finish();
}

inline const Msg::Message::Content *GetContent(const void *buf) { return flatbuffers::GetRoot<Msg::Message::Content>(buf); }

inline bool VerifyContentBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Msg::Message::Content>(); }

inline void FinishContentBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Msg::Message::Content> root) { fbb.Finish(root); }

}  // namespace Message
}  // namespace Msg

#endif  // FLATBUFFERS_GENERATED_SERVERMESSAGE_MSG_MESSAGE_H_
