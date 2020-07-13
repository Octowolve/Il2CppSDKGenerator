#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class DateTimeUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "DateTimeUtils"));
	}

	template <typename T = int64_t> static T& InitialJavaScriptDateTicks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DaysToMonth365() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DaysToMonth366() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetUtcOffset(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE9AE8))(0, d);
	}
	template <typename T = uintptr_t> static T ToSerializationMode(uintptr_t kind) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE9BDC))(0, kind);
	}
	template <typename T = uintptr_t> static T EnsureDateTime(uintptr_t value, uintptr_t timeZone) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE9E1C))(0, value, timeZone);
	}
	template <typename T = uintptr_t> static T SwitchToLocalTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEA014))(0, value);
	}
	template <typename T = uintptr_t> static T SwitchToUtcTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEA0BC))(0, value);
	}
	template <typename T = int64_t> static T ToUniversalTicks(uintptr_t dateTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEA164))(0, dateTime);
	}
	template <typename T = int64_t> static T ToUniversalTicks_1(uintptr_t dateTime, uintptr_t offset) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DEA284))(0, dateTime, offset);
	}
	template <typename T = int64_t> static T ConvertDateTimeToJavaScriptTicks(uintptr_t dateTime, uintptr_t offset) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DEA4D0))(0, dateTime, offset);
	}
	template <typename T = int64_t> static T ConvertDateTimeToJavaScriptTicks_1(uintptr_t dateTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEA674))(0, dateTime);
	}
	template <typename T = int64_t> static T ConvertDateTimeToJavaScriptTicks_2(uintptr_t dateTime, bool convertToUtc) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DEA738))(0, dateTime, convertToUtc);
	}
	template <typename T = int64_t> static T UniversialTicksToJavaScriptTicks(int64_t universialTicks) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4DEA5A8))(0, universialTicks);
	}
	template <typename T = uintptr_t> static T ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4DEA864))(0, javaScriptTicks);
	}
	template <typename T = bool> static T TryParseDateTimeIso(uintptr_t text, uintptr_t dateTimeZoneHandling, uintptr_t* dt) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEA95C))(0, text, dateTimeZoneHandling, dt);
	}
	template <typename T = bool> static T TryParseDateTimeOffsetIso(uintptr_t text, uintptr_t* dt) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEB260))(0, text, dt);
	}
	template <typename T = uintptr_t> static T CreateDateTime(uintptr_t dateTimeParser) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEB1A8))(0, dateTimeParser);
	}
	template <typename T = bool> static T TryParseDateTime(uintptr_t s, uintptr_t dateTimeZoneHandling, Il2CppString* dateFormatString, uintptr_t culture, uintptr_t* dt) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEB6A8))(0, s, dateTimeZoneHandling, dateFormatString, culture, dt);
	}
	template <typename T = bool> static T TryParseDateTime_1(Il2CppString* s, uintptr_t dateTimeZoneHandling, Il2CppString* dateFormatString, uintptr_t culture, uintptr_t* dt) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEC068))(0, s, dateTimeZoneHandling, dateFormatString, culture, dt);
	}
	template <typename T = bool> static T TryParseDateTimeOffset(uintptr_t s, Il2CppString* dateFormatString, uintptr_t culture, uintptr_t* dt) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEC4D0))(0, s, dateFormatString, culture, dt);
	}
	template <typename T = bool> static T TryParseDateTimeOffset_1(Il2CppString* s, Il2CppString* dateFormatString, uintptr_t culture, uintptr_t* dt) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DECC2C))(0, s, dateFormatString, culture, dt);
	}
	template <typename T = bool> static T TryParseMicrosoftDate(uintptr_t text, uintptr_t* ticks, uintptr_t* offset, uintptr_t* kind) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DED090))(0, text, ticks, offset, kind);
	}
	template <typename T = bool> static T TryParseDateTimeMicrosoft(uintptr_t text, uintptr_t dateTimeZoneHandling, uintptr_t* dt) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEBBE8))(0, text, dateTimeZoneHandling, dt);
	}
	template <typename T = bool> static T TryParseDateTimeExact(Il2CppString* text, uintptr_t dateTimeZoneHandling, Il2CppString* dateFormatString, uintptr_t culture, uintptr_t* dt) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEBEC0))(0, text, dateTimeZoneHandling, dateFormatString, culture, dt);
	}
	template <typename T = bool> static T TryParseDateTimeOffsetMicrosoft(uintptr_t text, uintptr_t* dt) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DEC824))(0, text, dt);
	}
	template <typename T = bool> static T TryParseDateTimeOffsetExact(Il2CppString* text, Il2CppString* dateFormatString, uintptr_t culture, uintptr_t* dt) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DECAE0))(0, text, dateFormatString, culture, dt);
	}
	template <typename T = bool> static T TryReadOffset(uintptr_t offsetText, int32_t startIndex, uintptr_t* offset) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4DED354))(0, offsetText, startIndex, offset);
	}
	template <typename T = void> static T WriteDateTimeString(uintptr_t writer, uintptr_t value, uintptr_t format, Il2CppString* formatString, uintptr_t culture) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DED5D4))(0, writer, value, format, formatString, culture);
	}
	template <typename T = int32_t> static T WriteDateTimeString_1(Il2CppArray<uintptr_t>* chars, int32_t start, uintptr_t value, void* offset, uintptr_t kind, uintptr_t format) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DED84C))(0, chars, start, value, offset, kind, format);
	}
	template <typename T = int32_t> static T WriteDefaultIsoDate(Il2CppArray<uintptr_t>* chars, int32_t start, uintptr_t dt) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4DEE07C))(0, chars, start, dt);
	}
	template <typename T = void> static T CopyIntToCharArray(Il2CppArray<uintptr_t>* chars, int32_t start, int32_t value, int32_t digits) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4DEE6BC))(0, chars, start, value, digits);
	}
	template <typename T = int32_t> static T WriteDateTimeOffset(Il2CppArray<uintptr_t>* chars, int32_t start, uintptr_t offset, uintptr_t format) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DEDEAC))(0, chars, start, offset, format);
	}
	template <typename T = void> static T WriteDateTimeOffsetString(uintptr_t writer, uintptr_t value, uintptr_t format, Il2CppString* formatString, uintptr_t culture) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DEE750))(0, writer, value, format, formatString, culture);
	}
	template <typename T = void> static T GetDateValues(uintptr_t td, uintptr_t* year, uintptr_t* month, uintptr_t* day) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DEE3E8))(0, td, year, month, day);
	}

};

}
