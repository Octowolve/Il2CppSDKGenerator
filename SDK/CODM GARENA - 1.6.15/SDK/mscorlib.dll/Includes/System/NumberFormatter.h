#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class NumberFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "NumberFormatter"));
	}

	template <typename T = uintptr_t> static T& MantissaBitsTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TensExponentTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& DigitLowerTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& DigitUpperTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& TenPowersList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& DecHexDigits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& _thread() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _nfi() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _NaN() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _infinity() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& _isCustomFormat() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& _specifierIsUpper() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& _positive() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = char> T& _specifier() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = int32_t> T& _precision() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _defPrecision() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _digitsLen() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _offset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _decPointPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _val1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _val2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _val3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _val4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cbuf() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _ind() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& threadNumberFormatter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T GetFormatterTables(uintptr_t* MantissaBitsTable, uintptr_t* TensExponentTable, uintptr_t* DigitLowerTable, uintptr_t* DigitUpperTable, uintptr_t* TenPowersList, uintptr_t* DecHexDigits) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4555A78))(0, MantissaBitsTable, TensExponentTable, DigitLowerTable, DigitUpperTable, TenPowersList, DecHexDigits);
	}
	template <typename T = int64_t> static T GetTenPowerOf(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4555AB0))(0, i);
	}
	template <typename T = void> T InitDecHexDigits(uint32_t value) {
		return ((T (*)(NumberFormatter*, uint32_t))(Il2CppBase() + 0x4555B6C))(this, value);
	}
	template <typename T = void> T InitDecHexDigits_1(uint64_t value) {
		return ((T (*)(NumberFormatter*, uint64_t))(Il2CppBase() + 0x4555EC8))(this, value);
	}
	template <typename T = void> T InitDecHexDigits_2(uint32_t hi, uint64_t lo) {
		return ((T (*)(NumberFormatter*, uint32_t, uint64_t))(Il2CppBase() + 0x45560D8))(this, hi, lo);
	}
	template <typename T = uint32_t> static T FastToDecHex(int32_t val) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4555C80))(0, val);
	}
	template <typename T = uint32_t> static T ToDecHex(int32_t val) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4555DB4))(0, val);
	}
	template <typename T = int32_t> static T FastDecHexLen(int32_t val) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4556418))(0, val);
	}
	template <typename T = int32_t> static T DecHexLen(uint32_t val) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4556440))(0, val);
	}
	template <typename T = int32_t> T DecHexLen_1() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x455655C))(this);
	}
	template <typename T = int32_t> static T ScaleOrder(int64_t hi) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x45566FC))(0, hi);
	}
	template <typename T = int32_t> T InitialFloatingPrecision() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x45567E0))(this);
	}
	template <typename T = int32_t> static T ParsePrecision(Il2CppString* format) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4556838))(0, format);
	}
	template <typename T = void> T Init(Il2CppString* format) {
		return ((T (*)(NumberFormatter*, Il2CppString*))(Il2CppBase() + 0x45568C0))(this, format);
	}
	template <typename T = void> T InitHex(uint64_t value) {
		return ((T (*)(NumberFormatter*, uint64_t))(Il2CppBase() + 0x4556A4C))(this, value);
	}
	template <typename T = void> T Init_1(Il2CppString* format, int32_t value, int32_t defPrecision) {
		return ((T (*)(NumberFormatter*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4556AB0))(this, format, value, defPrecision);
	}
	template <typename T = void> T Init_2(Il2CppString* format, uint32_t value, int32_t defPrecision) {
		return ((T (*)(NumberFormatter*, Il2CppString*, uint32_t, int32_t))(Il2CppBase() + 0x4556B30))(this, format, value, defPrecision);
	}
	template <typename T = void> T Init_3(Il2CppString* format, int64_t value) {
		return ((T (*)(NumberFormatter*, Il2CppString*, int64_t))(Il2CppBase() + 0x4556BA4))(this, format, value);
	}
	template <typename T = void> T Init_4(Il2CppString* format, uint64_t value) {
		return ((T (*)(NumberFormatter*, Il2CppString*, uint64_t))(Il2CppBase() + 0x4556C2C))(this, format, value);
	}
	template <typename T = void> T Init_5(Il2CppString* format, double value, int32_t defPrecision) {
		return ((T (*)(NumberFormatter*, Il2CppString*, double, int32_t))(Il2CppBase() + 0x4556CA8))(this, format, value, defPrecision);
	}
	template <typename T = void> T Init_6(Il2CppString* format, uintptr_t value) {
		return ((T (*)(NumberFormatter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45572AC))(this, format, value);
	}
	template <typename T = void> T ResetCharBuf(int32_t size) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x4557520))(this, size);
	}
	template <typename T = void> T Resize(int32_t len) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x45575E4))(this, len);
	}
	template <typename T = void> T Append(char c) {
		return ((T (*)(NumberFormatter*, char))(Il2CppBase() + 0x45576A4))(this, c);
	}
	template <typename T = void> T Append_1(char c, int32_t cnt) {
		return ((T (*)(NumberFormatter*, char, int32_t))(Il2CppBase() + 0x4557728))(this, c, cnt);
	}
	template <typename T = void> T Append_2(Il2CppString* s) {
		return ((T (*)(NumberFormatter*, Il2CppString*))(Il2CppBase() + 0x45577C4))(this, s);
	}
	template <typename T = uintptr_t> T GetNumberFormatInstance(uintptr_t fp) {
		return ((T (*)(NumberFormatter*, uintptr_t))(Il2CppBase() + 0x4557890))(this, fp);
	}
	template <typename T = void> T set_CurrentCulture(uintptr_t value) {
		return ((T (*)(NumberFormatter*, uintptr_t))(Il2CppBase() + 0x4555984))(this, value);
	}
	template <typename T = int32_t> T get_IntegerDigits() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557950))(this);
	}
	template <typename T = int32_t> T get_DecimalDigits() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557960))(this);
	}
	template <typename T = bool> T get_IsFloatingSource() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557974))(this);
	}
	template <typename T = bool> T get_IsZero() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x455798C))(this);
	}
	template <typename T = bool> T get_IsZeroInteger() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x45579A0))(this);
	}
	template <typename T = void> T RoundPos(int32_t pos) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x45579C8))(this, pos);
	}
	template <typename T = bool> T RoundDecimal(int32_t decimals) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x4557B20))(this, decimals);
	}
	template <typename T = bool> T RoundBits(int32_t shift) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x45579D4))(this, shift);
	}
	template <typename T = void> T RemoveTrailingZeros() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557CE8))(this);
	}
	template <typename T = void> T AddOneToDecHex() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557B34))(this);
	}
	template <typename T = uint32_t> static T AddOneToDecHex_1(uint32_t val) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4557D24))(0, val);
	}
	template <typename T = int32_t> T CountTrailingZeros() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557108))(this);
	}
	template <typename T = int32_t> static T CountTrailingZeros_1(uint32_t val) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4557DE4))(0, val);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4557E54))(0);
	}
	template <typename T = void> T Release() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x4557FA4))(this);
	}
	template <typename T = void> static T SetThreadCurrentCulture(uintptr_t culture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x455805C))(0, culture);
	}
	template <typename T = Il2CppString*> static T NumberToString(Il2CppString* format, signed char value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, signed char, uintptr_t))(Il2CppBase() + 0x4558188))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_1(Il2CppString* format, unsigned char value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, unsigned char, uintptr_t))(Il2CppBase() + 0x455851C))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_2(Il2CppString* format, uint16_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, uint16_t, uintptr_t))(Il2CppBase() + 0x4558614))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_3(Il2CppString* format, int16_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, int16_t, uintptr_t))(Il2CppBase() + 0x455870C))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_4(Il2CppString* format, uint32_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uintptr_t))(Il2CppBase() + 0x4558804))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_5(Il2CppString* format, int32_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x45588FC))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_6(Il2CppString* format, uint64_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uintptr_t))(Il2CppBase() + 0x45589F4))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_7(Il2CppString* format, int64_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, int64_t, uintptr_t))(Il2CppBase() + 0x4558AF0))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_8(Il2CppString* format, float value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x4558BEC))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_9(Il2CppString* format, double value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, double, uintptr_t))(Il2CppBase() + 0x4559050))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_10(Il2CppString* format, uintptr_t value, uintptr_t fp) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45592B0))(0, format, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_11(uint32_t value, uintptr_t fp) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x45593C8))(0, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_12(int32_t value, uintptr_t fp) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x45595F0))(0, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_13(uint64_t value, uintptr_t fp) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x4559728))(0, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_14(int64_t value, uintptr_t fp) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0x4559870))(0, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_15(float value, uintptr_t fp) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x45599C8))(0, value, fp);
	}
	template <typename T = Il2CppString*> static T NumberToString_16(double value, uintptr_t fp) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x4559CC0))(0, value, fp);
	}
	template <typename T = Il2CppString*> T FastIntegerToString(int32_t value, uintptr_t fp) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x45594F4))(this, value, fp);
	}
	template <typename T = Il2CppString*> T IntegerToString(Il2CppString* format, uintptr_t fp) {
		return ((T (*)(NumberFormatter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4558280))(this, format, fp);
	}
	template <typename T = Il2CppString*> T NumberToString_17(Il2CppString* format, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4558E08))(this, format, nfi);
	}
	template <typename T = Il2CppString*> T FormatCurrency(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455A104))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatDecimal(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455A4E0))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatHexadecimal(int32_t precision) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x455AB60))(this, precision);
	}
	template <typename T = Il2CppString*> T FormatFixedPoint(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455A648))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatRoundtrip(double origval, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, double, uintptr_t))(Il2CppBase() + 0x45591E8))(this, origval, nfi);
	}
	template <typename T = Il2CppString*> T FormatRoundtrip_1(float origval, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, float, uintptr_t))(Il2CppBase() + 0x4558D7C))(this, origval, nfi);
	}
	template <typename T = Il2CppString*> T FormatGeneral(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x4559B38))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatNumber(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455A768))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatPercent(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455A964))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatExponential(int32_t precision, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455A5F8))(this, precision, nfi);
	}
	template <typename T = Il2CppString*> T FormatExponential_1(int32_t precision, uintptr_t nfi, int32_t expDigits) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x455BBB4))(this, precision, nfi, expDigits);
	}
	template <typename T = Il2CppString*> T FormatCustom(Il2CppString* format, uintptr_t nfi) {
		return ((T (*)(NumberFormatter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455AD64))(this, format, nfi);
	}
	template <typename T = void> static T ZeroTrimEnd(uintptr_t sb, bool canEmpty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x455CD3C))(0, sb, canEmpty);
	}
	template <typename T = bool> static T IsZeroOnly(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x455CC20))(0, sb);
	}
	template <typename T = void> static T AppendNonNegativeNumber(uintptr_t sb, int32_t v) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x455C9D8))(0, sb, v);
	}
	template <typename T = void> T AppendIntegerString(int32_t minLength, uintptr_t sb) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455CB58))(this, minLength, sb);
	}
	template <typename T = void> T AppendIntegerString_1(int32_t minLength) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x455B9E0))(this, minLength);
	}
	template <typename T = void> T AppendDecimalString(int32_t precision, uintptr_t sb) {
		return ((T (*)(NumberFormatter*, int32_t, uintptr_t))(Il2CppBase() + 0x455CBEC))(this, precision, sb);
	}
	template <typename T = void> T AppendDecimalString_1(int32_t precision) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x455B688))(this, precision);
	}
	template <typename T = void> T AppendIntegerStringWithGroupSeparator(Il2CppArray<uintptr_t>* groups, Il2CppString* groupSeparator) {
		return ((T (*)(NumberFormatter*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x455B418))(this, groups, groupSeparator);
	}
	template <typename T = void> T AppendExponent(uintptr_t nfi, int32_t exponent, int32_t minDigits) {
		return ((T (*)(NumberFormatter*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x455BDA4))(this, nfi, exponent, minDigits);
	}
	template <typename T = void> T AppendOneDigit(int32_t start) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x455BCC8))(this, start);
	}
	template <typename T = void> T FastAppendDigits(int32_t val, bool force) {
		return ((T (*)(NumberFormatter*, int32_t, bool))(Il2CppBase() + 0x4559E30))(this, val, force);
	}
	template <typename T = void> T AppendDigits(int32_t start, int32_t end) {
		return ((T (*)(NumberFormatter*, int32_t, int32_t))(Il2CppBase() + 0x455B6A0))(this, start, end);
	}
	template <typename T = void> T AppendDigits_1(int32_t start, int32_t end, uintptr_t sb) {
		return ((T (*)(NumberFormatter*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x455D7D4))(this, start, end, sb);
	}
	template <typename T = void> T Multiply10(int32_t count) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x455BCA8))(this, count);
	}
	template <typename T = void> T Divide10(int32_t count) {
		return ((T (*)(NumberFormatter*, int32_t))(Il2CppBase() + 0x455C9B8))(this, count);
	}
	template <typename T = uintptr_t> T GetClone() {
		return ((T (*)(NumberFormatter*))(Il2CppBase() + 0x455BA3C))(this);
	}

};

}
