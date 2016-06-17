// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SERVERLOGIN1_MQTT_H_
#define FLATBUFFERS_GENERATED_SERVERLOGIN1_MQTT_H_

#include "flatbuffers/flatbuffers.h"

namespace Mqtt {

struct Auth;

struct Server;

struct Auth FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_USER = 4,
    VT_PASS = 6
  };
  const flatbuffers::String *user() const { return GetPointer<const flatbuffers::String *>(VT_USER); }
  const flatbuffers::String *pass() const { return GetPointer<const flatbuffers::String *>(VT_PASS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_USER) &&
           verifier.Verify(user()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PASS) &&
           verifier.Verify(pass()) &&
           verifier.EndTable();
  }
};

struct AuthBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_user(flatbuffers::Offset<flatbuffers::String> user) { fbb_.AddOffset(Auth::VT_USER, user); }
  void add_pass(flatbuffers::Offset<flatbuffers::String> pass) { fbb_.AddOffset(Auth::VT_PASS, pass); }
  AuthBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  AuthBuilder &operator=(const AuthBuilder &);
  flatbuffers::Offset<Auth> Finish() {
    auto o = flatbuffers::Offset<Auth>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<Auth> CreateAuth(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> user = 0,
   flatbuffers::Offset<flatbuffers::String> pass = 0) {
  AuthBuilder builder_(_fbb);
  builder_.add_pass(pass);
  builder_.add_user(user);
  return builder_.Finish();
}

struct Server FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HOST = 4,
    VT_PORT = 6,
    VT_TOPIC = 8,
    VT_AUTH = 10,
    VT_NAME = 12,
    VT_TYPE = 14
  };
  int64_t host() const { return GetField<int64_t>(VT_HOST, 0); }
  int32_t port() const { return GetField<int32_t>(VT_PORT, 0); }
  const flatbuffers::String *topic() const { return GetPointer<const flatbuffers::String *>(VT_TOPIC); }
  const Auth *auth() const { return GetPointer<const Auth *>(VT_AUTH); }
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(VT_NAME); }
  int32_t type() const { return GetField<int32_t>(VT_TYPE, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_HOST) &&
           VerifyField<int32_t>(verifier, VT_PORT) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_TOPIC) &&
           verifier.Verify(topic()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_AUTH) &&
           verifier.VerifyTable(auth()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyField<int32_t>(verifier, VT_TYPE) &&
           verifier.EndTable();
  }
};

struct ServerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_host(int64_t host) { fbb_.AddElement<int64_t>(Server::VT_HOST, host, 0); }
  void add_port(int32_t port) { fbb_.AddElement<int32_t>(Server::VT_PORT, port, 0); }
  void add_topic(flatbuffers::Offset<flatbuffers::String> topic) { fbb_.AddOffset(Server::VT_TOPIC, topic); }
  void add_auth(flatbuffers::Offset<Auth> auth) { fbb_.AddOffset(Server::VT_AUTH, auth); }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(Server::VT_NAME, name); }
  void add_type(int32_t type) { fbb_.AddElement<int32_t>(Server::VT_TYPE, type, 0); }
  ServerBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ServerBuilder &operator=(const ServerBuilder &);
  flatbuffers::Offset<Server> Finish() {
    auto o = flatbuffers::Offset<Server>(fbb_.EndTable(start_, 6));
    return o;
  }
};

inline flatbuffers::Offset<Server> CreateServer(flatbuffers::FlatBufferBuilder &_fbb,
   int64_t host = 0,
   int32_t port = 0,
   flatbuffers::Offset<flatbuffers::String> topic = 0,
   flatbuffers::Offset<Auth> auth = 0,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   int32_t type = 0) {
  ServerBuilder builder_(_fbb);
  builder_.add_host(host);
  builder_.add_type(type);
  builder_.add_name(name);
  builder_.add_auth(auth);
  builder_.add_topic(topic);
  builder_.add_port(port);
  return builder_.Finish();
}

inline const Mqtt::Server *GetServer(const void *buf) { return flatbuffers::GetRoot<Mqtt::Server>(buf); }

inline bool VerifyServerBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Mqtt::Server>(); }

inline void FinishServerBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Mqtt::Server> root) { fbb.Finish(root); }

}  // namespace Mqtt

#endif  // FLATBUFFERS_GENERATED_SERVERLOGIN1_MQTT_H_
