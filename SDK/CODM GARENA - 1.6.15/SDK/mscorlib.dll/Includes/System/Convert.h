#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Convert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Convert"));
	}

	template <typename T = uintptr_t> static T& DBNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& conversionTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T InternalFromBase64String(Il2CppString* str, bool allowWhitespaceOnly) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3645FD4))(0, str, allowWhitespaceOnly);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T InternalFromBase64CharArray(Il2CppArray<uintptr_t>* arr, int32_t offset, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3645FE0))(0, arr, offset, length);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromBase64CharArray(Il2CppArray<uintptr_t>* inArray, int32_t offset, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3645FF0))(0, inArray, offset, length);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromBase64String(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x36461AC))(0, s);
	}
	template <typename T = int32_t> static T ToBase64CharArray(Il2CppArray<uintptr_t>* inArray, int32_t offsetIn, int32_t length, Il2CppArray<uintptr_t>* outArray, int32_t offsetOut) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x36462EC))(0, inArray, offsetIn, length, outArray, offsetOut);
	}
	template <typename T = Il2CppString*> static T ToBase64String(Il2CppArray<uintptr_t>* inArray) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3646558))(0, inArray);
	}
	template <typename T = Il2CppString*> static T ToBase64String_1(Il2CppArray<uintptr_t>* inArray, int32_t offset, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x364665C))(0, inArray, offset, length);
	}
	template <typename T = bool> static T ToBoolean(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362CEB0))(0, value);
	}
	template <typename T = bool> static T ToBoolean_1(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3646820))(0, value);
	}
	template <typename T = bool> static T ToBoolean_2(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3646A0C))(0, value);
	}
	template <typename T = bool> static T ToBoolean_3(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3646A24))(0, value);
	}
	template <typename T = bool> static T ToBoolean_4(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3646A3C))(0, value);
	}
	template <typename T = bool> static T ToBoolean_5(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3646A4C))(0, value);
	}
	template <typename T = bool> static T ToBoolean_6(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x3646A58))(0, value);
	}
	template <typename T = bool> static T ToBoolean_7(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3646A68))(0, value);
	}
	template <typename T = bool> static T ToBoolean_8(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3646A78))(0, value);
	}
	template <typename T = bool> static T ToBoolean_9(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3646B24))(0, value, provider);
	}
	template <typename T = bool> static T ToBoolean_10(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3646BD0))(0, value);
	}
	template <typename T = bool> static T ToBoolean_11(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3646BE0))(0, value);
	}
	template <typename T = bool> static T ToBoolean_12(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3646BEC))(0, value);
	}
	template <typename T = bool> static T ToBoolean_13(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3646BFC))(0, value);
	}
	template <typename T = bool> static T ToBoolean_14(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3646CAC))(0, value, provider);
	}
	template <typename T = unsigned char> static T ToByte(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362B4C0))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_1(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362E284))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3646DE0))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_3(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x36472C8))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_4(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3647520))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_5(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3647704))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_6(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x36477CC))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_7(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x36478B0))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_8(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3647978))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_9(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3647A44))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3647A70))(0, value, provider);
	}
	template <typename T = unsigned char> static T ToByte_11(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3647A98))(0, value, fromBase);
	}
	template <typename T = unsigned char> static T ToByte_12(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3648228))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_13(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x36482F0))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_14(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x36483D4))(0, value);
	}
	template <typename T = unsigned char> static T ToByte_15(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364849C))(0, value, provider);
	}
	template <typename T = char> static T ToChar(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362CF6C))(0, value);
	}
	template <typename T = char> static T ToChar_1(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x36485D0))(0, value);
	}
	template <typename T = char> static T ToChar_2(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3648698))(0, value);
	}
	template <typename T = char> static T ToChar_3(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364877C))(0, value);
	}
	template <typename T = char> static T ToChar_4(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x3648824))(0, value);
	}
	template <typename T = char> static T ToChar_5(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x36488EC))(0, value);
	}
	template <typename T = char> static T ToChar_6(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x36489B4))(0, value, provider);
	}
	template <typename T = char> static T ToChar_7(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3648A54))(0, value);
	}
	template <typename T = char> static T ToChar_8(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3648B1C))(0, value);
	}
	template <typename T = char> static T ToChar_9(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3648C00))(0, value);
	}
	template <typename T = char> static T ToChar_10(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3648C08))(0, value, provider);
	}
	template <typename T = uintptr_t> static T ToDateTime(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3648D3C))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_1(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3648EE8))(0, value, provider);
	}
	template <typename T = uintptr_t> static T ToDateTime_2(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x36490B4))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_3(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364915C))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_4(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3649204))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x36492AC))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_6(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3649354))(0, value, provider);
	}
	template <typename T = uintptr_t> static T ToDateTime_7(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x36494EC))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_8(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3649594))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_9(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364963C))(0, value);
	}
	template <typename T = uintptr_t> static T ToDateTime_10(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x36496E4))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362B6C8))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D0C8))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_2(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x36497CC))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_3(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x36498AC))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_4(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3649978))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_5(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3649A40))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_6(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x3649B4C))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_7(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3649C44))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_8(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3649D3C))(0, value, provider);
	}
	template <typename T = uintptr_t> static T ToDecimal_9(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3649EC8))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_10(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3649F9C))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_11(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364A064))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_12(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364A11C))(0, value);
	}
	template <typename T = uintptr_t> static T ToDecimal_13(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364A1E8))(0, value, provider);
	}
	template <typename T = double> static T ToDouble(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362B834))(0, value);
	}
	template <typename T = double> static T ToDouble_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D22C))(0, value);
	}
	template <typename T = double> static T ToDouble_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364A32C))(0, value);
	}
	template <typename T = double> static T ToDouble_3(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364A49C))(0, value);
	}
	template <typename T = double> static T ToDouble_4(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364A4A8))(0, value);
	}
	template <typename T = double> static T ToDouble_5(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364A4B8))(0, value);
	}
	template <typename T = double> static T ToDouble_6(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364A4C8))(0, value);
	}
	template <typename T = double> static T ToDouble_7(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x364A4E0))(0, value);
	}
	template <typename T = double> static T ToDouble_8(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364A4F0))(0, value);
	}
	template <typename T = double> static T ToDouble_9(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x364A500))(0, value);
	}
	template <typename T = double> static T ToDouble_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364A558))(0, value, provider);
	}
	template <typename T = double> static T ToDouble_11(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364A5B8))(0, value);
	}
	template <typename T = double> static T ToDouble_12(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364A5C8))(0, value);
	}
	template <typename T = double> static T ToDouble_13(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364A5E0))(0, value);
	}
	template <typename T = double> static T ToDouble_14(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364A5F0))(0, value);
	}
	template <typename T = double> static T ToDouble_15(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364A6A8))(0, value, provider);
	}
	template <typename T = int16_t> static T ToInt16(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362B8F8))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D2E0))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362E5E8))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364A7E4))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364AAF8))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364ACAC))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364AE4C))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364AF18))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_8(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x364B004))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_9(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364B00C))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364B014))(0, value, provider);
	}
	template <typename T = int16_t> static T ToInt16_11(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x364B038))(0, value, fromBase);
	}
	template <typename T = int16_t> static T ToInt16_12(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364B1C8))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_13(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364B290))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_14(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364B374))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_15(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364B43C))(0, value);
	}
	template <typename T = int16_t> static T ToInt16_16(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364B4EC))(0, value, provider);
	}
	template <typename T = int32_t> static T ToInt32(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362B9AC))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D38C))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362E754))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364B620))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364B928))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364BB10))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364BCEC))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364BCF4))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_8(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x364BDC4))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_9(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364BDCC))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_10(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x364BDD4))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_11(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364BDE8))(0, value, provider);
	}
	template <typename T = int32_t> static T ToInt32_12(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x364BDFC))(0, value, fromBase);
	}
	template <typename T = int32_t> static T ToInt32_13(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364BEB0))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_14(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364BF78))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_15(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364C05C))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_16(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364C064))(0, value);
	}
	template <typename T = int32_t> static T ToInt32_17(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364C118))(0, value, provider);
	}
	template <typename T = int64_t> static T ToInt64(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362BA64))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D43C))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362E804))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364C250))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364C698))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364C84C))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364C9EC))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364C9FC))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_8(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x364CA08))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_9(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364CA18))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_10(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x364CA28))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_11(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364CA40))(0, value, provider);
	}
	template <typename T = int64_t> static T ToInt64_12(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x364CA58))(0, value, fromBase);
	}
	template <typename T = int64_t> static T ToInt64_13(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364D1B4))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_14(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364D1C0))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_15(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364D290))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_16(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364D29C))(0, value);
	}
	template <typename T = int64_t> static T ToInt64_17(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364D354))(0, value, provider);
	}
	template <typename T = signed char> static T ToSByte(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362BB1C))(0, value);
	}
	template <typename T = signed char> static T ToSByte_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D4F0))(0, value);
	}
	template <typename T = signed char> static T ToSByte_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362E8B8))(0, value);
	}
	template <typename T = signed char> static T ToSByte_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364D490))(0, value);
	}
	template <typename T = signed char> static T ToSByte_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364D7A0))(0, value);
	}
	template <typename T = signed char> static T ToSByte_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364D954))(0, value);
	}
	template <typename T = signed char> static T ToSByte_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364DAF4))(0, value);
	}
	template <typename T = signed char> static T ToSByte_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364DBC0))(0, value);
	}
	template <typename T = signed char> static T ToSByte_8(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364DCAC))(0, value);
	}
	template <typename T = signed char> static T ToSByte_9(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364DD7C))(0, value, provider);
	}
	template <typename T = signed char> static T ToSByte_10(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x364DE48))(0, value, fromBase);
	}
	template <typename T = signed char> static T ToSByte_11(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364DF74))(0, value);
	}
	template <typename T = signed char> static T ToSByte_12(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364E03C))(0, value);
	}
	template <typename T = signed char> static T ToSByte_13(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364E120))(0, value);
	}
	template <typename T = signed char> static T ToSByte_14(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364E1E8))(0, value, provider);
	}
	template <typename T = float> static T ToSingle(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362BBE0))(0, value);
	}
	template <typename T = float> static T ToSingle_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D668))(0, value);
	}
	template <typename T = float> static T ToSingle_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364E31C))(0, value);
	}
	template <typename T = float> static T ToSingle_3(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364E4A8))(0, value);
	}
	template <typename T = float> static T ToSingle_4(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364E4B8))(0, value);
	}
	template <typename T = float> static T ToSingle_5(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364E4C0))(0, value);
	}
	template <typename T = float> static T ToSingle_6(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364E4D0))(0, value);
	}
	template <typename T = float> static T ToSingle_7(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x364E4E8))(0, value);
	}
	template <typename T = float> static T ToSingle_8(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364E4F8))(0, value);
	}
	template <typename T = float> static T ToSingle_9(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x364E508))(0, value);
	}
	template <typename T = float> static T ToSingle_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364E51C))(0, value, provider);
	}
	template <typename T = float> static T ToSingle_11(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x364E530))(0, value);
	}
	template <typename T = float> static T ToSingle_12(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x364E544))(0, value);
	}
	template <typename T = float> static T ToSingle_13(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x364E568))(0, value);
	}
	template <typename T = float> static T ToSingle_14(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364E578))(0, value);
	}
	template <typename T = float> static T ToSingle_15(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364E62C))(0, value, provider);
	}
	template <typename T = Il2CppString*> static T ToString(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x364E764))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_1(unsigned char value, int32_t toBase) {
		return ((T (*)(void *, unsigned char, int32_t))(Il2CppBase() + 0x364E784))(0, value, toBase);
	}
	template <typename T = Il2CppString*> static T ToString_2(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364F0CC))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_3(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364F0F0))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_4(int32_t value, int32_t toBase) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x364F114))(0, value, toBase);
	}
	template <typename T = Il2CppString*> static T ToString_5(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364F360))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_6(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364F380))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_7(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x364F424))(0, value, provider);
	}
	template <typename T = uint16_t> static T ToUInt16(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362BCA8))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D71C))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362EAC8))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x364F5E8))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x364F8F0))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x364FA94))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x364FC2C))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x364FCF4))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_8(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x364FDD8))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_9(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x364FEA0))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x364FF68))(0, value, provider);
	}
	template <typename T = uint16_t> static T ToUInt16_11(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x364FF8C))(0, value, fromBase);
	}
	template <typename T = uint16_t> static T ToUInt16_12(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3650048))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_13(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3650110))(0, value);
	}
	template <typename T = uint16_t> static T ToUInt16_14(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36501F4))(0, value, provider);
	}
	template <typename T = uint32_t> static T ToUInt32(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362BD5C))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D7C8))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362EB74))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3650328))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3650660))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3650804))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x365099C))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3650A64))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_8(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x3650B30))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_9(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3650BF8))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3650CC0))(0, value, provider);
	}
	template <typename T = uint32_t> static T ToUInt32_11(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3650CD4))(0, value, fromBase);
	}
	template <typename T = uint32_t> static T ToUInt32_12(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3650D88))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_13(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3650D90))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_14(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3650E5C))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_15(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3650E64))(0, value);
	}
	template <typename T = uint32_t> static T ToUInt32_16(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3650F18))(0, value, provider);
	}
	template <typename T = uint64_t> static T ToUInt64(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x362BE14))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_1(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x362D878))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_2(char value) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x362EC24))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3651050))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3651358))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x36514FC))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_6(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3651694))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_7(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3651760))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_8(signed char value) {
		return ((T (*)(void *, signed char))(Il2CppBase() + 0x3651830))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_9(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x36518EC))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_10(Il2CppString* value, uintptr_t provider) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x36519B8))(0, value, provider);
	}
	template <typename T = uint64_t> static T ToUInt64_11(Il2CppString* value, int32_t fromBase) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x36519D0))(0, value, fromBase);
	}
	template <typename T = uint64_t> static T ToUInt64_12(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3651A84))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_13(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x3651A90))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_14(uint16_t value) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x3651A9C))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_15(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3651AA8))(0, value);
	}
	template <typename T = uint64_t> static T ToUInt64_16(uintptr_t value, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3651B60))(0, value, provider);
	}
	template <typename T = uintptr_t> static T ChangeType(uintptr_t value, uintptr_t conversionType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3651C9C))(0, value, conversionType);
	}
	template <typename T = uintptr_t> static T ChangeType_1(uintptr_t value, uintptr_t conversionType, uintptr_t provider) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3651E9C))(0, value, conversionType, provider);
	}
	template <typename T = bool> static T NotValidBase(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3651FB8))(0, value);
	}
	template <typename T = int32_t> static T ConvertFromBase(Il2CppString* value, int32_t fromBase, bool unsigned) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x3647B90))(0, value, fromBase, unsigned);
	}
	template <typename T = int64_t> static T ConvertFromBase64(Il2CppString* value, int32_t fromBase, bool unsigned) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x364CB0C))(0, value, fromBase, unsigned);
	}
	template <typename T = void> static T EndianSwap(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3651FDC))(0, value);
	}
	template <typename T = Il2CppString*> static T ConvertToBase2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x364E9CC))(0, value);
	}
	template <typename T = Il2CppString*> static T ConvertToBase8(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x364EBB8))(0, value);
	}
	template <typename T = Il2CppString*> static T ConvertToBase16(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x364EE6C))(0, value);
	}
	template <typename T = uintptr_t> static T ToType(uintptr_t value, uintptr_t conversionType, uintptr_t provider, bool try_target_to_type) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3629E8C))(0, value, conversionType, provider, try_target_to_type);
	}

};

}
