#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class StringBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "StringBuilder"));
	}

	template <typename T = int32_t> static T& constDefaultCapacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _str() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _cached_str() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _maxCapacity() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(StringBuilder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42A2C38))(this, info, context);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(StringBuilder*))(Il2CppBase() + 0x42A2D4C))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(StringBuilder*, int32_t))(Il2CppBase() + 0x42A2B0C))(this, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(StringBuilder*))(Il2CppBase() + 0x42A2FBC))(this);
	}
	template <typename T = void> T set_Length(int32_t value) {
		return ((T (*)(StringBuilder*, int32_t))(Il2CppBase() + 0x42A2FC4))(this, value);
	}
	template <typename T = char> T get_Chars(int32_t index) {
		return ((T (*)(StringBuilder*, int32_t))(Il2CppBase() + 0x42A30A8))(this, index);
	}
	template <typename T = void> T set_Chars(int32_t index, char value) {
		return ((T (*)(StringBuilder*, int32_t, char))(Il2CppBase() + 0x42A3178))(this, index, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StringBuilder*))(Il2CppBase() + 0x4271514))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(int32_t startIndex, int32_t length) {
		return ((T (*)(StringBuilder*, int32_t, int32_t))(Il2CppBase() + 0x42A3260))(this, startIndex, length);
	}
	template <typename T = uintptr_t> T Remove(int32_t startIndex, int32_t length) {
		return ((T (*)(StringBuilder*, int32_t, int32_t))(Il2CppBase() + 0x42A3358))(this, startIndex, length);
	}
	template <typename T = uintptr_t> T Replace(char oldChar, char newChar) {
		return ((T (*)(StringBuilder*, char, char))(Il2CppBase() + 0x42A34A8))(this, oldChar, newChar);
	}
	template <typename T = uintptr_t> T Replace_1(char oldChar, char newChar, int32_t startIndex, int32_t count) {
		return ((T (*)(StringBuilder*, char, char, int32_t, int32_t))(Il2CppBase() + 0x42A34CC))(this, oldChar, newChar, startIndex, count);
	}
	template <typename T = uintptr_t> T Replace_2(Il2CppString* oldValue, Il2CppString* newValue) {
		return ((T (*)(StringBuilder*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42851EC))(this, oldValue, newValue);
	}
	template <typename T = uintptr_t> T Replace_3(Il2CppString* oldValue, Il2CppString* newValue, int32_t startIndex, int32_t count) {
		return ((T (*)(StringBuilder*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x42A3618))(this, oldValue, newValue, startIndex, count);
	}
	template <typename T = uintptr_t> T Append(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StringBuilder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42A3920))(this, value);
	}
	template <typename T = uintptr_t> T Append_1(Il2CppString* value) {
		return ((T (*)(StringBuilder*, Il2CppString*))(Il2CppBase() + 0x42713B4))(this, value);
	}
	template <typename T = uintptr_t> T Append_2(unsigned char value) {
		return ((T (*)(StringBuilder*, unsigned char))(Il2CppBase() + 0x42A3A44))(this, value);
	}
	template <typename T = uintptr_t> T Append_3(double value) {
		return ((T (*)(StringBuilder*, double))(Il2CppBase() + 0x42A3A78))(this, value);
	}
	template <typename T = uintptr_t> T Append_4(int16_t value) {
		return ((T (*)(StringBuilder*, int16_t))(Il2CppBase() + 0x42A3AAC))(this, value);
	}
	template <typename T = uintptr_t> T Append_5(int32_t value) {
		return ((T (*)(StringBuilder*, int32_t))(Il2CppBase() + 0x42A3AE0))(this, value);
	}
	template <typename T = uintptr_t> T Append_6(int64_t value) {
		return ((T (*)(StringBuilder*, int64_t))(Il2CppBase() + 0x42A3B14))(this, value);
	}
	template <typename T = uintptr_t> T Append_7(uintptr_t value) {
		return ((T (*)(StringBuilder*, uintptr_t))(Il2CppBase() + 0x42A3B48))(this, value);
	}
	template <typename T = uintptr_t> T Append_8(float value) {
		return ((T (*)(StringBuilder*, float))(Il2CppBase() + 0x42A3B8C))(this, value);
	}
	template <typename T = uintptr_t> T Append_9(uint32_t value) {
		return ((T (*)(StringBuilder*, uint32_t))(Il2CppBase() + 0x42A3BBC))(this, value);
	}
	template <typename T = uintptr_t> T Append_10(char value) {
		return ((T (*)(StringBuilder*, char))(Il2CppBase() + 0x428507C))(this, value);
	}
	template <typename T = uintptr_t> T Append_11(char value, int32_t repeatCount) {
		return ((T (*)(StringBuilder*, char, int32_t))(Il2CppBase() + 0x42934FC))(this, value, repeatCount);
	}
	template <typename T = uintptr_t> T Append_12(Il2CppArray<uintptr_t>* value, int32_t startIndex, int32_t charCount) {
		return ((T (*)(StringBuilder*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A3BF0))(this, value, startIndex, charCount);
	}
	template <typename T = uintptr_t> T Append_13(Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(StringBuilder*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4292E4C))(this, value, startIndex, count);
	}
	template <typename T = uintptr_t> T AppendLine() {
		return ((T (*)(StringBuilder*))(Il2CppBase() + 0x42A3D84))(this);
	}
	template <typename T = uintptr_t> T AppendLine_1(Il2CppString* value) {
		return ((T (*)(StringBuilder*, Il2CppString*))(Il2CppBase() + 0x42A3DAC))(this, value);
	}
	template <typename T = uintptr_t> T AppendFormat(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(StringBuilder*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42871EC))(this, format, args);
	}
	template <typename T = uintptr_t> T AppendFormat_1(uintptr_t provider, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(StringBuilder*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42A3DEC))(this, provider, format, args);
	}
	template <typename T = uintptr_t> T AppendFormat_2(Il2CppString* format, uintptr_t arg0) {
		return ((T (*)(StringBuilder*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4287210))(this, format, arg0);
	}
	template <typename T = uintptr_t> T AppendFormat_3(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(StringBuilder*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x427D510))(this, format, arg0, arg1);
	}
	template <typename T = uintptr_t> T AppendFormat_4(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(StringBuilder*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42A3EB0))(this, format, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T Insert(int32_t index, Il2CppString* value) {
		return ((T (*)(StringBuilder*, int32_t, Il2CppString*))(Il2CppBase() + 0x42A4044))(this, index, value);
	}
	template <typename T = uintptr_t> T Insert_1(int32_t index, char value) {
		return ((T (*)(StringBuilder*, int32_t, char))(Il2CppBase() + 0x42A41B0))(this, index, value);
	}
	template <typename T = uintptr_t> T Insert_2(int32_t index, Il2CppString* value, int32_t count) {
		return ((T (*)(StringBuilder*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x42A431C))(this, index, value, count);
	}
	template <typename T = void> T InternalEnsureCapacity(int32_t size) {
		return ((T (*)(StringBuilder*, int32_t))(Il2CppBase() + 0x42A2D94))(this, size);
	}

};

}
