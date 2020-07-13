#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class DateTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "DateTime"));
	}

	template <typename T = int32_t> static T& dp400() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& dp100() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& dp4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& w32file_epoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& MAX_VALUE_TICKS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& UnixEpoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& ticks18991230() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& OAMinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& OAMaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& formatExceptionMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ticks() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& kind() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ParseTimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ParseYearDayMonthFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ParseYearMonthDayFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ParseDayMonthYearFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ParseMonthDayYearFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& MonthDayShortFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DayMonthShortFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& daysmonth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& daysmonthleap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& to_local_time_span_object() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = int64_t> static T& last_now() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656408))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36564AC))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656550))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656560))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656604))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36566A8))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x365674C))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36567F0))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656894))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656938))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36569DC))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3656C74))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656D10))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656DB4))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3656E58))(this, provider);
	}
	template <typename T = int32_t> static T AbsoluteDays(int32_t year, int32_t month, int32_t day) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3653BE8))(0, year, month, day);
	}
	template <typename T = int32_t> T FromTicks(uintptr_t what) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36571D8))(this, what);
	}
	template <typename T = uintptr_t> T get_Date() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x365727C))(this);
	}
	template <typename T = int32_t> T get_Month() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3657290))(this);
	}
	template <typename T = int32_t> T get_Day() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x365729C))(this);
	}
	template <typename T = uintptr_t> T get_DayOfWeek() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36572DC))(this);
	}
	template <typename T = int32_t> T get_DayOfYear() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3657314))(this);
	}
	template <typename T = uintptr_t> T get_TimeOfDay() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3657374))(this);
	}
	template <typename T = int32_t> T get_Hour() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36573D0))(this);
	}
	template <typename T = int32_t> T get_Minute() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36573E4))(this);
	}
	template <typename T = int32_t> T get_Second() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36573F8))(this);
	}
	template <typename T = int32_t> T get_Millisecond() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x365740C))(this);
	}
	template <typename T = int64_t> static T GetTimeMonotonic() {
		return ((T (*)(void *))(Il2CppBase() + 0x3657418))(0);
	}
	template <typename T = int64_t> static T GetNow() {
		return ((T (*)(void *))(Il2CppBase() + 0x365741C))(0);
	}
	template <typename T = uintptr_t> static T get_Now() {
		return ((T (*)(void *))(Il2CppBase() + 0x3653434))(0);
	}
	template <typename T = int64_t> T get_Ticks() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3657524))(this);
	}
	template <typename T = uintptr_t> static T get_Today() {
		return ((T (*)(void *))(Il2CppBase() + 0x3657530))(0);
	}
	template <typename T = uintptr_t> static T get_UtcNow() {
		return ((T (*)(void *))(Il2CppBase() + 0x3657654))(0);
	}
	template <typename T = int32_t> T get_Year() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3657760))(this);
	}
	template <typename T = uintptr_t> T get_Kind() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3657774))(this);
	}
	template <typename T = uintptr_t> T Add(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3657924))(this, value);
	}
	template <typename T = uintptr_t> T AddDays(double value) {
		return ((T (*)(DateTime*, double))(Il2CppBase() + 0x3657BD0))(this, value);
	}
	template <typename T = uintptr_t> T AddTicks(int64_t value) {
		return ((T (*)(DateTime*, int64_t))(Il2CppBase() + 0x3657BEC))(this, value);
	}
	template <typename T = uintptr_t> T AddHours(double value) {
		return ((T (*)(DateTime*, double))(Il2CppBase() + 0x3657C38))(this, value);
	}
	template <typename T = uintptr_t> T AddMilliseconds(double value) {
		return ((T (*)(DateTime*, double))(Il2CppBase() + 0x3657C70))(this, value);
	}
	template <typename T = uintptr_t> T AddSeconds(double value) {
		return ((T (*)(DateTime*, double))(Il2CppBase() + 0x3657CC0))(this, value);
	}
	template <typename T = int32_t> static T Compare(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3657CF8))(0, t1, t2);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3657FB4))(this, value);
	}
	template <typename T = bool> T IsDaylightSavingTime() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36580B0))(this);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3658184))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3658274))(this, value);
	}
	template <typename T = int64_t> T ToBinary() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3658410))(this);
	}
	template <typename T = uintptr_t> static T FromBinary(int64_t dateData) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3658418))(0, dateData);
	}
	template <typename T = uintptr_t> static T SpecifyKind(uintptr_t value, uintptr_t kind) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3658678))(0, value, kind);
	}
	template <typename T = int32_t> static T DaysInMonth(int32_t year, int32_t month) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3653A0C))(0, year, month);
	}
	template <typename T = bool> T Equals_1(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36587E8))(this, value);
	}
	template <typename T = uintptr_t> static T FromFileTime(int64_t fileTime) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x36587F0))(0, fileTime);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDateTimeFormats() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3658D5C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDateTimeFormats_1(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3659088))(this, provider);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDateTimeFormats_2(char format, uintptr_t provider) {
		return ((T (*)(DateTime*, char, uintptr_t))(Il2CppBase() + 0x3659248))(this, format, provider);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDateTimeFormats_3(bool adjustutc, Il2CppArray<uintptr_t>* patterns, uintptr_t dfi) {
		return ((T (*)(DateTime*, bool, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3659354))(this, adjustutc, patterns, dfi);
	}
	template <typename T = void> T CheckDateTimeKind(uintptr_t kind) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3659370))(this, kind);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3659388))(this);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36593A0))(this);
	}
	template <typename T = bool> static T IsLeapYear(int32_t year) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3656E68))(0, year);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3648E34))(0, s);
	}
	template <typename T = uintptr_t> static T Parse_1(Il2CppString* s, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3648FF4))(0, s, provider);
	}
	template <typename T = uintptr_t> static T Parse_2(Il2CppString* s, uintptr_t provider, uintptr_t styles) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36593A8))(0, s, provider, styles);
	}
	template <typename T = bool> static T CoreParse(Il2CppString* s, uintptr_t provider, uintptr_t styles, uintptr_t* result, uintptr_t* dto, bool setExceptionOnError, uintptr_t exception) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, bool, uintptr_t))(Il2CppBase() + 0x3659518))(0, s, provider, styles, result, dto, setExceptionOnError, exception);
	}
	template <typename T = uintptr_t> static T ParseExact(Il2CppString* s, Il2CppString* format, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x365DCF0))(0, s, format, provider);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T YearMonthDayFormats(uintptr_t dfi, bool setExceptionOnError, uintptr_t exc) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x365A2F0))(0, dfi, setExceptionOnError, exc);
	}
	template <typename T = int32_t> static T _ParseNumber(Il2CppString* s, int32_t valuePos, int32_t min_digits, int32_t digits, bool leadingzero, bool sloppy_parsing, uintptr_t* num_parsed) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, int32_t, bool, bool, uintptr_t*))(Il2CppBase() + 0x365DF54))(0, s, valuePos, min_digits, digits, leadingzero, sloppy_parsing, num_parsed);
	}
	template <typename T = int32_t> static T _ParseEnum(Il2CppString* s, int32_t sPos, Il2CppArray<uintptr_t>* values, Il2CppArray<uintptr_t>* invValues, bool exact, uintptr_t* num_parsed) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, uintptr_t*))(Il2CppBase() + 0x365E15C))(0, s, sPos, values, invValues, exact, num_parsed);
	}
	template <typename T = bool> static T _ParseString(Il2CppString* s, int32_t sPos, int32_t maxlength, Il2CppString* value, uintptr_t* num_parsed) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x365E500))(0, s, sPos, maxlength, value, num_parsed);
	}
	template <typename T = bool> static T _ParseAmPm(Il2CppString* s, int32_t valuePos, int32_t num, uintptr_t dfi, bool exact, uintptr_t* num_parsed, uintptr_t ampm) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, uintptr_t, bool, uintptr_t*, uintptr_t))(Il2CppBase() + 0x365E680))(0, s, valuePos, num, dfi, exact, num_parsed, ampm);
	}
	template <typename T = bool> static T _ParseTimeSeparator(Il2CppString* s, int32_t sPos, uintptr_t dfi, bool exact, uintptr_t* num_parsed) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x365EBB4))(0, s, sPos, dfi, exact, num_parsed);
	}
	template <typename T = bool> static T _ParseDateSeparator(Il2CppString* s, int32_t sPos, uintptr_t dfi, bool exact, uintptr_t* num_parsed) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x365ED08))(0, s, sPos, dfi, exact, num_parsed);
	}
	template <typename T = bool> static T IsLetter(Il2CppString* s, int32_t pos) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x365EAC8))(0, s, pos);
	}
	template <typename T = bool> static T _DoParse(Il2CppString* s, Il2CppString* firstPart, Il2CppString* secondPart, bool exact, uintptr_t* result, uintptr_t* dto, uintptr_t dfi, uintptr_t style, bool firstPartIsDate, uintptr_t incompleteFormat, uintptr_t longYear) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, bool, uintptr_t*, uintptr_t*, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x365A7B0))(0, s, firstPart, secondPart, exact, result, dto, dfi, style, firstPartIsDate, incompleteFormat, longYear);
	}
	template <typename T = uintptr_t> static T ParseExact_1(Il2CppString* s, Il2CppString* format, uintptr_t provider, uintptr_t style) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x365DDB8))(0, s, format, provider, style);
	}
	template <typename T = uintptr_t> static T ParseExact_2(Il2CppString* s, Il2CppArray<uintptr_t>* formats, uintptr_t provider, uintptr_t style) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x365F870))(0, s, formats, provider, style);
	}
	template <typename T = void> static T CheckStyle(uintptr_t style) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x365FAF4))(0, style);
	}
	template <typename T = bool> static T TryParse(Il2CppString* s, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x365FC10))(0, s, result);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* s, uintptr_t provider, uintptr_t styles, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x365FDF8))(0, s, provider, styles, result);
	}
	template <typename T = bool> static T TryParseExact(Il2CppString* s, Il2CppString* format, uintptr_t provider, uintptr_t style, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x365FFEC))(0, s, format, provider, style, result);
	}
	template <typename T = bool> static T TryParseExact_1(Il2CppString* s, Il2CppArray<uintptr_t>* formats, uintptr_t provider, uintptr_t style, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x366013C))(0, s, formats, provider, style, result);
	}
	template <typename T = bool> static T ParseExact_3(Il2CppString* s, Il2CppArray<uintptr_t>* formats, uintptr_t dfi, uintptr_t style, uintptr_t* ret, bool exact, uintptr_t longYear, bool setExceptionOnError, uintptr_t exception) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t*, bool, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x365DA34))(0, s, formats, dfi, style, ret, exact, longYear, setExceptionOnError, exception);
	}
	template <typename T = uintptr_t> T Subtract(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3660470))(this, value);
	}
	template <typename T = uintptr_t> T Subtract_1(uintptr_t value) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x36605BC))(this, value);
	}
	template <typename T = int64_t> T ToFileTime() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660714))(this);
	}
	template <typename T = int64_t> T ToFileTimeUtc() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x366082C))(this);
	}
	template <typename T = Il2CppString*> T ToLongDateString() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x36608C4))(this);
	}
	template <typename T = Il2CppString*> T ToLongTimeString() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660954))(this);
	}
	template <typename T = double> T ToOADate() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660AA8))(this);
	}
	template <typename T = Il2CppString*> T ToShortDateString() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660B38))(this);
	}
	template <typename T = Il2CppString*> T ToShortTimeString() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660BC8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660EAC))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(DateTime*, uintptr_t))(Il2CppBase() + 0x3660EB4))(this, provider);
	}
	template <typename T = Il2CppString*> T ToString_2(Il2CppString* format) {
		return ((T (*)(DateTime*, Il2CppString*))(Il2CppBase() + 0x3660EC4))(this, format);
	}
	template <typename T = Il2CppString*> T ToString_3(Il2CppString* format, uintptr_t provider) {
		return ((T (*)(DateTime*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3660ED0))(this, format, provider);
	}
	template <typename T = uintptr_t> T ToLocalTime() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660ED8))(this);
	}
	template <typename T = uintptr_t> T ToUniversalTime() {
		return ((T (*)(DateTime*))(Il2CppBase() + 0x3660EEC))(this);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t d, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3657420))(0, d, t);
	}
	template <typename T = bool> static T op_Equality(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3660F00))(0, d1, d2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3660FC8))(0, t1, t2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3661090))(0, t1, t2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x365EF0C))(0, d1, d2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3661158))(0, t1, t2);
	}
	template <typename T = bool> static T op_LessThanOrEqual(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3661220))(0, t1, t2);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t d1, uintptr_t d2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36612E8))(0, d1, d2);
	}
	template <typename T = uintptr_t> static T op_Subtraction_1(uintptr_t d, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36613F8))(0, d, t);
	}

};

}
