#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class String
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "String"));
	}

	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = char> T& start_char() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& WhiteChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T System_IConvertible_ToBoolean(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4289CE0))(this, provider);
	}
	template <typename T = unsigned char> T System_IConvertible_ToByte(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4289D90))(this, provider);
	}
	template <typename T = char> T System_IConvertible_ToChar(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4289E40))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDateTime(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4289EF0))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToDecimal(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4289FB4))(this, provider);
	}
	template <typename T = double> T System_IConvertible_ToDouble(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A078))(this, provider);
	}
	template <typename T = int16_t> T System_IConvertible_ToInt16(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A128))(this, provider);
	}
	template <typename T = int32_t> T System_IConvertible_ToInt32(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A1D8))(this, provider);
	}
	template <typename T = int64_t> T System_IConvertible_ToInt64(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A288))(this, provider);
	}
	template <typename T = signed char> T System_IConvertible_ToSByte(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A338))(this, provider);
	}
	template <typename T = float> T System_IConvertible_ToSingle(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A3E8))(this, provider);
	}
	template <typename T = uintptr_t> T System_IConvertible_ToType(uintptr_t targetType, uintptr_t provider) {
		return ((T (*)(String*, uintptr_t, uintptr_t))(Il2CppBase() + 0x428A498))(this, targetType, provider);
	}
	template <typename T = uint16_t> T System_IConvertible_ToUInt16(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A5B8))(this, provider);
	}
	template <typename T = uint32_t> T System_IConvertible_ToUInt32(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A668))(this, provider);
	}
	template <typename T = uint64_t> T System_IConvertible_ToUInt64(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A718))(this, provider);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerablechar_GetEnumerator() {
		return ((T (*)(String*))(Il2CppBase() + 0x428A7C8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(String*))(Il2CppBase() + 0x428A85C))(this);
	}
	template <typename T = bool> static T Equals(Il2CppString* a, Il2CppString* b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x428A8F0))(0, a, b);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428A9FC))(this, obj);
	}
	template <typename T = bool> T Equals_2(Il2CppString* value) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x428AAD0))(this, value);
	}
	template <typename T = char> T get_Chars(int32_t index) {
		return ((T (*)(String*, int32_t))(Il2CppBase() + 0x4284FC4))(this, index);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(String*))(Il2CppBase() + 0x428AB78))(this);
	}
	template <typename T = uintptr_t> T GetTypeCode() {
		return ((T (*)(String*))(Il2CppBase() + 0x428AB7C))(this);
	}
	template <typename T = void> T CopyTo(int32_t sourceIndex, Il2CppArray<uintptr_t>* destination, int32_t destinationIndex, int32_t count) {
		return ((T (*)(String*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x428AB84))(this, sourceIndex, destination, destinationIndex, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToCharArray() {
		return ((T (*)(String*))(Il2CppBase() + 0x428AF3C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToCharArray_1(int32_t startIndex, int32_t length) {
		return ((T (*)(String*, int32_t, int32_t))(Il2CppBase() + 0x428AF48))(this, startIndex, length);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split(Il2CppArray<uintptr_t>* separator) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x428B140))(this, separator);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split_1(Il2CppArray<uintptr_t>* separator, int32_t count) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x428B148))(this, separator, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split_2(Il2CppArray<uintptr_t>* separator, int32_t count, uintptr_t options) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x428B354))(this, separator, count, options);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split_3(Il2CppArray<uintptr_t>* separator, int32_t count, uintptr_t options) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x428B7D4))(this, separator, count, options);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split_4(Il2CppArray<uintptr_t>* separator, uintptr_t options) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x428BE90))(this, separator, options);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split_5(Il2CppArray<uintptr_t>* separator, uintptr_t options) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x428BEB0))(this, separator, options);
	}
	template <typename T = Il2CppString*> T Substring(int32_t startIndex) {
		return ((T (*)(String*, int32_t))(Il2CppBase() + 0x428710C))(this, startIndex);
	}
	template <typename T = Il2CppString*> T Substring_1(int32_t startIndex, int32_t length) {
		return ((T (*)(String*, int32_t, int32_t))(Il2CppBase() + 0x427F5B8))(this, startIndex, length);
	}
	template <typename T = Il2CppString*> T SubstringUnchecked(int32_t startIndex, int32_t length) {
		return ((T (*)(String*, int32_t, int32_t))(Il2CppBase() + 0x428BED0))(this, startIndex, length);
	}
	template <typename T = Il2CppString*> T Trim() {
		return ((T (*)(String*))(Il2CppBase() + 0x428C008))(this);
	}
	template <typename T = Il2CppString*> T Trim_1(Il2CppArray<uintptr_t>* trimChars) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x428C28C))(this, trimChars);
	}
	template <typename T = Il2CppString*> T TrimStart(Il2CppArray<uintptr_t>* trimChars) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x428C4E4))(this, trimChars);
	}
	template <typename T = Il2CppString*> T TrimEnd(Il2CppArray<uintptr_t>* trimChars) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x428C614))(this, trimChars);
	}
	template <typename T = int32_t> T FindNotWhiteSpace(int32_t pos, int32_t target, int32_t change) {
		return ((T (*)(String*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x428C178))(this, pos, target, change);
	}
	template <typename T = int32_t> T FindNotInTable(int32_t pos, int32_t target, int32_t change, Il2CppArray<uintptr_t>* table) {
		return ((T (*)(String*, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x428C428))(this, pos, target, change, table);
	}
	template <typename T = int32_t> static T Compare(Il2CppString* strA, Il2CppString* strB) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x428C74C))(0, strA, strB);
	}
	template <typename T = int32_t> static T Compare_1(Il2CppString* strA, Il2CppString* strB, bool ignoreCase) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x428C848))(0, strA, strB, ignoreCase);
	}
	template <typename T = int32_t> static T Compare_2(Il2CppString* strA, Il2CppString* strB, bool ignoreCase, uintptr_t culture) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x428C948))(0, strA, strB, ignoreCase, culture);
	}
	template <typename T = int32_t> static T Compare_3(Il2CppString* strA, int32_t indexA, Il2CppString* strB, int32_t indexB, int32_t length, bool ignoreCase) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t, int32_t, bool))(Il2CppBase() + 0x428CA5C))(0, strA, indexA, strB, indexB, length, ignoreCase);
	}
	template <typename T = int32_t> static T Compare_4(Il2CppString* strA, int32_t indexA, Il2CppString* strB, int32_t indexB, int32_t length, bool ignoreCase, uintptr_t culture) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x428CB78))(0, strA, indexA, strB, indexB, length, ignoreCase, culture);
	}
	template <typename T = int32_t> static T Compare_5(Il2CppString* strA, Il2CppString* strB, uintptr_t comparisonType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x428CD3C))(0, strA, strB, comparisonType);
	}
	template <typename T = bool> static T Equals_3(Il2CppString* a, Il2CppString* b, uintptr_t comparisonType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x428D4A4))(0, a, b, comparisonType);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x428D56C))(this, value);
	}
	template <typename T = int32_t> T CompareTo_1(Il2CppString* strB) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x428D768))(this, strB);
	}
	template <typename T = int32_t> static T CompareOrdinal(Il2CppString* strA, Il2CppString* strB) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x428D820))(0, strA, strB);
	}
	template <typename T = int32_t> static T CompareOrdinal_1(Il2CppString* strA, int32_t indexA, Il2CppString* strB, int32_t indexB, int32_t length) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428D8E8))(0, strA, indexA, strB, indexB, length);
	}
	template <typename T = int32_t> static T CompareOrdinalUnchecked(Il2CppString* strA, int32_t indexA, int32_t lenA, Il2CppString* strB, int32_t indexB, int32_t lenB) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428D18C))(0, strA, indexA, lenA, strB, indexB, lenB);
	}
	template <typename T = int32_t> static T CompareOrdinalCaseInsensitiveUnchecked(Il2CppString* strA, int32_t indexA, int32_t lenA, Il2CppString* strB, int32_t indexB, int32_t lenB) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428D2BC))(0, strA, indexA, lenA, strB, indexB, lenB);
	}
	template <typename T = bool> T EndsWith(Il2CppString* value) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x428DA28))(this, value);
	}
	template <typename T = int32_t> T IndexOfAny(Il2CppArray<uintptr_t>* anyOf) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4284EEC))(this, anyOf);
	}
	template <typename T = int32_t> T IndexOfAny_1(Il2CppArray<uintptr_t>* anyOf, int32_t startIndex) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x428DC84))(this, anyOf, startIndex);
	}
	template <typename T = int32_t> T IndexOfAny_2(Il2CppArray<uintptr_t>* anyOf, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x428DD8C))(this, anyOf, startIndex, count);
	}
	template <typename T = int32_t> T IndexOfAnyUnchecked(Il2CppArray<uintptr_t>* anyOf, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x428DB7C))(this, anyOf, startIndex, count);
	}
	template <typename T = int32_t> T IndexOf(Il2CppString* value, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x428E09C))(this, value, comparisonType);
	}
	template <typename T = int32_t> T IndexOf_1(Il2CppString* value, int32_t startIndex, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x428E440))(this, value, startIndex, comparisonType);
	}
	template <typename T = int32_t> T IndexOf_2(Il2CppString* value, int32_t startIndex, int32_t count, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x428E0C0))(this, value, startIndex, count, comparisonType);
	}
	template <typename T = int32_t> T IndexOfOrdinal(Il2CppString* value, int32_t startIndex, int32_t count, uintptr_t options) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x428E464))(this, value, startIndex, count, options);
	}
	template <typename T = int32_t> T IndexOfOrdinalUnchecked(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428E5F8))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T IndexOfOrdinalIgnoreCaseUnchecked(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428E71C))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOf(Il2CppString* value, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x428E8C4))(this, value, comparisonType);
	}
	template <typename T = int32_t> T LastIndexOf_1(Il2CppString* value, int32_t startIndex, int32_t count, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x428E9C0))(this, value, startIndex, count, comparisonType);
	}
	template <typename T = int32_t> T LastIndexOfOrdinal(Il2CppString* value, int32_t startIndex, int32_t count, uintptr_t options) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x428ED40))(this, value, startIndex, count, options);
	}
	template <typename T = int32_t> T LastIndexOfOrdinalUnchecked(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428EEDC))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOfOrdinalIgnoreCaseUnchecked(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428F020))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T IndexOf_3(char value) {
		return ((T (*)(String*, char))(Il2CppBase() + 0x428F384))(this, value);
	}
	template <typename T = int32_t> T IndexOf_4(char value, int32_t startIndex) {
		return ((T (*)(String*, char, int32_t))(Il2CppBase() + 0x428F3B8))(this, value, startIndex);
	}
	template <typename T = int32_t> T IndexOf_5(char value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, char, int32_t, int32_t))(Il2CppBase() + 0x428F4F4))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T IndexOfUnchecked(char value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, char, int32_t, int32_t))(Il2CppBase() + 0x428DEF8))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T IndexOf_6(Il2CppString* value) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x4286F8C))(this, value);
	}
	template <typename T = int32_t> T IndexOf_7(Il2CppString* value, int32_t startIndex) {
		return ((T (*)(String*, Il2CppString*, int32_t))(Il2CppBase() + 0x428BE70))(this, value, startIndex);
	}
	template <typename T = int32_t> T IndexOf_8(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428F680))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOfAny(Il2CppArray<uintptr_t>* anyOf) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x428F8C4))(this, anyOf);
	}
	template <typename T = int32_t> T LastIndexOfAny_1(Il2CppArray<uintptr_t>* anyOf, int32_t startIndex) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x428FA7C))(this, anyOf, startIndex);
	}
	template <typename T = int32_t> T LastIndexOfAnyUnchecked(Il2CppArray<uintptr_t>* anyOf, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x428F988))(this, anyOf, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOf_2(char value) {
		return ((T (*)(String*, char))(Il2CppBase() + 0x428FBBC))(this, value);
	}
	template <typename T = int32_t> T LastIndexOf_3(char value, int32_t startIndex) {
		return ((T (*)(String*, char, int32_t))(Il2CppBase() + 0x428FBF0))(this, value, startIndex);
	}
	template <typename T = int32_t> T LastIndexOf_4(char value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, char, int32_t, int32_t))(Il2CppBase() + 0x428FC0C))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOfUnchecked(char value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, char, int32_t, int32_t))(Il2CppBase() + 0x428F1D4))(this, value, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOf_5(Il2CppString* value) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x428FDB8))(this, value);
	}
	template <typename T = int32_t> T LastIndexOf_6(Il2CppString* value, int32_t startIndex) {
		return ((T (*)(String*, Il2CppString*, int32_t))(Il2CppBase() + 0x4290088))(this, value, startIndex);
	}
	template <typename T = int32_t> T LastIndexOf_7(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(String*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x428FDEC))(this, value, startIndex, count);
	}
	template <typename T = bool> T Contains(Il2CppString* value) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x42900B0))(this, value);
	}
	template <typename T = bool> static T IsNullOrEmpty(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42900D0))(0, value);
	}
	template <typename T = Il2CppString*> T Remove(int32_t startIndex) {
		return ((T (*)(String*, int32_t))(Il2CppBase() + 0x42900F0))(this, startIndex);
	}
	template <typename T = Il2CppString*> T PadLeft(int32_t totalWidth, char paddingChar) {
		return ((T (*)(String*, int32_t, char))(Il2CppBase() + 0x42903E0))(this, totalWidth, paddingChar);
	}
	template <typename T = Il2CppString*> T PadRight(int32_t totalWidth) {
		return ((T (*)(String*, int32_t))(Il2CppBase() + 0x42905B0))(this, totalWidth);
	}
	template <typename T = Il2CppString*> T PadRight_1(int32_t totalWidth, char paddingChar) {
		return ((T (*)(String*, int32_t, char))(Il2CppBase() + 0x42905B8))(this, totalWidth, paddingChar);
	}
	template <typename T = bool> T StartsWith(Il2CppString* value) {
		return ((T (*)(String*, Il2CppString*))(Il2CppBase() + 0x4290788))(this, value);
	}
	template <typename T = bool> T StartsWith_1(Il2CppString* value, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42908DC))(this, value, comparisonType);
	}
	template <typename T = bool> T EndsWith_1(Il2CppString* value, uintptr_t comparisonType) {
		return ((T (*)(String*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4290D80))(this, value, comparisonType);
	}
	template <typename T = Il2CppString*> T Replace(char oldChar, char newChar) {
		return ((T (*)(String*, char, char))(Il2CppBase() + 0x4291224))(this, oldChar, newChar);
	}
	template <typename T = Il2CppString*> T Replace_1(Il2CppString* oldValue, Il2CppString* newValue) {
		return ((T (*)(String*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42913B8))(this, oldValue, newValue);
	}
	template <typename T = Il2CppString*> T ReplaceUnchecked(Il2CppString* oldValue, Il2CppString* newValue) {
		return ((T (*)(String*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4291548))(this, oldValue, newValue);
	}
	template <typename T = Il2CppString*> T ReplaceFallback(Il2CppString* oldValue, Il2CppString* newValue, int32_t testedCount) {
		return ((T (*)(String*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x42918C0))(this, oldValue, newValue, testedCount);
	}
	template <typename T = Il2CppString*> T Remove_1(int32_t startIndex, int32_t count) {
		return ((T (*)(String*, int32_t, int32_t))(Il2CppBase() + 0x4290204))(this, startIndex, count);
	}
	template <typename T = Il2CppString*> T ToLower() {
		return ((T (*)(String*))(Il2CppBase() + 0x4291B18))(this);
	}
	template <typename T = Il2CppString*> T ToLower_1(uintptr_t culture) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4291BC8))(this, culture);
	}
	template <typename T = Il2CppString*> T ToLowerInvariant() {
		return ((T (*)(String*))(Il2CppBase() + 0x4291CE8))(this);
	}
	template <typename T = Il2CppString*> T ToUpper() {
		return ((T (*)(String*))(Il2CppBase() + 0x4291E5C))(this);
	}
	template <typename T = Il2CppString*> T ToUpper_1(uintptr_t culture) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4291F0C))(this, culture);
	}
	template <typename T = Il2CppString*> T ToUpperInvariant() {
		return ((T (*)(String*))(Il2CppBase() + 0x429202C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(String*))(Il2CppBase() + 0x42921A0))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t provider) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x42921A4))(this, provider);
	}
	template <typename T = Il2CppString*> static T Format(Il2CppString* format, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x427F474))(0, format, arg0);
	}
	template <typename T = Il2CppString*> static T Format_1(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x429227C))(0, format, arg0, arg1);
	}
	template <typename T = Il2CppString*> static T Format_2(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42923FC))(0, format, arg0, arg1, arg2);
	}
	template <typename T = Il2CppString*> static T Format_3(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42925C0))(0, format, args);
	}
	template <typename T = Il2CppString*> static T Format_4(uintptr_t provider, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42921A8))(0, provider, format, args);
	}
	template <typename T = uintptr_t> static T FormatHelper(uintptr_t result, uintptr_t provider, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4292674))(0, result, provider, format, args);
	}
	template <typename T = Il2CppString*> static T Concat(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4293600))(0, arg0, arg1);
	}
	template <typename T = Il2CppString*> static T Concat_1(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x428B5C0))(0, arg0, arg1, arg2);
	}
	template <typename T = Il2CppString*> static T Concat_2(Il2CppString* str0, Il2CppString* str1) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4284858))(0, str0, str1);
	}
	template <typename T = Il2CppString*> static T Concat_3(Il2CppString* str0, Il2CppString* str1, Il2CppString* str2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4283604))(0, str0, str1, str2);
	}
	template <typename T = Il2CppString*> static T Concat_4(Il2CppString* str0, Il2CppString* str1, Il2CppString* str2, Il2CppString* str3) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42936F0))(0, str0, str1, str2, str3);
	}
	template <typename T = Il2CppString*> static T Concat_5(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4293BF8))(0, args);
	}
	template <typename T = Il2CppString*> static T Concat_6(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429406C))(0, values);
	}
	template <typename T = Il2CppString*> static T ConcatInternal(Il2CppArray<uintptr_t>* values, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4293E98))(0, values, length);
	}
	template <typename T = Il2CppString*> T Insert(int32_t startIndex, Il2CppString* value) {
		return ((T (*)(String*, int32_t, Il2CppString*))(Il2CppBase() + 0x42941AC))(this, startIndex, value);
	}
	template <typename T = Il2CppString*> static T Intern(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42943B0))(0, str);
	}
	template <typename T = Il2CppString*> static T Join(Il2CppString* separator, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42944B0))(0, separator, value);
	}
	template <typename T = Il2CppString*> static T Join_1(Il2CppString* separator, Il2CppArray<uintptr_t>* value, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4294990))(0, separator, value, startIndex, count);
	}
	template <typename T = Il2CppString*> static T JoinUnchecked(Il2CppString* separator, Il2CppArray<uintptr_t>* value, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x429461C))(0, separator, value, startIndex, count);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(String*))(Il2CppBase() + 0x427F5B0))(this);
	}
	template <typename T = void> static T ParseFormatSpecifier(Il2CppString* str, uintptr_t ptr, uintptr_t* n, uintptr_t* width, uintptr_t* left_align, uintptr_t* format) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4293014))(0, str, ptr, n, width, left_align, format);
	}
	template <typename T = int32_t> static T ParseDecimal(Il2CppString* str, uintptr_t ptr) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4294C18))(0, str, ptr);
	}
	template <typename T = void> T InternalSetChar(int32_t idx, char val) {
		return ((T (*)(String*, int32_t, char))(Il2CppBase() + 0x4294C8C))(this, idx, val);
	}
	template <typename T = void> T InternalSetLength(int32_t newLength) {
		return ((T (*)(String*, int32_t))(Il2CppBase() + 0x4294D54))(this, newLength);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(String*))(Il2CppBase() + 0x4294E4C))(this);
	}
	template <typename T = int32_t> T GetCaseInsensitiveHashCode() {
		return ((T (*)(String*))(Il2CppBase() + 0x4294ED4))(this);
	}
	template <typename T = Il2CppString*> T CreateString(uintptr_t value) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4295050))(this, value);
	}
	template <typename T = Il2CppString*> T CreateString_1(uintptr_t value, int32_t startIndex, int32_t length) {
		return ((T (*)(String*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x42955B0))(this, value, startIndex, length);
	}
	template <typename T = Il2CppString*> T CreateString_2(uintptr_t value, int32_t startIndex, int32_t length, uintptr_t enc) {
		return ((T (*)(String*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4295158))(this, value, startIndex, length, enc);
	}
	template <typename T = Il2CppString*> T CreateString_3(uintptr_t value) {
		return ((T (*)(String*, uintptr_t))(Il2CppBase() + 0x4295CF0))(this, value);
	}
	template <typename T = Il2CppString*> T CreateString_4(uintptr_t value, int32_t startIndex, int32_t length) {
		return ((T (*)(String*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4295E7C))(this, value, startIndex, length);
	}
	template <typename T = Il2CppString*> T CreateString_5(Il2CppArray<uintptr_t>* val, int32_t startIndex, int32_t length) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4296084))(this, val, startIndex, length);
	}
	template <typename T = Il2CppString*> T CreateString_6(Il2CppArray<uintptr_t>* val) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429630C))(this, val);
	}
	template <typename T = Il2CppString*> T CreateString_7(char c, int32_t count) {
		return ((T (*)(String*, char, int32_t))(Il2CppBase() + 0x42964C4))(this, c, count);
	}
	template <typename T = void> static T memcpy4(uintptr_t dest, uintptr_t src, int32_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4296634))(0, dest, src, size);
	}
	template <typename T = void> static T memcpy2(uintptr_t dest, uintptr_t src, int32_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42966C0))(0, dest, src, size);
	}
	template <typename T = void> static T memcpy1(uintptr_t dest, uintptr_t src, int32_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4296738))(0, dest, src, size);
	}
	template <typename T = void> static T memcpy(uintptr_t dest, uintptr_t src, int32_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4295B44))(0, dest, src, size);
	}
	template <typename T = void> static T CharCopy(uintptr_t dest, uintptr_t src, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x428AE04))(0, dest, src, count);
	}
	template <typename T = void> static T CharCopyReverse(uintptr_t dest, uintptr_t src, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42967E0))(0, dest, src, count);
	}
	template <typename T = void> static T CharCopy_1(Il2CppString* target, int32_t targetIndex, Il2CppString* source, int32_t sourceIndex, int32_t count) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4296828))(0, target, targetIndex, source, sourceIndex, count);
	}
	template <typename T = void> static T CharCopy_2(Il2CppString* target, int32_t targetIndex, Il2CppArray<uintptr_t>* source, int32_t sourceIndex, int32_t count) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x429690C))(0, target, targetIndex, source, sourceIndex, count);
	}
	template <typename T = void> static T CharCopyReverse_1(Il2CppString* target, int32_t targetIndex, Il2CppString* source, int32_t sourceIndex, int32_t count) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x42969F8))(0, target, targetIndex, source, sourceIndex, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T InternalSplit(Il2CppArray<uintptr_t>* separator, int32_t count, int32_t options) {
		return ((T (*)(String*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x428B350))(this, separator, count, options);
	}
	template <typename T = Il2CppString*> static T InternalAllocateStr(int32_t length) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x428C000))(0, length);
	}
	template <typename T = Il2CppString*> static T InternalIntern(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42944A8))(0, str);
	}
	template <typename T = bool> static T op_Equality(Il2CppString* a, Il2CppString* b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4282C5C))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(Il2CppString* a, Il2CppString* b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42805EC))(0, a, b);
	}

};

}
