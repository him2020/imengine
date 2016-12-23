// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: servers.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "servers.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace zproto {

namespace {

const ::google::protobuf::Descriptor* ServerAuthReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerAuthReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServerAuthRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerAuthRsp_reflection_ = NULL;
const ::google::protobuf::Descriptor* DeliveryDataToUsersReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DeliveryDataToUsersReq_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_servers_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_servers_2eproto() {
  protobuf_AddDesc_servers_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "servers.proto");
  GOOGLE_CHECK(file != NULL);
  ServerAuthReq_descriptor_ = file->message_type(0);
  static const int ServerAuthReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerAuthReq, server_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerAuthReq, server_name_),
  };
  ServerAuthReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ServerAuthReq_descriptor_,
      ServerAuthReq::default_instance_,
      ServerAuthReq_offsets_,
      -1,
      -1,
      -1,
      sizeof(ServerAuthReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerAuthReq, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerAuthReq, _is_default_instance_));
  ServerAuthRsp_descriptor_ = file->message_type(1);
  static const int ServerAuthRsp_offsets_[1] = {
  };
  ServerAuthRsp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ServerAuthRsp_descriptor_,
      ServerAuthRsp::default_instance_,
      ServerAuthRsp_offsets_,
      -1,
      -1,
      -1,
      sizeof(ServerAuthRsp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerAuthRsp, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerAuthRsp, _is_default_instance_));
  DeliveryDataToUsersReq_descriptor_ = file->message_type(2);
  static const int DeliveryDataToUsersReq_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeliveryDataToUsersReq, my_conn_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeliveryDataToUsersReq, uid_list_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeliveryDataToUsersReq, raw_data_header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeliveryDataToUsersReq, raw_data_),
  };
  DeliveryDataToUsersReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DeliveryDataToUsersReq_descriptor_,
      DeliveryDataToUsersReq::default_instance_,
      DeliveryDataToUsersReq_offsets_,
      -1,
      -1,
      -1,
      sizeof(DeliveryDataToUsersReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeliveryDataToUsersReq, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeliveryDataToUsersReq, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_servers_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ServerAuthReq_descriptor_, &ServerAuthReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ServerAuthRsp_descriptor_, &ServerAuthRsp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DeliveryDataToUsersReq_descriptor_, &DeliveryDataToUsersReq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_servers_2eproto() {
  delete ServerAuthReq::default_instance_;
  delete ServerAuthReq_reflection_;
  delete ServerAuthRsp::default_instance_;
  delete ServerAuthRsp_reflection_;
  delete DeliveryDataToUsersReq::default_instance_;
  delete DeliveryDataToUsersReq_reflection_;
}

void protobuf_AddDesc_servers_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_servers_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rservers.proto\022\006zproto\"7\n\rServerAuthReq"
    "\022\021\n\tserver_id\030\001 \001(\r\022\023\n\013server_name\030\002 \001(\t"
    "\"\017\n\rServerAuthRsp\"i\n\026DeliveryDataToUsers"
    "Req\022\022\n\nmy_conn_id\030\001 \001(\004\022\020\n\010uid_list\030\002 \003("
    "\t\022\027\n\017raw_data_header\030\004 \001(\r\022\020\n\010raw_data\030\005"
    " \001(\014B*\n\027com.zchat.engine.zprotoB\rZProtoS"
    "erversH\002b\006proto3", 256);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "servers.proto", &protobuf_RegisterTypes);
  ServerAuthReq::default_instance_ = new ServerAuthReq();
  ServerAuthRsp::default_instance_ = new ServerAuthRsp();
  DeliveryDataToUsersReq::default_instance_ = new DeliveryDataToUsersReq();
  ServerAuthReq::default_instance_->InitAsDefaultInstance();
  ServerAuthRsp::default_instance_->InitAsDefaultInstance();
  DeliveryDataToUsersReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_servers_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_servers_2eproto {
  StaticDescriptorInitializer_servers_2eproto() {
    protobuf_AddDesc_servers_2eproto();
  }
} static_descriptor_initializer_servers_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServerAuthReq::kServerIdFieldNumber;
const int ServerAuthReq::kServerNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerAuthReq::ServerAuthReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.ServerAuthReq)
}

void ServerAuthReq::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ServerAuthReq::ServerAuthReq(const ServerAuthReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.ServerAuthReq)
}

void ServerAuthReq::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  server_id_ = 0u;
  server_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ServerAuthReq::~ServerAuthReq() {
  // @@protoc_insertion_point(destructor:zproto.ServerAuthReq)
  SharedDtor();
}

void ServerAuthReq::SharedDtor() {
  server_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ServerAuthReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerAuthReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerAuthReq_descriptor_;
}

