// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messaging_base.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messaging_base.pb.h"

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

const ::google::protobuf::Descriptor* InstantMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InstantMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* MessageContainer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageContainer_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ListLoadMode_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_messaging_5fbase_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_messaging_5fbase_2eproto() {
  protobuf_AddDesc_messaging_5fbase_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messaging_base.proto");
  GOOGLE_CHECK(file != NULL);
  InstantMessage_descriptor_ = file->message_type(0);
  static const int InstantMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InstantMessage, message_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InstantMessage, message_data_),
  };
  InstantMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InstantMessage_descriptor_,
      InstantMessage::internal_default_instance(),
      InstantMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(InstantMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InstantMessage, _internal_metadata_));
  MessageContainer_descriptor_ = file->message_type(1);
  static const int MessageContainer_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageContainer, sender_uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageContainer, rid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageContainer, date_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageContainer, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageContainer, state_),
  };
  MessageContainer_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MessageContainer_descriptor_,
      MessageContainer::internal_default_instance(),
      MessageContainer_offsets_,
      -1,
      -1,
      -1,
      sizeof(MessageContainer),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageContainer, _internal_metadata_));
  MessageType_descriptor_ = file->enum_type(0);
  MessageState_descriptor_ = file->enum_type(1);
  ListLoadMode_descriptor_ = file->enum_type(2);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messaging_5fbase_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InstantMessage_descriptor_, InstantMessage::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MessageContainer_descriptor_, MessageContainer::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messaging_5fbase_2eproto() {
  InstantMessage_default_instance_.Shutdown();
  delete InstantMessage_reflection_;
  MessageContainer_default_instance_.Shutdown();
  delete MessageContainer_reflection_;
}

void protobuf_InitDefaults_messaging_5fbase_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::zproto::protobuf_InitDefaults_peers_2eproto();
  ::zproto::protobuf_InitDefaults_group_5fbase_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  InstantMessage_default_instance_.DefaultConstruct();
  ::google::protobuf::internal::GetEmptyString();
  MessageContainer_default_instance_.DefaultConstruct();
  InstantMessage_default_instance_.get_mutable()->InitAsDefaultInstance();
  MessageContainer_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_messaging_5fbase_2eproto_once_);
void protobuf_InitDefaults_messaging_5fbase_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_messaging_5fbase_2eproto_once_,
                 &protobuf_InitDefaults_messaging_5fbase_2eproto_impl);
}
void protobuf_AddDesc_messaging_5fbase_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_messaging_5fbase_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024messaging_base.proto\022\006zproto\032\013peers.pr"
    "oto\032\020group_base.proto\"Q\n\016InstantMessage\022"
    ")\n\014message_type\030\001 \001(\0162\023.zproto.MessageTy"
    "pe\022\024\n\014message_data\030\002 \001(\014\"\217\001\n\020MessageCont"
    "ainer\022\022\n\nsender_uid\030\001 \001(\t\022\013\n\003rid\030\002 \001(\003\022\014"
    "\n\004date\030\003 \001(\003\022\'\n\007message\030\005 \001(\0132\026.zproto.I"
    "nstantMessage\022#\n\005state\030\006 \001(\0162\024.zproto.Me"
    "ssageState*-\n\013MessageType\022\010\n\004TEXT\020\000\022\t\n\005A"
    "UDIO\020\001\022\t\n\005VIDEO\020\002*0\n\014MessageState\022\010\n\004SEN"
    "T\020\000\022\014\n\010RECEIVED\020\001\022\010\n\004READ\020\002*3\n\014ListLoadM"
    "ode\022\013\n\007FORWARD\020\000\022\014\n\010BACKWARD\020\001\022\010\n\004BOTH\020\002"
    "B,\n\027com.zchat.engine.zprotoB\017ZProtoMessa"
    "gingH\002b\006proto3", 494);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messaging_base.proto", &protobuf_RegisterTypes);
  ::zproto::protobuf_AddDesc_peers_2eproto();
  ::zproto::protobuf_AddDesc_group_5fbase_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messaging_5fbase_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_messaging_5fbase_2eproto_once_);
