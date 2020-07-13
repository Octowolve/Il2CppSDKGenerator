#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class DateTimeOffset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "DateTimeOffset"));
	}

	template <typename T = uintptr_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& dt() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& utc_offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T System_IComparable_CompareTo(uintptr_t obj) {
		return ((T (*)(DateTimeOffset*, uintptr_t))(Il2CppBase() + 0x3661CC4))(this, obj);
	}
	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(DateTimeOffset*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3661E3C))(this, info, context);
	}
	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(DateTimeOffset*, uintptr_t))(Il2CppBase() + 0x3661E58))(this, sender);
	}
	template <typename T = uintptr_t> T AddSeconds(double seconds) {
		return ((T (*)(DateTimeOffset*, double))(Il2CppBase() + 0x3661EE0))(this, seconds);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(DateTimeOffset*, uintptr_t))(Il2CppBase() + 0x3661EFC))(this, other);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(DateTimeOffset*, uintptr_t))(Il2CppBase() + 0x3662030))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(DateTimeOffset*, uintptr_t))(Il2CppBase() + 0x36621B8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x36621EC))(this);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* input, uintptr_t formatProvider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x366221C))(0, input, formatProvider);
	}
	template <typename T = uintptr_t> static T Parse_1(Il2CppString* input, uintptr_t formatProvider, uintptr_t styles) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36622DC))(0, input, formatProvider, styles);
	}
	template <typename T = uintptr_t> static T ParseExact(Il2CppString* input, Il2CppString* format, uintptr_t formatProvider, uintptr_t styles) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36624B8))(0, input, format, formatProvider, styles);
	}
	template <typename T = uintptr_t> static T ParseExact_1(Il2CppString* input, Il2CppArray<uintptr_t>* formats, uintptr_t formatProvider, uintptr_t styles) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3662704))(0, input, formats, formatProvider, styles);
	}
	template <typename T = bool> static T ParseExact_2(Il2CppString* input, Il2CppArray<uintptr_t>* formats, uintptr_t dfi, uintptr_t styles, uintptr_t* ret) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3662A44))(0, input, formats, dfi, styles, ret);
	}
	template <typename T = bool> static T DoParse(Il2CppString* input, Il2CppString* format, bool exact, uintptr_t* result, uintptr_t dfi, uintptr_t styles) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, uintptr_t*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3662CC0))(0, input, format, exact, result, dfi, styles);
	}
	template <typename T = int32_t> static T ParseNumber(Il2CppString* input, int32_t pos, int32_t digits, bool leading_zero, bool allow_leading_white, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, bool, bool, uintptr_t*))(Il2CppBase() + 0x3664BDC))(0, input, pos, digits, leading_zero, allow_leading_white, result);
	}
	template <typename T = int32_t> static T ParseNumber_1(Il2CppString* input, int32_t pos, int32_t digits, bool leading_zero, bool allow_leading_white, uintptr_t* result, uintptr_t* digit_parsed) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, bool, bool, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3664E10))(0, input, pos, digits, leading_zero, allow_leading_white, result, digit_parsed);
	}
	template <typename T = int32_t> static T ParseEnum(Il2CppString* input, int32_t pos, Il2CppArray<uintptr_t>* enums, bool allow_leading_white, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, bool, uintptr_t*))(Il2CppBase() + 0x3664CB8))(0, input, pos, enums, allow_leading_white, result);
	}
	template <typename T = int32_t> static T ParseChar(Il2CppString* input, int32_t pos, char c, bool allow_leading_white, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, int32_t, char, bool, uintptr_t*))(Il2CppBase() + 0x3664FF4))(0, input, pos, c, allow_leading_white, result);
	}
	template <typename T = int64_t> T ToFileTime() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x36651C0))(this);
	}
	template <typename T = uintptr_t> T ToLocalTime() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3665374))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3665814))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* format, uintptr_t formatProvider) {
		return ((T (*)(DateTimeOffset*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3666954))(this, format, formatProvider);
	}
	template <typename T = uintptr_t> T ToUniversalTime() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x366695C))(this);
	}
	template <typename T = bool> static T TryParse(Il2CppString* input, uintptr_t formatProvider, uintptr_t styles, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3666970))(0, input, formatProvider, styles, result);
	}
	template <typename T = bool> static T TryParseExact(Il2CppString* input, Il2CppString* format, uintptr_t formatProvider, uintptr_t styles, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3666B44))(0, input, format, formatProvider, styles, result);
	}
	template <typename T = uintptr_t> T get_Date() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666DF0))(this);
	}
	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666E04))(this);
	}
	template <typename T = int32_t> T get_Day() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666E18))(this);
	}
	template <typename T = uintptr_t> T get_DayOfWeek() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666E24))(this);
	}
	template <typename T = int32_t> T get_DayOfYear() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666E5C))(this);
	}
	template <typename T = int32_t> T get_Hour() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666E68))(this);
	}
	template <typename T = uintptr_t> T get_LocalDateTime() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666E74))(this);
	}
	template <typename T = int32_t> T get_Millisecond() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666EB0))(this);
	}
	template <typename T = int32_t> T get_Minute() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666EBC))(this);
	}
	template <typename T = int32_t> T get_Month() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666EC8))(this);
	}
	template <typename T = uintptr_t> T get_Offset() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666ED4))(this);
	}
	template <typename T = int32_t> T get_Second() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666EE0))(this);
	}
	template <typename T = int64_t> T get_Ticks() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666EEC))(this);
	}
	template <typename T = uintptr_t> T get_TimeOfDay() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666EF8))(this);
	}
	template <typename T = uintptr_t> T get_UtcDateTime() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666F4C))(this);
	}
	template <typename T = int64_t> T get_UtcTicks() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666F98))(this);
	}
	template <typename T = int32_t> T get_Year() {
		return ((T (*)(DateTimeOffset*))(Il2CppBase() + 0x3666FD0))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t dateTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3666FDC))(0, dateTime);
	}

};

}