const ServerAuthReq& ServerAuthReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_servers_2eproto();
  return *default_instance_;
}

ServerAuthReq* ServerAuthReq::default_instance_ = NULL;

ServerAuthReq* ServerAuthReq::New(::google::protobuf::Arena* arena) const {
  ServerAuthReq* n = new ServerAuthReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServerAuthReq::Swap(ServerAuthReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServerAuthReq::InternalSwap(ServerAuthReq* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata ServerAuthReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerAuthReq_descriptor_;
  metadata.reflection = ServerAuthReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ServerAuthReq

// optional uint32 server_id = 1;
void ServerAuthReq::clear_server_id() {
  server_id_ = 0u;
}
 ::google::protobuf::uint32 ServerAuthReq::server_id() const {
  // @@protoc_insertion_point(field_get:zproto.ServerAuthReq.server_id)
  return server_id_;
}
 void ServerAuthReq::set_server_id(::google::protobuf::uint32 value) {
  
  server_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ServerAuthReq.server_id)
}

// optional string server_name = 2;
void ServerAuthReq::clear_server_name() {
  server_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ServerAuthReq::server_name() const {
  // @@protoc_insertion_point(field_get:zproto.ServerAuthReq.server_name)
  return server_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ServerAuthReq::set_server_name(const ::std::string& value) {
  
  server_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ServerAuthReq.server_name)
}
 void ServerAuthReq::set_server_name(const char* value) {
  
  server_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ServerAuthReq.server_name)
}
 void ServerAuthReq::set_server_name(const char* value, size_t size) {
  
  server_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ServerAuthReq.server_name)
}
 ::std::string* ServerAuthReq::mutable_server_name() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ServerAuthReq.server_name)
  return server_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ServerAuthReq::release_server_name() {
  // @@protoc_insertion_point(field_release:zproto.ServerAuthReq.server_name)
  
  return server_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ServerAuthReq::set_allocated_server_name(::std::string* server_name) {
  if (server_name != NULL) {
    
  } else {
    
  }
  server_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), server_name);
  // @@protoc_insertion_point(field_set_allocated:zproto.ServerAuthReq.server_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerAuthRsp::ServerAuthRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.ServerAuthRsp)
}

void ServerAuthRsp::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ServerAuthRsp::ServerAuthRsp(const ServerAuthRsp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.ServerAuthRsp)
}

void ServerAuthRsp::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ServerAuthRsp::~ServerAuthRsp() {
  // @@protoc_insertion_point(destructor:zproto.ServerAuthRsp)
  SharedDtor();
}

void ServerAuthRsp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ServerAuthRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerAuthRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerAuthRsp_descriptor_;
}

const ServerAuthRsp& ServerAuthRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_servers_2eproto();
  return *default_instance_;
}

ServerAuthRsp* ServerAuthRsp::default_instance_ = NULL;

ServerAuthRsp* ServerAuthRsp::New(::google::protobuf::Arena* arena) const {
  ServerAuthRsp* n = new ServerAuthRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServerAuthRsp::Swap(ServerAuthRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServerAuthRsp::InternalSwap(ServerAuthRsp* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata ServerAuthRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerAuthRsp_descriptor_;
  metadata.reflection = ServerAuthRsp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ServerAuthRsp

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DeliveryDataToUsersReq::kMyConnIdFieldNumber;
const int DeliveryDataToUsersReq::kUidListFieldNumber;
const int DeliveryDataToUsersReq::kRawDataHeaderFieldNumber;
const int DeliveryDataToUsersReq::kRawDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DeliveryDataToUsersReq::DeliveryDataToUsersReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.DeliveryDataToUsersReq)
}

void DeliveryDataToUsersReq::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DeliveryDataToUsersReq::DeliveryDataToUsersReq(const DeliveryDataToUsersReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.DeliveryDataToUsersReq)
}

void DeliveryDataToUsersReq::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  my_conn_id_ = GOOGLE_ULONGLONG(0);
  raw_data_header_ = 0u;
  raw_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

DeliveryDataToUsersReq::~DeliveryDataToUsersReq() {
  // @@protoc_insertion_point(destructor:zproto.DeliveryDataToUsersReq)
  SharedDtor();
}

void DeliveryDataToUsersReq::SharedDtor() {
  raw_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void DeliveryDataToUsersReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DeliveryDataToUsersReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DeliveryDataToUsersReq_descriptor_;
}

const DeliveryDataToUsersReq& DeliveryDataToUsersReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_servers_2eproto();
  return *default_instance_;
}

DeliveryDataToUsersReq* DeliveryDataToUsersReq::default_instance_ = NULL;

