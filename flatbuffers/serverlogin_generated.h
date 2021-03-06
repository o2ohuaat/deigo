// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SERVERLOGIN_MSG_MQTT_H_
#define FLATBUFFERS_GENERATED_SERVERLOGIN_MSG_MQTT_H_

#include "flatbuffers.h"

namespace Msg {
namespace Mqtt {

struct Auth;

struct Server;

struct Auth FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_USER = 4,
    VT_PASS = 6,
    VT_DEVICE = 8
  };
  const flatbuffers::String *user() const { return GetPointer<const flatbuffers::String *>(VT_USER); }
  const flatbuffers::String *pass() const { return GetPointer<const flatbuffers::String *>(VT_PASS); }
  uint64_t device() const { return GetField<uint64_t>(VT_DEVICE, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_USER) &&
           verifier.Verify(user()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PASS) &&
           verifier.Verify(pass()) &&
           VerifyField<uint64_t>(verifier, VT_DEVICE) &&
           verifier.EndTable();
  }
};

struct AuthBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_user(flatbuffers::Offset<flatbuffers::String> user) { fbb_.AddOffset(Auth::VT_USER, user); }
  void add_pass(flatbuffers::Offset<flatbuffers::String> pass) { fbb_.AddOffset(Auth::VT_PASS, pass); }
  void add_device(uint64_t device) { fbb_.AddElement<uint64_t>(Auth::VT_DEVICE, device, 0); }
  AuthBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  AuthBuilder &operator=(const AuthBuilder &);
  flatbuffers::Offset<Auth> Finish() {
    auto o = flatbuffers::Offset<Auth>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<Auth> CreateAuth(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> user = 0,
   flatbuffers::Offset<flatbuffers::String> pass = 0,
   uint64_t device = 0) {
  AuthBuilder builder_(_fbb);
  builder_.add_device(device);
  builder_.add_pass(pass);
  builder_.add_user(user);
  return builder_.Finish();
}

struct Server FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HOST = 4,
    VT_PORT = 6,
    VT_TOPIC = 8,
    VT_TIME = 10,
    VT_AUTH = 12,
    VT_PRIVATETOPIC = 14,
    VT_UPTOPIC = 16
  };
  const flatbuffers::String *host() const { return GetPointer<const flatbuffers::String *>(VT_HOST); }
  uint32_t port() const { return GetField<uint32_t>(VT_PORT, 0); }
  const flatbuffers::String *topic() const { return GetPointer<const flatbuffers::String *>(VT_TOPIC); }
  uint32_t time() const { return GetField<uint32_t>(VT_TIME, 0); }
  const Auth *auth() const { return GetPointer<const Auth *>(VT_AUTH); }
  const flatbuffers::String *privateTopic() const { return GetPointer<const flatbuffers::String *>(VT_PRIVATETOPIC); }
  const flatbuffers::String *upTopic() const { return GetPointer<const flatbuffers::String *>(VT_UPTOPIC); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_HOST) &&
           verifier.Verify(host()) &&
           VerifyField<uint32_t>(verifier, VT_PORT) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_TOPIC) &&
           verifier.Verify(topic()) &&
           VerifyField<uint32_t>(verifier, VT_TIME) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_AUTH) &&
           verifier.VerifyTable(auth()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PRIVATETOPIC) &&
           verifier.Verify(privateTopic()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_UPTOPIC) &&
           verifier.Verify(upTopic()) &&
           verifier.EndTable();
  }
};

struct ServerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_host(flatbuffers::Offset<flatbuffers::String> host) { fbb_.AddOffset(Server::VT_HOST, host); }
  void add_port(uint32_t port) { fbb_.AddElement<uint32_t>(Server::VT_PORT, port, 0); }
  void add_topic(flatbuffers::Offset<flatbuffers::String> topic) { fbb_.AddOffset(Server::VT_TOPIC, topic); }
  void add_time(uint32_t time) { fbb_.AddElement<uint32_t>(Server::VT_TIME, time, 0); }
  void add_auth(flatbuffers::Offset<Auth> auth) { fbb_.AddOffset(Server::VT_AUTH, auth); }
  void add_privateTopic(flatbuffers::Offset<flatbuffers::String> privateTopic) { fbb_.AddOffset(Server::VT_PRIVATETOPIC, privateTopic); }
  void add_upTopic(flatbuffers::Offset<flatbuffers::String> upTopic) { fbb_.AddOffset(Server::VT_UPTOPIC, upTopic); }
  ServerBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ServerBuilder &operator=(const ServerBuilder &);
  flatbuffers::Offset<Server> Finish() {
    auto o = flatbuffers::Offset<Server>(fbb_.EndTable(start_, 7));
    return o;
  }
};

inline flatbuffers::Offset<Server> CreateServer(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> host = 0,
   uint32_t port = 0,
   flatbuffers::Offset<flatbuffers::String> topic = 0,
   uint32_t time = 0,
   flatbuffers::Offset<Auth> auth = 0,
   flatbuffers::Offset<flatbuffers::String> privateTopic = 0,
   flatbuffers::Offset<flatbuffers::String> upTopic = 0) {
  ServerBuilder builder_(_fbb);
  builder_.add_upTopic(upTopic);
  builder_.add_privateTopic(privateTopic);
  builder_.add_auth(auth);
  builder_.add_time(time);
  builder_.add_topic(topic);
  builder_.add_port(port);
  builder_.add_host(host);
  return builder_.Finish();
}

inline const Msg::Mqtt::Server *GetServer(const void *buf) { return flatbuffers::GetRoot<Msg::Mqtt::Server>(buf); }

inline bool VerifyServerBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Msg::Mqtt::Server>(); }

inline void FinishServerBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Msg::Mqtt::Server> root) { fbb.Finish(root); }

}  // namespace Mqtt
}  // namespace Msg

#endif  // FLATBUFFERS_GENERATED_SERVERLOGIN_MSG_MQTT_H_
