#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
namespace Json { class ValueIterator; }
// clang-format on

namespace Json {

class Value {
public:
    // Value inner types declare
    // clang-format off
    class CZString;
    struct CZStringCompare;
    // clang-format on
    
    // Value inner types define
    class CZString {
    public:
        // prevent constructor by default
        CZString& operator=(CZString const &) = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??0CZString@Value@Json@@QEAA@AEBV012@@Z
        MCAPI CZString(class Json::Value::CZString const &);
    
        // symbol: ??0CZString@Value@Json@@QEAA@XZ
        MCAPI CZString();
    
        // symbol: ??0CZString@Value@Json@@QEAA@PEBD@Z
        MCAPI CZString(char const *);
    
        // symbol: ??0CZString@Value@Json@@QEAA@PEAD_N@Z
        MCAPI CZString(char *, bool);
    
        // symbol: ??0CZString@Value@Json@@QEAA@$$QEAV012@@Z
        MCAPI CZString(class Json::Value::CZString &&);
    
        // symbol: ?c_str@CZString@Value@Json@@QEBAPEBDXZ
        MCAPI char const * c_str() const;
    
        // symbol: ??1CZString@Value@Json@@QEAA@XZ
        MCAPI ~CZString();
    
        // NOLINTEND
    
    };
    
    struct CZStringCompare {
    public:
        // prevent constructor by default
        CZStringCompare& operator=(CZStringCompare const &) = delete;
        CZStringCompare(CZStringCompare const &) = delete;
        CZStringCompare() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??RCZStringCompare@Value@Json@@QEBA_NAEBVCZString@12@0@Z
        MCAPI bool operator()(class Json::Value::CZString const &, class Json::Value::CZString const &) const;
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    Value() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Value@Json@@QEAA@$$QEAV01@@Z
    MCAPI Value(class Json::Value &&);

    // symbol: ??0Value@Json@@QEAA@PEAVCZString@01@@Z
    MCAPI Value(class Json::Value::CZString *);

    // symbol: ??0Value@Json@@QEAA@W4ValueType@1@@Z
    MCAPI Value(::Json::ValueType);

    // symbol: ??0Value@Json@@QEAA@_K@Z
    MCAPI Value(uint64_t);

    // symbol: ??0Value@Json@@QEAA@N@Z
    MCAPI Value(double);

    // symbol: ??0Value@Json@@QEAA@I@Z
    MCAPI Value(uint32_t);

    // symbol: ??0Value@Json@@QEAA@PEBD@Z
    MCAPI Value(char const *);

    // symbol: ??0Value@Json@@QEAA@_N@Z
    MCAPI Value(bool);

    // symbol: ??0Value@Json@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI Value(std::string const &);

    // symbol: ??0Value@Json@@QEAA@AEBV01@@Z
    MCAPI Value(class Json::Value const &);

    // symbol: ??0Value@Json@@QEAA@_J@Z
    MCAPI Value(int64_t);

    // symbol: ??0Value@Json@@QEAA@H@Z
    MCAPI Value(int32_t);

    // symbol: ?append@Value@Json@@QEAAAEAV12@AEBV12@@Z
    MCAPI class Json::Value & append(class Json::Value const &);

    // symbol: ?append@Value@Json@@QEAAAEAV12@$$QEAV12@@Z
    MCAPI class Json::Value & append(class Json::Value &&);

    // symbol: ?asBool@Value@Json@@QEBA_N_N@Z
    MCAPI bool asBool(bool) const;

    // symbol: ?asCString@Value@Json@@QEBAPEBDXZ
    MCAPI char const * asCString() const;

    // symbol: ?asDouble@Value@Json@@QEBANN@Z
    MCAPI double asDouble(double) const;

    // symbol: ?asFloat@Value@Json@@QEBAMM@Z
    MCAPI float asFloat(float) const;

    // symbol: ?asInt@Value@Json@@QEBAHH@Z
    MCAPI int32_t asInt(int32_t) const;

    // symbol: ?asInt64@Value@Json@@QEBA_J_J@Z
    MCAPI int64_t asInt64(int64_t) const;

    // symbol: ?asLargestInt@Value@Json@@QEBA_JXZ
    MCAPI int64_t asLargestInt() const;

    // symbol: ?asLargestUInt@Value@Json@@QEBA_KXZ
    MCAPI uint64_t asLargestUInt() const;

    // symbol: ?asString@Value@Json@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
    MCAPI std::string asString(std::string const &) const;

    // symbol: ?asUInt@Value@Json@@QEBAII@Z
    MCAPI uint32_t asUInt(uint32_t) const;

    // symbol: ?asUInt64@Value@Json@@QEBA_K_K@Z
    MCAPI uint64_t asUInt64(uint64_t) const;

    // symbol: ?begin@Value@Json@@QEBA?AVValueConstIterator@2@XZ
    MCAPI class Json::ValueConstIterator begin() const;

    // symbol: ?begin@Value@Json@@QEAA?AVValueIterator@2@XZ
    MCAPI class Json::ValueIterator begin();

    // symbol: ?clear@Value@Json@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?compare@Value@Json@@QEBAHAEBV12@@Z
    MCAPI int32_t compare(class Json::Value const &) const;

    // symbol: ?empty@Value@Json@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?end@Value@Json@@QEAA?AVValueIterator@2@XZ
    MCAPI class Json::ValueIterator end();

    // symbol: ?end@Value@Json@@QEBA?AVValueConstIterator@2@XZ
    MCAPI class Json::ValueConstIterator end() const;

