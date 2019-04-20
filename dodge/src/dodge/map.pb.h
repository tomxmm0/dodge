// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map.proto

#ifndef PROTOBUF_INCLUDED_map_2eproto
#define PROTOBUF_INCLUDED_map_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_map_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_map_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_map_2eproto();
namespace map {
class Cube;
class CubeDefaultTypeInternal;
extern CubeDefaultTypeInternal _Cube_default_instance_;
class map;
class mapDefaultTypeInternal;
extern mapDefaultTypeInternal _map_default_instance_;
}  // namespace map
namespace google {
namespace protobuf {
template<> ::map::Cube* Arena::CreateMaybeMessage<::map::Cube>(Arena*);
template<> ::map::map* Arena::CreateMaybeMessage<::map::map>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace map {

enum Cube_cube_type {
  Cube_cube_type_BORDER_CUBE = 0,
  Cube_cube_type_REGULAR_CUBE = 1,
  Cube_cube_type_SPAWN_CUBE = 2,
  Cube_cube_type_Cube_cube_type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Cube_cube_type_Cube_cube_type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Cube_cube_type_IsValid(int value);
const Cube_cube_type Cube_cube_type_cube_type_MIN = Cube_cube_type_BORDER_CUBE;
const Cube_cube_type Cube_cube_type_cube_type_MAX = Cube_cube_type_SPAWN_CUBE;
const int Cube_cube_type_cube_type_ARRAYSIZE = Cube_cube_type_cube_type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Cube_cube_type_descriptor();
inline const ::std::string& Cube_cube_type_Name(Cube_cube_type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Cube_cube_type_descriptor(), value);
}
inline bool Cube_cube_type_Parse(
    const ::std::string& name, Cube_cube_type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Cube_cube_type>(
    Cube_cube_type_descriptor(), name, value);
}
// ===================================================================

class Cube :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:map.Cube) */ {
 public:
  Cube();
  virtual ~Cube();

  Cube(const Cube& from);

  inline Cube& operator=(const Cube& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Cube(Cube&& from) noexcept
    : Cube() {
    *this = ::std::move(from);
  }

  inline Cube& operator=(Cube&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Cube& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cube* internal_default_instance() {
    return reinterpret_cast<const Cube*>(
               &_Cube_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Cube* other);
  friend void swap(Cube& a, Cube& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Cube* New() const final {
    return CreateMaybeMessage<Cube>(nullptr);
  }

  Cube* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Cube>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Cube& from);
  void MergeFrom(const Cube& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cube* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Cube_cube_type cube_type;
  static const cube_type BORDER_CUBE =
    Cube_cube_type_BORDER_CUBE;
  static const cube_type REGULAR_CUBE =
    Cube_cube_type_REGULAR_CUBE;
  static const cube_type SPAWN_CUBE =
    Cube_cube_type_SPAWN_CUBE;
  static inline bool cube_type_IsValid(int value) {
    return Cube_cube_type_IsValid(value);
  }
  static const cube_type cube_type_MIN =
    Cube_cube_type_cube_type_MIN;
  static const cube_type cube_type_MAX =
    Cube_cube_type_cube_type_MAX;
  static const int cube_type_ARRAYSIZE =
    Cube_cube_type_cube_type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  cube_type_descriptor() {
    return Cube_cube_type_descriptor();
  }
  static inline const ::std::string& cube_type_Name(cube_type value) {
    return Cube_cube_type_Name(value);
  }
  static inline bool cube_type_Parse(const ::std::string& name,
      cube_type* value) {
    return Cube_cube_type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .map.Cube.cube_type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::map::Cube_cube_type type() const;
  void set_type(::map::Cube_cube_type value);

  // int32 x = 2;
  void clear_x();
  static const int kXFieldNumber = 2;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // int32 y = 3;
  void clear_y();
  static const int kYFieldNumber = 3;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:map.Cube)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int type_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_map_2eproto;
};
// -------------------------------------------------------------------

class map :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:map.map) */ {
 public:
  map();
  virtual ~map();

  map(const map& from);

  inline map& operator=(const map& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  map(map&& from) noexcept
    : map() {
    *this = ::std::move(from);
  }

  inline map& operator=(map&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const map& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const map* internal_default_instance() {
    return reinterpret_cast<const map*>(
               &_map_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(map* other);
  friend void swap(map& a, map& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline map* New() const final {
    return CreateMaybeMessage<map>(nullptr);
  }

  map* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<map>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const map& from);
  void MergeFrom(const map& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(map* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .map.Cube cubes = 1;
  int cubes_size() const;
  void clear_cubes();
  static const int kCubesFieldNumber = 1;
  ::map::Cube* mutable_cubes(int index);
  ::google::protobuf::RepeatedPtrField< ::map::Cube >*
      mutable_cubes();
  const ::map::Cube& cubes(int index) const;
  ::map::Cube* add_cubes();
  const ::google::protobuf::RepeatedPtrField< ::map::Cube >&
      cubes() const;

  // @@protoc_insertion_point(class_scope:map.map)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::map::Cube > cubes_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_map_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Cube

// .map.Cube.cube_type type = 1;
inline void Cube::clear_type() {
  type_ = 0;
}
inline ::map::Cube_cube_type Cube::type() const {
  // @@protoc_insertion_point(field_get:map.Cube.type)
  return static_cast< ::map::Cube_cube_type >(type_);
}
inline void Cube::set_type(::map::Cube_cube_type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:map.Cube.type)
}

// int32 x = 2;
inline void Cube::clear_x() {
  x_ = 0;
}
inline ::google::protobuf::int32 Cube::x() const {
  // @@protoc_insertion_point(field_get:map.Cube.x)
  return x_;
}
inline void Cube::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:map.Cube.x)
}

// int32 y = 3;
inline void Cube::clear_y() {
  y_ = 0;
}
inline ::google::protobuf::int32 Cube::y() const {
  // @@protoc_insertion_point(field_get:map.Cube.y)
  return y_;
}
inline void Cube::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:map.Cube.y)
}

// -------------------------------------------------------------------

// map

// repeated .map.Cube cubes = 1;
inline int map::cubes_size() const {
  return cubes_.size();
}
inline void map::clear_cubes() {
  cubes_.Clear();
}
inline ::map::Cube* map::mutable_cubes(int index) {
  // @@protoc_insertion_point(field_mutable:map.map.cubes)
  return cubes_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::map::Cube >*
map::mutable_cubes() {
  // @@protoc_insertion_point(field_mutable_list:map.map.cubes)
  return &cubes_;
}
inline const ::map::Cube& map::cubes(int index) const {
  // @@protoc_insertion_point(field_get:map.map.cubes)
  return cubes_.Get(index);
}
inline ::map::Cube* map::add_cubes() {
  // @@protoc_insertion_point(field_add:map.map.cubes)
  return cubes_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::map::Cube >&
map::cubes() const {
  // @@protoc_insertion_point(field_list:map.map.cubes)
  return cubes_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace map

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::map::Cube_cube_type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::map::Cube_cube_type>() {
  return ::map::Cube_cube_type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_map_2eproto