void protobuf_AddDesc_messaging_5fbase_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_messaging_5fbase_2eproto_once_,
                 &protobuf_AddDesc_messaging_5fbase_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messaging_5fbase_2eproto {
  StaticDescriptorInitializer_messaging_5fbase_2eproto() {
    protobuf_AddDesc_messaging_5fbase_2eproto();
  }
} static_descriptor_initializer_messaging_5fbase_2eproto_;
const ::google::protobuf::EnumDescriptor* MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageType_descriptor_;
}
bool MessageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* MessageState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageState_descriptor_;
}
bool MessageState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ListLoadMode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ListLoadMode_descriptor_;
}
bool ListLoadMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InstantMessage::kMessageTypeFieldNumber;
const int InstantMessage::kMessageDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InstantMessage::InstantMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_messaging_5fbase_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.InstantMessage)
}

void InstantMessage::InitAsDefaultInstance() {
}

InstantMessage::InstantMessage(const InstantMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.InstantMessage)
}

void InstantMessage::SharedCtor() {
  message_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_type_ = 0;
  _cached_size_ = 0;
}

InstantMessage::~InstantMessage() {
  // @@protoc_insertion_point(destructor:zproto.InstantMessage)
  SharedDtor();
}

void InstantMessage::SharedDtor() {
  message_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void InstantMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InstantMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InstantMessage_descriptor_;
}

const InstantMessage& InstantMessage::default_instance() {
  protobuf_InitDefaults_messaging_5fbase_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<InstantMessage> InstantMessage_default_instance_;

InstantMessage* InstantMessage::New(::google::protobuf::Arena* arena) const {
  InstantMessage* n = new InstantMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InstantMessage::UnsafeMergeFrom(const InstantMessage& from) {
  MergeFrom(from);
}
void InstantMessage::Swap(InstantMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InstantMessage::InternalSwap(InstantMessage* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata InstantMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InstantMessage_descriptor_;
  metadata.reflection = InstantMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InstantMessage

// optional .zproto.MessageType message_type = 1;
void InstantMessage::clear_message_type() {
  message_type_ = 0;
}
::zproto::MessageType InstantMessage::message_type() const {
  // @@protoc_insertion_point(field_get:zproto.InstantMessage.message_type)
  return static_cast< ::zproto::MessageType >(message_type_);
}
void InstantMessage::set_message_type(::zproto::MessageType value) {
  
  message_type_ = value;
  // @@protoc_insertion_point(field_set:zproto.InstantMessage.message_type)
}

// optional bytes message_data = 2;
void InstantMessage::clear_message_data() {
  message_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& InstantMessage::message_data() const {
  // @@protoc_insertion_point(field_get:zproto.InstantMessage.message_data)
  return message_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void InstantMessage::set_message_data(const ::std::string& value) {
  
  message_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.InstantMessage.message_data)
}
void InstantMessage::set_message_data(const char* value) {
  
  message_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.InstantMessage.message_data)
}
void InstantMessage::set_message_data(const void* value, size_t size) {
  
  message_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.InstantMessage.message_data)
}
::std::string* InstantMessage::mutable_message_data() {
  
  // @@protoc_insertion_point(field_mutable:zproto.InstantMessage.message_data)
  return message_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* InstantMessage::release_message_data() {
  // @@protoc_insertion_point(field_release:zproto.InstantMessage.message_data)
  
  return message_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void InstantMessage::set_allocated_message_data(::std::string* message_data) {
  if (message_data != NULL) {
    
  } else {
    
  }
  message_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message_data);
  // @@protoc_insertion_point(field_set_allocated:zproto.InstantMessage.message_data)
}

inline const InstantMessage* InstantMessage::internal_default_instance() {
  return &InstantMessage_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageContainer::kSenderUidFieldNumber;
const int MessageContainer::kRidFieldNumber;
const int MessageContainer::kDateFieldNumber;
const int MessageContainer::kMessageFieldNumber;
const int MessageContainer::kStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageContainer::MessageContainer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_messaging_5fbase_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.MessageContainer)
}

void MessageContainer::InitAsDefaultInstance() {
  message_ = const_cast< ::zproto::InstantMessage*>(
      ::zproto::InstantMessage::internal_default_instance());
}

MessageContainer::MessageContainer(const MessageContainer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.MessageContainer)
}

void MessageContainer::SharedCtor() {
  sender_uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_ = NULL;
  ::memset(&rid_, 0, reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&rid_) + sizeof(state_));
  _cached_size_ = 0;
}

MessageContainer::~MessageContainer() {
  // @@protoc_insertion_point(destructor:zproto.MessageContainer)
  SharedDtor();
}

void MessageContainer::SharedDtor() {
  sender_uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &MessageContainer_default_instance_.get()) {
    delete message_;
  }
}