    // symbol: ?get@Value@Json@@QEBA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV12@@Z
    MCAPI class Json::Value get(std::string const &, class Json::Value const &) const;

    // symbol: ?get@Value@Json@@QEBA?AV12@PEBDAEBV12@@Z
    MCAPI class Json::Value get(char const *, class Json::Value const &) const;

    // symbol: ?getMemberNames@Value@Json@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getMemberNames() const;

    // symbol: ?isArray@Value@Json@@QEBA_NXZ
    MCAPI bool isArray() const;

    // symbol: ?isBool@Value@Json@@QEBA_NXZ
    MCAPI bool isBool() const;

    // symbol: ?isConvertibleTo@Value@Json@@QEBA_NW4ValueType@2@@Z
    MCAPI bool isConvertibleTo(::Json::ValueType) const;

    // symbol: ?isDouble@Value@Json@@QEBA_NXZ
    MCAPI bool isDouble() const;

    // symbol: ?isInt@Value@Json@@QEBA_NXZ
    MCAPI bool isInt() const;

    // symbol: ?isIntegral@Value@Json@@QEBA_NXZ
    MCAPI bool isIntegral() const;

    // symbol: ?isMember@Value@Json@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isMember(std::string const &) const;

    // symbol: ?isMember@Value@Json@@QEBA_NPEBD@Z
    MCAPI bool isMember(char const *) const;

    // symbol: ?isNull@Value@Json@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ?isNumeric@Value@Json@@QEBA_NXZ
    MCAPI bool isNumeric() const;

    // symbol: ?isObject@Value@Json@@QEBA_NXZ
    MCAPI bool isObject() const;

    // symbol: ?isString@Value@Json@@QEBA_NXZ
    MCAPI bool isString() const;

    // symbol: ??9Value@Json@@QEBA_NAEBV01@@Z
    MCAPI bool operator!=(class Json::Value const &) const;

    // symbol: ??MValue@Json@@QEBA_NAEBV01@@Z
    MCAPI bool operator<(class Json::Value const &) const;

    // symbol: ??4Value@Json@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Json::Value & operator=(class Json::Value const &);

    // symbol: ??4Value@Json@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Json::Value & operator=(class Json::Value &&);

    // symbol: ??8Value@Json@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class Json::Value const &) const;

    // symbol: ??AValue@Json@@QEBAAEBV01@PEBD@Z
    MCAPI class Json::Value const & operator[](char const *) const;

    // symbol: ??AValue@Json@@QEBAAEBV01@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Json::Value const & operator[](std::string const &) const;

    // symbol: ??AValue@Json@@QEBAAEBV01@I@Z
    MCAPI class Json::Value const & operator[](uint32_t) const;

    // symbol: ??AValue@Json@@QEAAAEAV01@I@Z
    MCAPI class Json::Value & operator[](uint32_t);

    // symbol: ??AValue@Json@@QEAAAEAV01@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Json::Value & operator[](std::string const &);

    // symbol: ??AValue@Json@@QEBAAEBV01@H@Z
    MCAPI class Json::Value const & operator[](int32_t) const;

    // symbol: ??AValue@Json@@QEAAAEAV01@H@Z
    MCAPI class Json::Value & operator[](int32_t);

    // symbol: ??AValue@Json@@QEAAAEAV01@PEBD@Z
    MCAPI class Json::Value & operator[](char const *);

    // symbol: ?removeMember@Value@Json@@QEAA?AV12@PEBD@Z
    MCAPI class Json::Value removeMember(char const *);

    // symbol: ?removeMember@Value@Json@@QEAA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Json::Value removeMember(std::string const &);

    // symbol: ?resize@Value@Json@@QEAAXI@Z
    MCAPI void resize(uint32_t);

    // symbol: ?size@Value@Json@@QEBAIXZ
    MCAPI uint32_t size() const;

    // symbol: ?toStyledString@Value@Json@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toStyledString() const;

    // symbol: ?type@Value@Json@@QEBA?AW4ValueType@2@XZ
    MCAPI ::Json::ValueType type() const;

    // symbol: ??1Value@Json@@QEAA@XZ
    MCAPI ~Value();

    // symbol: ?maxInt@Value@Json@@2HB
    MCAPI static int32_t const maxInt;

    // symbol: ?maxInt64@Value@Json@@2_JB
    MCAPI static int64_t const maxInt64;

    // symbol: ?maxLargestInt@Value@Json@@2_JB
    MCAPI static int64_t const maxLargestInt;

    // symbol: ?maxLargestUInt@Value@Json@@2_KB
    MCAPI static uint64_t const maxLargestUInt;

    // symbol: ?maxUInt@Value@Json@@2IB
    MCAPI static uint32_t const maxUInt;

    // symbol: ?maxUInt64@Value@Json@@2_KB
    MCAPI static uint64_t const maxUInt64;

    // symbol: ?minInt@Value@Json@@2HB
    MCAPI static int32_t const minInt;

    // symbol: ?minInt64@Value@Json@@2_JB
    MCAPI static int64_t const minInt64;

    // symbol: ?minLargestInt@Value@Json@@2_JB
    MCAPI static int64_t const minLargestInt;

    // symbol: ?null@Value@Json@@2V12@B
    MCAPI static class Json::Value const null;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_insert@Value@Json@@AEAAX$$QEAVCZString@12@$$QEAV12@_N@Z
    MCAPI void _insert(class Json::Value::CZString &&, class Json::Value &&, bool);

    // symbol: ?_resolveReference@Value@Json@@AEAAAEAV12@PEBD@Z
    MCAPI class Json::Value & _resolveReference(char const *);

    // NOLINTEND

};

};
