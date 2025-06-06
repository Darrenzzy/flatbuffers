// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_V2_V2_H_
#define FLATBUFFERS_GENERATED_V2_V2_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 2 &&
              FLATBUFFERS_VERSION_REVISION == 10,
             "Non-compatible flatbuffers version included");

namespace v2 {

struct RootTable;
struct RootTableBuilder;
struct RootTableT;

bool operator==(const RootTableT &lhs, const RootTableT &rhs);
bool operator!=(const RootTableT &lhs, const RootTableT &rhs);

inline const ::flatbuffers::TypeTable *RootTableTypeTable();

struct RootTableT : public ::flatbuffers::NativeTable {
  typedef RootTable TableType;
  float a = 0.0f;
  std::vector<uint8_t> b{};
  std::vector<uint8_t> big_vector{};
};

struct RootTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef RootTableT NativeTableType;
  typedef RootTableBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return RootTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_A = 4,
    VT_B = 6,
    VT_BIG_VECTOR = 8
  };
  float a() const {
    return GetField<float>(VT_A, 0.0f);
  }
  bool mutate_a(float _a = 0.0f) {
    return SetField<float>(VT_A, _a, 0.0f);
  }
  const ::flatbuffers::Vector<uint8_t> *b() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_B);
  }
  ::flatbuffers::Vector<uint8_t> *mutable_b() {
    return GetPointer<::flatbuffers::Vector<uint8_t> *>(VT_B);
  }
  const ::flatbuffers::Vector64<uint8_t> *big_vector() const {
    return GetPointer64<const ::flatbuffers::Vector64<uint8_t> *>(VT_BIG_VECTOR);
  }
  ::flatbuffers::Vector64<uint8_t> *mutable_big_vector() {
    return GetPointer64<::flatbuffers::Vector64<uint8_t> *>(VT_BIG_VECTOR);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_A, 4) &&
           VerifyOffset(verifier, VT_B) &&
           verifier.VerifyVector(b()) &&
           VerifyOffset64(verifier, VT_BIG_VECTOR) &&
           verifier.VerifyVector(big_vector()) &&
           verifier.EndTable();
  }
  RootTableT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(RootTableT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<RootTable> Pack(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct RootTableBuilder {
  typedef RootTable Table;
  ::flatbuffers::FlatBufferBuilder64 &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_a(float a) {
    fbb_.AddElement<float>(RootTable::VT_A, a, 0.0f);
  }
  void add_b(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> b) {
    fbb_.AddOffset(RootTable::VT_B, b);
  }
  void add_big_vector(::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> big_vector) {
    fbb_.AddOffset(RootTable::VT_BIG_VECTOR, big_vector);
  }
  explicit RootTableBuilder(::flatbuffers::FlatBufferBuilder64 &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<RootTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<RootTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<RootTable> CreateRootTable(
    ::flatbuffers::FlatBufferBuilder64 &_fbb,
    float a = 0.0f,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> b = 0,
    ::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> big_vector = 0) {
  RootTableBuilder builder_(_fbb);
  builder_.add_big_vector(big_vector);
  builder_.add_b(b);
  builder_.add_a(a);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<RootTable> CreateRootTableDirect(
    ::flatbuffers::FlatBufferBuilder64 &_fbb,
    float a = 0.0f,
    const std::vector<uint8_t> *b = nullptr,
    const std::vector<uint8_t> *big_vector = nullptr) {
  auto big_vector__ = big_vector ? _fbb.CreateVector64(*big_vector) : 0;
  auto b__ = b ? _fbb.CreateVector<uint8_t>(*b) : 0;
  return v2::CreateRootTable(
      _fbb,
      a,
      b__,
      big_vector__);
}

::flatbuffers::Offset<RootTable> CreateRootTable(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);


inline bool operator==(const RootTableT &lhs, const RootTableT &rhs) {
  return
      (lhs.a == rhs.a) &&
      (lhs.b == rhs.b) &&
      (lhs.big_vector == rhs.big_vector);
}

inline bool operator!=(const RootTableT &lhs, const RootTableT &rhs) {
    return !(lhs == rhs);
}


inline RootTableT *RootTable::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<RootTableT>(new RootTableT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void RootTable::UnPackTo(RootTableT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = a(); _o->a = _e; }
  { auto _e = b(); if (_e) { _o->b.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->b.begin()); } }
  { auto _e = big_vector(); if (_e) { _o->big_vector.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->big_vector.begin()); } }
}

inline ::flatbuffers::Offset<RootTable> RootTable::Pack(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateRootTable(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<RootTable> CreateRootTable(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder64 *__fbb; const RootTableT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _a = _o->a;
  auto _b = _o->b.size() ? _fbb.CreateVector(_o->b) : 0;
  auto _big_vector = _o->big_vector.size() ? _fbb.CreateVector64(_o->big_vector) : 0;
  return v2::CreateRootTable(
      _fbb,
      _a,
      _b,
      _big_vector);
}

inline const ::flatbuffers::TypeTable *RootTableTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_FLOAT, 0, -1 },
    { ::flatbuffers::ET_UCHAR, 1, -1 },
    { ::flatbuffers::ET_UCHAR, 1, -1 }
  };
  static const char * const names[] = {
    "a",
    "b",
    "big_vector"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 3, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const v2::RootTable *GetRootTable(const void *buf) {
  return ::flatbuffers::GetRoot<v2::RootTable>(buf);
}

inline const v2::RootTable *GetSizePrefixedRootTable(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<v2::RootTable,::flatbuffers::uoffset64_t>(buf);
}

inline RootTable *GetMutableRootTable(void *buf) {
  return ::flatbuffers::GetMutableRoot<RootTable>(buf);
}

inline v2::RootTable *GetMutableSizePrefixedRootTable(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<v2::RootTable,::flatbuffers::uoffset64_t>(buf);
}

inline bool VerifyRootTableBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<v2::RootTable>(nullptr);
}

inline bool VerifySizePrefixedRootTableBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<v2::RootTable,::flatbuffers::uoffset64_t>(nullptr);
}

inline void FinishRootTableBuffer(
    ::flatbuffers::FlatBufferBuilder64 &fbb,
    ::flatbuffers::Offset<v2::RootTable> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRootTableBuffer(
    ::flatbuffers::FlatBufferBuilder64 &fbb,
    ::flatbuffers::Offset<v2::RootTable> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<v2::RootTableT> UnPackRootTable(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<v2::RootTableT>(GetRootTable(buf)->UnPack(res));
}

inline std::unique_ptr<v2::RootTableT> UnPackSizePrefixedRootTable(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<v2::RootTableT>(GetSizePrefixedRootTable(buf)->UnPack(res));
}

}  // namespace v2

#endif  // FLATBUFFERS_GENERATED_V2_V2_H_