void MessageContainer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageContainer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageContainer_descriptor_;
}

const MessageContainer& MessageContainer::default_instance() {
  protobuf_InitDefaults_messaging_5fbase_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<MessageContainer> MessageContainer_default_instance_;

MessageContainer* MessageContainer::New(::google::protobuf::Arena* arena) const {
  MessageContainer* n = new MessageContainer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageContainer::UnsafeMergeFrom(const MessageContainer& from) {
  MergeFrom(from);
}
void MessageContainer::Swap(MessageContainer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageContainer::InternalSwap(MessageContainer* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata MessageContainer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageContainer_descriptor_;
  metadata.reflection = MessageContainer_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageContainer

// optional string sender_uid = 1;
void MessageContainer::clear_sender_uid() {
  sender_uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& MessageContainer::sender_uid() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.sender_uid)
  return sender_uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MessageContainer::set_sender_uid(const ::std::string& value) {
  
  sender_uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.sender_uid)
}
void MessageContainer::set_sender_uid(const char* value) {
  
  sender_uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.MessageContainer.sender_uid)
}
void MessageContainer::set_sender_uid(const char* value, size_t size) {
  
  sender_uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.MessageContainer.sender_uid)
}
::std::string* MessageContainer::mutable_sender_uid() {
  
  // @@protoc_insertion_point(field_mutable:zproto.MessageContainer.sender_uid)
  return sender_uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MessageContainer::release_sender_uid() {
  // @@protoc_insertion_point(field_release:zproto.MessageContainer.sender_uid)
  
  return sender_uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MessageContainer::set_allocated_sender_uid(::std::string* sender_uid) {
  if (sender_uid != NULL) {
    
  } else {
    
  }
  sender_uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sender_uid);
  // @@protoc_insertion_point(field_set_allocated:zproto.MessageContainer.sender_uid)
}

// optional int64 rid = 2;
void MessageContainer::clear_rid() {
  rid_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 MessageContainer::rid() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.rid)
  return rid_;
}
void MessageContainer::set_rid(::google::protobuf::int64 value) {
  
  rid_ = value;
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.rid)
}

// optional int64 date = 3;
void MessageContainer::clear_date() {
  date_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 MessageContainer::date() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.date)
  return date_;
}
void MessageContainer::set_date(::google::protobuf::int64 value) {
  
  date_ = value;
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.date)
}

// optional .zproto.InstantMessage message = 5;
bool MessageContainer::has_message() const {
  return this != internal_default_instance() && message_ != NULL;
}
void MessageContainer::clear_message() {
  if (GetArenaNoVirtual() == NULL && message_ != NULL) delete message_;
  message_ = NULL;
}
const ::zproto::InstantMessage& MessageContainer::message() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.message)
  return message_ != NULL ? *message_
                         : *::zproto::InstantMessage::internal_default_instance();
}
::zproto::InstantMessage* MessageContainer::mutable_message() {
  
  if (message_ == NULL) {
    message_ = new ::zproto::InstantMessage;
  }
  // @@protoc_insertion_point(field_mutable:zproto.MessageContainer.message)
  return message_;
}
::zproto::InstantMessage* MessageContainer::release_message() {
  // @@protoc_insertion_point(field_release:zproto.MessageContainer.message)
  
  ::zproto::InstantMessage* temp = message_;
  message_ = NULL;
  return temp;
}
void MessageContainer::set_allocated_message(::zproto::InstantMessage* message) {
  delete message_;
  message_ = message;
  if (message) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.MessageContainer.message)
}

// optional .zproto.MessageState state = 6;
void MessageContainer::clear_state() {
  state_ = 0;
}
::zproto::MessageState MessageContainer::state() const {
  // @@protoc_insertion_point(field_get:zproto.MessageContainer.state)
  return static_cast< ::zproto::MessageState >(state_);
}
void MessageContainer::set_state(::zproto::MessageState value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:zproto.MessageContainer.state)
}

inline const MessageContainer* MessageContainer::internal_default_instance() {
  return &MessageContainer_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)
