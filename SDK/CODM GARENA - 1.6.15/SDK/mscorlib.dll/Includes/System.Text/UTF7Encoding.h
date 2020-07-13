#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class UTF7Encoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "UTF7Encoding"));
	}

	template <typename T = bool> T& allowOptionals() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& encodingRules() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& base64Values() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UTF7Encoding*))(Il2CppBase() + 0x42A8D90))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(UTF7Encoding*, uintptr_t))(Il2CppBase() + 0x42A8DB0))(this, value);
	}
	template <typename T = int32_t> static T InternalGetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count, bool flush, int32_t leftOver, bool isInShifted, bool allowOptionals) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool, int32_t, bool, bool))(Il2CppBase() + 0x42A8EE0))(0, chars, index, count, flush, leftOver, isInShifted, allowOptionals);
	}
	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(UTF7Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A9328))(this, chars, index, count);
	}
	template <typename T = int32_t> static T InternalGetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, bool flush, uintptr_t leftOver, uintptr_t isInShifted, bool allowOptionals) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x42A9408))(0, chars, charIndex, charCount, bytes, byteIndex, flush, leftOver, isInShifted, allowOptionals);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UTF7Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A9F80))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> static T InternalGetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count, int32_t leftOver) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x42AA080))(0, bytes, index, count, leftOver);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UTF7Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42AA3EC))(this, bytes, index, count);
	}
	template <typename T = int32_t> static T InternalGetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex, uintptr_t leftOver) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x42AA4AC))(0, bytes, byteIndex, byteCount, chars, charIndex, leftOver);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UTF7Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42AAE54))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(UTF7Encoding*, int32_t))(Il2CppBase() + 0x42AAFCC))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(UTF7Encoding*, int32_t))(Il2CppBase() + 0x42AB100))(this, byteCount);
	}
	template <typename T = uintptr_t> T GetDecoder() {
		return ((T (*)(UTF7Encoding*))(Il2CppBase() + 0x42AB204))(this);
	}
	template <typename T = int32_t> T GetByteCount_1(uintptr_t chars, int32_t count) {
		return ((T (*)(UTF7Encoding*, uintptr_t, int32_t))(Il2CppBase() + 0x42AB290))(this, chars, count);
	}
	template <typename T = int32_t> T GetByteCount_2(Il2CppString* s) {
		return ((T (*)(UTF7Encoding*, Il2CppString*))(Il2CppBase() + 0x42AB294))(this, s);
	}
	template <typename T = int32_t> T GetBytes_1(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(UTF7Encoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42AB298))(this, chars, charCount, bytes, byteCount);
	}
	template <typename T = int32_t> T GetBytes_2(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UTF7Encoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42AB2B8))(this, s, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UTF7Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42AB2DC))(this, bytes, index, count);
	}

};

}