DeliveryDataToUsersReq* DeliveryDataToUsersReq::New(::google::protobuf::Arena* arena) const {
  DeliveryDataToUsersReq* n = new DeliveryDataToUsersReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DeliveryDataToUsersReq::Swap(DeliveryDataToUsersReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DeliveryDataToUsersReq::InternalSwap(DeliveryDataToUsersReq* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata DeliveryDataToUsersReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DeliveryDataToUsersReq_descriptor_;
  metadata.reflection = DeliveryDataToUsersReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DeliveryDataToUsersReq

// optional uint64 my_conn_id = 1;
void DeliveryDataToUsersReq::clear_my_conn_id() {
  my_conn_id_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 DeliveryDataToUsersReq::my_conn_id() const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.my_conn_id)
  return my_conn_id_;
}
 void DeliveryDataToUsersReq::set_my_conn_id(::google::protobuf::uint64 value) {
  
  my_conn_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.my_conn_id)
}

// repeated string uid_list = 2;
int DeliveryDataToUsersReq::uid_list_size() const {
  return uid_list_.size();
}
void DeliveryDataToUsersReq::clear_uid_list() {
  uid_list_.Clear();
}
 const ::std::string& DeliveryDataToUsersReq::uid_list(int index) const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_.Get(index);
}
 ::std::string* DeliveryDataToUsersReq::mutable_uid_list(int index) {
  // @@protoc_insertion_point(field_mutable:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_.Mutable(index);
}
 void DeliveryDataToUsersReq::set_uid_list(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.uid_list)
  uid_list_.Mutable(index)->assign(value);
}
 void DeliveryDataToUsersReq::set_uid_list(int index, const char* value) {
  uid_list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:zproto.DeliveryDataToUsersReq.uid_list)
}
 void DeliveryDataToUsersReq::set_uid_list(int index, const char* value, size_t size) {
  uid_list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:zproto.DeliveryDataToUsersReq.uid_list)
}
 ::std::string* DeliveryDataToUsersReq::add_uid_list() {
  // @@protoc_insertion_point(field_add_mutable:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_.Add();
}
 void DeliveryDataToUsersReq::add_uid_list(const ::std::string& value) {
  uid_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:zproto.DeliveryDataToUsersReq.uid_list)
}
 void DeliveryDataToUsersReq::add_uid_list(const char* value) {
  uid_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:zproto.DeliveryDataToUsersReq.uid_list)
}
 void DeliveryDataToUsersReq::add_uid_list(const char* value, size_t size) {
  uid_list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:zproto.DeliveryDataToUsersReq.uid_list)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
DeliveryDataToUsersReq::uid_list() const {
  // @@protoc_insertion_point(field_list:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
DeliveryDataToUsersReq::mutable_uid_list() {
  // @@protoc_insertion_point(field_mutable_list:zproto.DeliveryDataToUsersReq.uid_list)
  return &uid_list_;
}

// optional uint32 raw_data_header = 4;
void DeliveryDataToUsersReq::clear_raw_data_header() {
  raw_data_header_ = 0u;
}
 ::google::protobuf::uint32 DeliveryDataToUsersReq::raw_data_header() const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.raw_data_header)
  return raw_data_header_;
}
 void DeliveryDataToUsersReq::set_raw_data_header(::google::protobuf::uint32 value) {
  
  raw_data_header_ = value;
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.raw_data_header)
}

// optional bytes raw_data = 5;
void DeliveryDataToUsersReq::clear_raw_data() {
  raw_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DeliveryDataToUsersReq::raw_data() const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.raw_data)
  return raw_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeliveryDataToUsersReq::set_raw_data(const ::std::string& value) {
  
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.raw_data)
}
 void DeliveryDataToUsersReq::set_raw_data(const char* value) {
  
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.DeliveryDataToUsersReq.raw_data)
}
 void DeliveryDataToUsersReq::set_raw_data(const void* value, size_t size) {
  
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.DeliveryDataToUsersReq.raw_data)
}
 ::std::string* DeliveryDataToUsersReq::mutable_raw_data() {
  
  // @@protoc_insertion_point(field_mutable:zproto.DeliveryDataToUsersReq.raw_data)
  return raw_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DeliveryDataToUsersReq::release_raw_data() {
  // @@protoc_insertion_point(field_release:zproto.DeliveryDataToUsersReq.raw_data)
  
  return raw_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeliveryDataToUsersReq::set_allocated_raw_data(::std::string* raw_data) {
  if (raw_data != NULL) {
    
  } else {
    
  }
  raw_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw_data);
  // @@protoc_insertion_point(field_set_allocated:zproto.DeliveryDataToUsersReq.raw_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)
