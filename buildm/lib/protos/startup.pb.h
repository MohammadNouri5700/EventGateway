// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: startup.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_startup_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_startup_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_startup_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_startup_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_startup_2eproto;
class StartupConfig;
class StartupConfigDefaultTypeInternal;
extern StartupConfigDefaultTypeInternal _StartupConfig_default_instance_;
class StartupResponse;
class StartupResponseDefaultTypeInternal;
extern StartupResponseDefaultTypeInternal _StartupResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::StartupConfig* Arena::CreateMaybeMessage<::StartupConfig>(Arena*);
template<> ::StartupResponse* Arena::CreateMaybeMessage<::StartupResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class StartupResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:StartupResponse) */ {
 public:
  StartupResponse();
  virtual ~StartupResponse();

  StartupResponse(const StartupResponse& from);
  StartupResponse(StartupResponse&& from) noexcept
    : StartupResponse() {
    *this = ::std::move(from);
  }

  inline StartupResponse& operator=(const StartupResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline StartupResponse& operator=(StartupResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StartupResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StartupResponse* internal_default_instance() {
    return reinterpret_cast<const StartupResponse*>(
               &_StartupResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StartupResponse& a, StartupResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(StartupResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StartupResponse* New() const final {
    return CreateMaybeMessage<StartupResponse>(nullptr);
  }

  StartupResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StartupResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StartupResponse& from);
  void MergeFrom(const StartupResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StartupResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "StartupResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_startup_2eproto);
    return ::descriptor_table_startup_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorDescFieldNumber = 3,
    kSuccessFieldNumber = 1,
    kErrorCodeFieldNumber = 2,
  };
  // string errorDesc = 3;
  void clear_errordesc();
  const std::string& errordesc() const;
  void set_errordesc(const std::string& value);
  void set_errordesc(std::string&& value);
  void set_errordesc(const char* value);
  void set_errordesc(const char* value, size_t size);
  std::string* mutable_errordesc();
  std::string* release_errordesc();
  void set_allocated_errordesc(std::string* errordesc);
  private:
  const std::string& _internal_errordesc() const;
  void _internal_set_errordesc(const std::string& value);
  std::string* _internal_mutable_errordesc();
  public:

  // bool Success = 1;
  void clear_success();
  bool success() const;
  void set_success(bool value);
  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);
  public:

  // int32 errorCode = 2;
  void clear_errorcode();
  ::PROTOBUF_NAMESPACE_ID::int32 errorcode() const;
  void set_errorcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_errorcode() const;
  void _internal_set_errorcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:StartupResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errordesc_;
  bool success_;
  ::PROTOBUF_NAMESPACE_ID::int32 errorcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_startup_2eproto;
};
// -------------------------------------------------------------------

class StartupConfig :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:StartupConfig) */ {
 public:
  StartupConfig();
  virtual ~StartupConfig();

  StartupConfig(const StartupConfig& from);
  StartupConfig(StartupConfig&& from) noexcept
    : StartupConfig() {
    *this = ::std::move(from);
  }

  inline StartupConfig& operator=(const StartupConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline StartupConfig& operator=(StartupConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StartupConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StartupConfig* internal_default_instance() {
    return reinterpret_cast<const StartupConfig*>(
               &_StartupConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StartupConfig& a, StartupConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(StartupConfig* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StartupConfig* New() const final {
    return CreateMaybeMessage<StartupConfig>(nullptr);
  }

  StartupConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StartupConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StartupConfig& from);
  void MergeFrom(const StartupConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StartupConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "StartupConfig";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_startup_2eproto);
    return ::descriptor_table_startup_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
  };
  // string time = 1;
  void clear_time();
  const std::string& time() const;
  void set_time(const std::string& value);
  void set_time(std::string&& value);
  void set_time(const char* value);
  void set_time(const char* value, size_t size);
  std::string* mutable_time();
  std::string* release_time();
  void set_allocated_time(std::string* time);
  private:
  const std::string& _internal_time() const;
  void _internal_set_time(const std::string& value);
  std::string* _internal_mutable_time();
  public:

  // @@protoc_insertion_point(class_scope:StartupConfig)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_startup_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StartupResponse

// bool Success = 1;
inline void StartupResponse::clear_success() {
  success_ = false;
}
inline bool StartupResponse::_internal_success() const {
  return success_;
}
inline bool StartupResponse::success() const {
  // @@protoc_insertion_point(field_get:StartupResponse.Success)
  return _internal_success();
}
inline void StartupResponse::_internal_set_success(bool value) {
  
  success_ = value;
}
inline void StartupResponse::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:StartupResponse.Success)
}

// int32 errorCode = 2;
inline void StartupResponse::clear_errorcode() {
  errorcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StartupResponse::_internal_errorcode() const {
  return errorcode_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StartupResponse::errorcode() const {
  // @@protoc_insertion_point(field_get:StartupResponse.errorCode)
  return _internal_errorcode();
}
inline void StartupResponse::_internal_set_errorcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  errorcode_ = value;
}
inline void StartupResponse::set_errorcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_errorcode(value);
  // @@protoc_insertion_point(field_set:StartupResponse.errorCode)
}

// string errorDesc = 3;
inline void StartupResponse::clear_errordesc() {
  errordesc_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& StartupResponse::errordesc() const {
  // @@protoc_insertion_point(field_get:StartupResponse.errorDesc)
  return _internal_errordesc();
}
inline void StartupResponse::set_errordesc(const std::string& value) {
  _internal_set_errordesc(value);
  // @@protoc_insertion_point(field_set:StartupResponse.errorDesc)
}
inline std::string* StartupResponse::mutable_errordesc() {
  // @@protoc_insertion_point(field_mutable:StartupResponse.errorDesc)
  return _internal_mutable_errordesc();
}
inline const std::string& StartupResponse::_internal_errordesc() const {
  return errordesc_.GetNoArena();
}
inline void StartupResponse::_internal_set_errordesc(const std::string& value) {
  
  errordesc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void StartupResponse::set_errordesc(std::string&& value) {
  
  errordesc_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:StartupResponse.errorDesc)
}
inline void StartupResponse::set_errordesc(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  errordesc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:StartupResponse.errorDesc)
}
inline void StartupResponse::set_errordesc(const char* value, size_t size) {
  
  errordesc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:StartupResponse.errorDesc)
}
inline std::string* StartupResponse::_internal_mutable_errordesc() {
  
  return errordesc_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* StartupResponse::release_errordesc() {
  // @@protoc_insertion_point(field_release:StartupResponse.errorDesc)
  
  return errordesc_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void StartupResponse::set_allocated_errordesc(std::string* errordesc) {
  if (errordesc != nullptr) {
    
  } else {
    
  }
  errordesc_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), errordesc);
  // @@protoc_insertion_point(field_set_allocated:StartupResponse.errorDesc)
}

// -------------------------------------------------------------------

// StartupConfig

// string time = 1;
inline void StartupConfig::clear_time() {
  time_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& StartupConfig::time() const {
  // @@protoc_insertion_point(field_get:StartupConfig.time)
  return _internal_time();
}
inline void StartupConfig::set_time(const std::string& value) {
  _internal_set_time(value);
  // @@protoc_insertion_point(field_set:StartupConfig.time)
}
inline std::string* StartupConfig::mutable_time() {
  // @@protoc_insertion_point(field_mutable:StartupConfig.time)
  return _internal_mutable_time();
}
inline const std::string& StartupConfig::_internal_time() const {
  return time_.GetNoArena();
}
inline void StartupConfig::_internal_set_time(const std::string& value) {
  
  time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void StartupConfig::set_time(std::string&& value) {
  
  time_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:StartupConfig.time)
}
inline void StartupConfig::set_time(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:StartupConfig.time)
}
inline void StartupConfig::set_time(const char* value, size_t size) {
  
  time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:StartupConfig.time)
}
inline std::string* StartupConfig::_internal_mutable_time() {
  
  return time_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* StartupConfig::release_time() {
  // @@protoc_insertion_point(field_release:StartupConfig.time)
  
  return time_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void StartupConfig::set_allocated_time(std::string* time) {
  if (time != nullptr) {
    
  } else {
    
  }
  time_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), time);
  // @@protoc_insertion_point(field_set_allocated:StartupConfig.time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_startup_2eproto
