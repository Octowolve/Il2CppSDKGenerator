#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class UTF32Encoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "UTF32Encoding"));
	}

	template <typename T = bool> T& bigEndian() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& byteOrderMark() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(UTF32Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A6C34))(this, chars, index, count);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UTF32Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A6F28))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UTF32Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A7684))(this, bytes, index, count);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UTF32Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A7878))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(UTF32Encoding*, int32_t))(Il2CppBase() + 0x42A7D54))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(UTF32Encoding*, int32_t))(Il2CppBase() + 0x42A7E58))(this, byteCount);
	}
	template <typename T = uintptr_t> T GetDecoder() {
		return ((T (*)(UTF32Encoding*))(Il2CppBase() + 0x42A7F64))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPreamble() {
		return ((T (*)(UTF32Encoding*))(Il2CppBase() + 0x42A8024))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(UTF32Encoding*, uintptr_t))(Il2CppBase() + 0x42A8168))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UTF32Encoding*))(Il2CppBase() + 0x42A825C))(this);
	}
	template <typename T = int32_t> T GetByteCount_1(uintptr_t chars, int32_t count) {
		return ((T (*)(UTF32Encoding*, uintptr_t, int32_t))(Il2CppBase() + 0x42A8288))(this, chars, count);
	}
	template <typename T = int32_t> T GetByteCount_2(Il2CppString* s) {
		return ((T (*)(UTF32Encoding*, Il2CppString*))(Il2CppBase() + 0x42A8344))(this, s);
	}
	template <typename T = int32_t> T GetBytes_1(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(UTF32Encoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42A8348))(this, chars, charCount, bytes, byteCount);
	}
	template <typename T = int32_t> T GetBytes_2(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UTF32Encoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A8368))(this, s, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UTF32Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A838C))(this, bytes, index, count);
	}

};

}
