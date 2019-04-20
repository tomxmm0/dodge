// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map.proto

#include "stdafx.hpp"
#include "map.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_map_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Cube_map_2eproto;
namespace map {
class CubeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Cube> _instance;
} _Cube_default_instance_;
class mapDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<map> _instance;
} _map_default_instance_;
}  // namespace map
static void InitDefaultsCube_map_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::map::_Cube_default_instance_;
    new (ptr) ::map::Cube();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::map::Cube::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Cube_map_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCube_map_2eproto}, {}};

static void InitDefaultsmap_map_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::map::_map_default_instance_;
    new (ptr) ::map::map();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::map::map::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_map_map_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsmap_map_2eproto}, {
      &scc_info_Cube_map_2eproto.base,}};

void InitDefaults_map_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Cube_map_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_map_map_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_map_2eproto[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_map_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_map_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_map_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::map::Cube, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::map::Cube, type_),
  PROTOBUF_FIELD_OFFSET(::map::Cube, x_),
  PROTOBUF_FIELD_OFFSET(::map::Cube, y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::map::map, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::map::map, cubes_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::map::Cube)},
  { 8, -1, sizeof(::map::map)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::map::_Cube_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::map::_map_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_map_2eproto = {
  {}, AddDescriptors_map_2eproto, "map.proto", schemas,
  file_default_instances, TableStruct_map_2eproto::offsets,
  file_level_metadata_map_2eproto, 2, file_level_enum_descriptors_map_2eproto, file_level_service_descriptors_map_2eproto,
};

const char descriptor_table_protodef_map_2eproto[] =
  "\n\tmap.proto\022\003map\"\177\n\004Cube\022!\n\004type\030\001 \001(\0162\023"
  ".map.Cube.cube_type\022\t\n\001x\030\002 \001(\005\022\t\n\001y\030\003 \001("
  "\005\">\n\tcube_type\022\017\n\013BORDER_CUBE\020\000\022\020\n\014REGUL"
  "AR_CUBE\020\001\022\016\n\nSPAWN_CUBE\020\002\"\037\n\003map\022\030\n\005cube"
  "s\030\001 \003(\0132\t.map.Cubeb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_map_2eproto = {
  false, InitDefaults_map_2eproto, 
  descriptor_table_protodef_map_2eproto,
  "map.proto", &assign_descriptors_table_map_2eproto, 186,
};

void AddDescriptors_map_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_map_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_map_2eproto = []() { AddDescriptors_map_2eproto(); return true; }();
namespace map {
const ::google::protobuf::EnumDescriptor* Cube_cube_type_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_map_2eproto);
  return file_level_enum_descriptors_map_2eproto[0];
}
bool Cube_cube_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Cube_cube_type Cube::BORDER_CUBE;
const Cube_cube_type Cube::REGULAR_CUBE;
const Cube_cube_type Cube::SPAWN_CUBE;
const Cube_cube_type Cube::cube_type_MIN;
const Cube_cube_type Cube::cube_type_MAX;
const int Cube::cube_type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Cube::InitAsDefaultInstance() {
}
class Cube::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cube::kTypeFieldNumber;
const int Cube::kXFieldNumber;
const int Cube::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cube::Cube()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:map.Cube)
}
Cube::Cube(const Cube& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&type_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:map.Cube)
}

void Cube::SharedCtor() {
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&type_)) + sizeof(y_));
}

Cube::~Cube() {
  // @@protoc_insertion_point(destructor:map.Cube)
  SharedDtor();
}

void Cube::SharedDtor() {
}

void Cube::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Cube& Cube::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Cube_map_2eproto.base);
  return *internal_default_instance();
}


void Cube::Clear() {
// @@protoc_insertion_point(message_clear_start:map.Cube)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&type_)) + sizeof(y_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Cube::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Cube*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .map.Cube.cube_type type = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        msg->set_type(static_cast<::map::Cube_cube_type>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 x = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_x(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 y = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_y(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Cube::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:map.Cube)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .map.Cube.cube_type type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::map::Cube_cube_type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 x = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 y = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:map.Cube)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:map.Cube)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Cube::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:map.Cube)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .map.Cube.cube_type type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // int32 x = 2;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->x(), output);
  }

  // int32 y = 3;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->y(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:map.Cube)
}

::google::protobuf::uint8* Cube::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:map.Cube)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .map.Cube.cube_type type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // int32 x = 2;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->x(), target);
  }

  // int32 y = 3;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->y(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:map.Cube)
  return target;
}

size_t Cube::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:map.Cube)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .map.Cube.cube_type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // int32 x = 2;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // int32 y = 3;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Cube::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:map.Cube)
  GOOGLE_DCHECK_NE(&from, this);
  const Cube* source =
      ::google::protobuf::DynamicCastToGenerated<Cube>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:map.Cube)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:map.Cube)
    MergeFrom(*source);
  }
}

void Cube::MergeFrom(const Cube& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:map.Cube)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void Cube::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:map.Cube)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Cube::CopyFrom(const Cube& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:map.Cube)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Cube::IsInitialized() const {
  return true;
}

void Cube::Swap(Cube* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cube::InternalSwap(Cube* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(type_, other->type_);
  swap(x_, other->x_);
  swap(y_, other->y_);
}

::google::protobuf::Metadata Cube::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_map_2eproto);
  return ::file_level_metadata_map_2eproto[kIndexInFileMessages];
}


// ===================================================================

void map::InitAsDefaultInstance() {
}
class map::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int map::kCubesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

map::map()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:map.map)
}
map::map(const map& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      cubes_(from.cubes_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:map.map)
}

void map::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_map_map_2eproto.base);
}

map::~map() {
  // @@protoc_insertion_point(destructor:map.map)
  SharedDtor();
}

void map::SharedDtor() {
}

void map::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const map& map::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_map_map_2eproto.base);
  return *internal_default_instance();
}


void map::Clear() {
// @@protoc_insertion_point(message_clear_start:map.map)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cubes_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* map::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<map*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated .map.Cube cubes = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::map::Cube::_InternalParse;
          object = msg->add_cubes();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 10 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool map::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:map.map)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .map.Cube cubes = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_cubes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:map.map)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:map.map)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void map::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:map.map)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .map.Cube cubes = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->cubes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->cubes(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:map.map)
}

::google::protobuf::uint8* map::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:map.map)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .map.Cube cubes = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->cubes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->cubes(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:map.map)
  return target;
}

size_t map::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:map.map)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .map.Cube cubes = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->cubes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->cubes(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void map::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:map.map)
  GOOGLE_DCHECK_NE(&from, this);
  const map* source =
      ::google::protobuf::DynamicCastToGenerated<map>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:map.map)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:map.map)
    MergeFrom(*source);
  }
}

void map::MergeFrom(const map& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:map.map)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cubes_.MergeFrom(from.cubes_);
}

void map::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:map.map)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void map::CopyFrom(const map& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:map.map)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool map::IsInitialized() const {
  return true;
}

void map::Swap(map* other) {
  if (other == this) return;
  InternalSwap(other);
}
void map::InternalSwap(map* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&cubes_)->InternalSwap(CastToBase(&other->cubes_));
}

::google::protobuf::Metadata map::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_map_2eproto);
  return ::file_level_metadata_map_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace map
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::map::Cube* Arena::CreateMaybeMessage< ::map::Cube >(Arena* arena) {
  return Arena::CreateInternal< ::map::Cube >(arena);
}
template<> PROTOBUF_NOINLINE ::map::map* Arena::CreateMaybeMessage< ::map::map >(Arena* arena) {
  return Arena::CreateInternal< ::map::map >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
