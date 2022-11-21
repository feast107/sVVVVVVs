// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Message_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Message_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Message_2eproto;
class Join;
struct JoinDefaultTypeInternal;
extern JoinDefaultTypeInternal _Join_default_instance_;
class Synchronize;
struct SynchronizeDefaultTypeInternal;
extern SynchronizeDefaultTypeInternal _Synchronize_default_instance_;
class World;
struct WorldDefaultTypeInternal;
extern WorldDefaultTypeInternal _World_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Join* Arena::CreateMaybeMessage<::Join>(Arena*);
template<> ::Synchronize* Arena::CreateMaybeMessage<::Synchronize>(Arena*);
template<> ::World* Arena::CreateMaybeMessage<::World>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class World final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:World) */ {
 public:
  inline World() : World(nullptr) {}
  ~World() override;
  explicit PROTOBUF_CONSTEXPR World(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  World(const World& from);
  World(World&& from) noexcept
    : World() {
    *this = ::std::move(from);
  }

  inline World& operator=(const World& from) {
    CopyFrom(from);
    return *this;
  }
  inline World& operator=(World&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const World& default_instance() {
    return *internal_default_instance();
  }
  static inline const World* internal_default_instance() {
    return reinterpret_cast<const World*>(
               &_World_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(World& a, World& b) {
    a.Swap(&b);
  }
  inline void Swap(World* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(World* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  World* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<World>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const World& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const World& from) {
    World::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(World* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "World";
  }
  protected:
  explicit World(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kNameFieldNumber = 2,
    kPasswordFieldNumber = 3,
    kPlayerCountFieldNumber = 4,
    kMaxPlayerCountFieldNumber = 5,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id();
  PROTOBUF_NODISCARD std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string password = 3;
  void clear_password();
  const std::string& password() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_password(ArgT0&& arg0, ArgT... args);
  std::string* mutable_password();
  PROTOBUF_NODISCARD std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // int32 playerCount = 4;
  void clear_playercount();
  int32_t playercount() const;
  void set_playercount(int32_t value);
  private:
  int32_t _internal_playercount() const;
  void _internal_set_playercount(int32_t value);
  public:

  // int32 maxPlayerCount = 5;
  void clear_maxplayercount();
  int32_t maxplayercount() const;
  void set_maxplayercount(int32_t value);
  private:
  int32_t _internal_maxplayercount() const;
  void _internal_set_maxplayercount(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:World)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
    int32_t playercount_;
    int32_t maxplayercount_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Message_2eproto;
};
// -------------------------------------------------------------------

class Join final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Join) */ {
 public:
  inline Join() : Join(nullptr) {}
  ~Join() override;
  explicit PROTOBUF_CONSTEXPR Join(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Join(const Join& from);
  Join(Join&& from) noexcept
    : Join() {
    *this = ::std::move(from);
  }

  inline Join& operator=(const Join& from) {
    CopyFrom(from);
    return *this;
  }
  inline Join& operator=(Join&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Join& default_instance() {
    return *internal_default_instance();
  }
  static inline const Join* internal_default_instance() {
    return reinterpret_cast<const Join*>(
               &_Join_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Join& a, Join& b) {
    a.Swap(&b);
  }
  inline void Swap(Join* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Join* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Join* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Join>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Join& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Join& from) {
    Join::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Join* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Join";
  }
  protected:
  explicit Join(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kPasswordFieldNumber = 2,
    kCandidateFieldNumber = 3,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id();
  PROTOBUF_NODISCARD std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // string password = 2;
  void clear_password();
  const std::string& password() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_password(ArgT0&& arg0, ArgT... args);
  std::string* mutable_password();
  PROTOBUF_NODISCARD std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // string candidate = 3;
  void clear_candidate();
  const std::string& candidate() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_candidate(ArgT0&& arg0, ArgT... args);
  std::string* mutable_candidate();
  PROTOBUF_NODISCARD std::string* release_candidate();
  void set_allocated_candidate(std::string* candidate);
  private:
  const std::string& _internal_candidate() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_candidate(const std::string& value);
  std::string* _internal_mutable_candidate();
  public:

  // @@protoc_insertion_point(class_scope:Join)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr candidate_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Message_2eproto;
};
// -------------------------------------------------------------------

class Synchronize final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Synchronize) */ {
 public:
  inline Synchronize() : Synchronize(nullptr) {}
  ~Synchronize() override;
  explicit PROTOBUF_CONSTEXPR Synchronize(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Synchronize(const Synchronize& from);
  Synchronize(Synchronize&& from) noexcept
    : Synchronize() {
    *this = ::std::move(from);
  }

  inline Synchronize& operator=(const Synchronize& from) {
    CopyFrom(from);
    return *this;
  }
  inline Synchronize& operator=(Synchronize&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Synchronize& default_instance() {
    return *internal_default_instance();
  }
  static inline const Synchronize* internal_default_instance() {
    return reinterpret_cast<const Synchronize*>(
               &_Synchronize_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Synchronize& a, Synchronize& b) {
    a.Swap(&b);
  }
  inline void Swap(Synchronize* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Synchronize* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Synchronize* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Synchronize>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Synchronize& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Synchronize& from) {
    Synchronize::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Synchronize* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Synchronize";
  }
  protected:
  explicit Synchronize(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kPlayerCountFieldNumber = 2,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id();
  PROTOBUF_NODISCARD std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // int32 playerCount = 2;
  void clear_playercount();
  int32_t playercount() const;
  void set_playercount(int32_t value);
  private:
  int32_t _internal_playercount() const;
  void _internal_set_playercount(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Synchronize)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
    int32_t playercount_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// World

// string id = 1;
inline void World::clear_id() {
  _impl_.id_.ClearToEmpty();
}
inline const std::string& World::id() const {
  // @@protoc_insertion_point(field_get:World.id)
  return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void World::set_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:World.id)
}
inline std::string* World::mutable_id() {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:World.id)
  return _s;
}
inline const std::string& World::_internal_id() const {
  return _impl_.id_.Get();
}
inline void World::_internal_set_id(const std::string& value) {
  
  _impl_.id_.Set(value, GetArenaForAllocation());
}
inline std::string* World::_internal_mutable_id() {
  
  return _impl_.id_.Mutable(GetArenaForAllocation());
}
inline std::string* World::release_id() {
  // @@protoc_insertion_point(field_release:World.id)
  return _impl_.id_.Release();
}
inline void World::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  _impl_.id_.SetAllocated(id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.id_.IsDefault()) {
    _impl_.id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:World.id)
}

// string name = 2;
inline void World::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& World::name() const {
  // @@protoc_insertion_point(field_get:World.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void World::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:World.name)
}
inline std::string* World::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:World.name)
  return _s;
}
inline const std::string& World::_internal_name() const {
  return _impl_.name_.Get();
}
inline void World::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* World::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* World::release_name() {
  // @@protoc_insertion_point(field_release:World.name)
  return _impl_.name_.Release();
}
inline void World::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:World.name)
}

// string password = 3;
inline void World::clear_password() {
  _impl_.password_.ClearToEmpty();
}
inline const std::string& World::password() const {
  // @@protoc_insertion_point(field_get:World.password)
  return _internal_password();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void World::set_password(ArgT0&& arg0, ArgT... args) {
 
 _impl_.password_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:World.password)
}
inline std::string* World::mutable_password() {
  std::string* _s = _internal_mutable_password();
  // @@protoc_insertion_point(field_mutable:World.password)
  return _s;
}
inline const std::string& World::_internal_password() const {
  return _impl_.password_.Get();
}
inline void World::_internal_set_password(const std::string& value) {
  
  _impl_.password_.Set(value, GetArenaForAllocation());
}
inline std::string* World::_internal_mutable_password() {
  
  return _impl_.password_.Mutable(GetArenaForAllocation());
}
inline std::string* World::release_password() {
  // @@protoc_insertion_point(field_release:World.password)
  return _impl_.password_.Release();
}
inline void World::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  _impl_.password_.SetAllocated(password, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.password_.IsDefault()) {
    _impl_.password_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:World.password)
}

// int32 playerCount = 4;
inline void World::clear_playercount() {
  _impl_.playercount_ = 0;
}
inline int32_t World::_internal_playercount() const {
  return _impl_.playercount_;
}
inline int32_t World::playercount() const {
  // @@protoc_insertion_point(field_get:World.playerCount)
  return _internal_playercount();
}
inline void World::_internal_set_playercount(int32_t value) {
  
  _impl_.playercount_ = value;
}
inline void World::set_playercount(int32_t value) {
  _internal_set_playercount(value);
  // @@protoc_insertion_point(field_set:World.playerCount)
}

// int32 maxPlayerCount = 5;
inline void World::clear_maxplayercount() {
  _impl_.maxplayercount_ = 0;
}
inline int32_t World::_internal_maxplayercount() const {
  return _impl_.maxplayercount_;
}
inline int32_t World::maxplayercount() const {
  // @@protoc_insertion_point(field_get:World.maxPlayerCount)
  return _internal_maxplayercount();
}
inline void World::_internal_set_maxplayercount(int32_t value) {
  
  _impl_.maxplayercount_ = value;
}
inline void World::set_maxplayercount(int32_t value) {
  _internal_set_maxplayercount(value);
  // @@protoc_insertion_point(field_set:World.maxPlayerCount)
}

// -------------------------------------------------------------------

// Join

// string id = 1;
inline void Join::clear_id() {
  _impl_.id_.ClearToEmpty();
}
inline const std::string& Join::id() const {
  // @@protoc_insertion_point(field_get:Join.id)
  return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Join::set_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Join.id)
}
inline std::string* Join::mutable_id() {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:Join.id)
  return _s;
}
inline const std::string& Join::_internal_id() const {
  return _impl_.id_.Get();
}
inline void Join::_internal_set_id(const std::string& value) {
  
  _impl_.id_.Set(value, GetArenaForAllocation());
}
inline std::string* Join::_internal_mutable_id() {
  
  return _impl_.id_.Mutable(GetArenaForAllocation());
}
inline std::string* Join::release_id() {
  // @@protoc_insertion_point(field_release:Join.id)
  return _impl_.id_.Release();
}
inline void Join::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  _impl_.id_.SetAllocated(id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.id_.IsDefault()) {
    _impl_.id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Join.id)
}

// string password = 2;
inline void Join::clear_password() {
  _impl_.password_.ClearToEmpty();
}
inline const std::string& Join::password() const {
  // @@protoc_insertion_point(field_get:Join.password)
  return _internal_password();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Join::set_password(ArgT0&& arg0, ArgT... args) {
 
 _impl_.password_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Join.password)
}
inline std::string* Join::mutable_password() {
  std::string* _s = _internal_mutable_password();
  // @@protoc_insertion_point(field_mutable:Join.password)
  return _s;
}
inline const std::string& Join::_internal_password() const {
  return _impl_.password_.Get();
}
inline void Join::_internal_set_password(const std::string& value) {
  
  _impl_.password_.Set(value, GetArenaForAllocation());
}
inline std::string* Join::_internal_mutable_password() {
  
  return _impl_.password_.Mutable(GetArenaForAllocation());
}
inline std::string* Join::release_password() {
  // @@protoc_insertion_point(field_release:Join.password)
  return _impl_.password_.Release();
}
inline void Join::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  _impl_.password_.SetAllocated(password, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.password_.IsDefault()) {
    _impl_.password_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Join.password)
}

// string candidate = 3;
inline void Join::clear_candidate() {
  _impl_.candidate_.ClearToEmpty();
}
inline const std::string& Join::candidate() const {
  // @@protoc_insertion_point(field_get:Join.candidate)
  return _internal_candidate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Join::set_candidate(ArgT0&& arg0, ArgT... args) {
 
 _impl_.candidate_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Join.candidate)
}
inline std::string* Join::mutable_candidate() {
  std::string* _s = _internal_mutable_candidate();
  // @@protoc_insertion_point(field_mutable:Join.candidate)
  return _s;
}
inline const std::string& Join::_internal_candidate() const {
  return _impl_.candidate_.Get();
}
inline void Join::_internal_set_candidate(const std::string& value) {
  
  _impl_.candidate_.Set(value, GetArenaForAllocation());
}
inline std::string* Join::_internal_mutable_candidate() {
  
  return _impl_.candidate_.Mutable(GetArenaForAllocation());
}
inline std::string* Join::release_candidate() {
  // @@protoc_insertion_point(field_release:Join.candidate)
  return _impl_.candidate_.Release();
}
inline void Join::set_allocated_candidate(std::string* candidate) {
  if (candidate != nullptr) {
    
  } else {
    
  }
  _impl_.candidate_.SetAllocated(candidate, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.candidate_.IsDefault()) {
    _impl_.candidate_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Join.candidate)
}

// -------------------------------------------------------------------

// Synchronize

// string id = 1;
inline void Synchronize::clear_id() {
  _impl_.id_.ClearToEmpty();
}
inline const std::string& Synchronize::id() const {
  // @@protoc_insertion_point(field_get:Synchronize.id)
  return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Synchronize::set_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Synchronize.id)
}
inline std::string* Synchronize::mutable_id() {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:Synchronize.id)
  return _s;
}
inline const std::string& Synchronize::_internal_id() const {
  return _impl_.id_.Get();
}
inline void Synchronize::_internal_set_id(const std::string& value) {
  
  _impl_.id_.Set(value, GetArenaForAllocation());
}
inline std::string* Synchronize::_internal_mutable_id() {
  
  return _impl_.id_.Mutable(GetArenaForAllocation());
}
inline std::string* Synchronize::release_id() {
  // @@protoc_insertion_point(field_release:Synchronize.id)
  return _impl_.id_.Release();
}
inline void Synchronize::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  _impl_.id_.SetAllocated(id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.id_.IsDefault()) {
    _impl_.id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Synchronize.id)
}

// int32 playerCount = 2;
inline void Synchronize::clear_playercount() {
  _impl_.playercount_ = 0;
}
inline int32_t Synchronize::_internal_playercount() const {
  return _impl_.playercount_;
}
inline int32_t Synchronize::playercount() const {
  // @@protoc_insertion_point(field_get:Synchronize.playerCount)
  return _internal_playercount();
}
inline void Synchronize::_internal_set_playercount(int32_t value) {
  
  _impl_.playercount_ = value;
}
inline void Synchronize::set_playercount(int32_t value) {
  _internal_set_playercount(value);
  // @@protoc_insertion_point(field_set:Synchronize.playerCount)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Message_2eproto
