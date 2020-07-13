#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class UnicodeEncoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "UnicodeEncoding"));
	}

	template <typename T = bool> T& bigEndian() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& byteOrderMark() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(UnicodeEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A46A8))(this, chars, index, count);
	}
	template <typename T = int32_t> T GetByteCount_1(Il2CppString* s) {
		return ((T (*)(UnicodeEncoding*, Il2CppString*))(Il2CppBase() + 0x42A4894))(this, s);
	}
	template <typename T = int32_t> T GetByteCount_2(uintptr_t chars, int32_t count) {
		return ((T (*)(UnicodeEncoding*, uintptr_t, int32_t))(Il2CppBase() + 0x42A4950))(this, chars, count);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UnicodeEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A4A58))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_1(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UnicodeEncoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A4EC4))(this, s, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_2(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(UnicodeEncoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42A5224))(this, chars, charCount, bytes, byteCount);
	}
	template <typename T = int32_t> T GetBytesInternal(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(UnicodeEncoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42A4D9C))(this, chars, charCount, bytes, byteCount);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UnicodeEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A56D0))(this, bytes, index, count);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UnicodeEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A58C0))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UnicodeEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A5D30))(this, bytes, index, count);
	}
	template <typename T = int32_t> T GetCharsInternal(uintptr_t bytes, int32_t byteCount, uintptr_t chars, int32_t charCount) {
		return ((T (*)(UnicodeEncoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42A5C04))(this, bytes, byteCount, chars, charCount);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(UnicodeEncoding*, int32_t))(Il2CppBase() + 0x42A6004))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(UnicodeEncoding*, int32_t))(Il2CppBase() + 0x42A6108))(this, byteCount);
	}
	template <typename T = uintptr_t> T GetDecoder() {
		return ((T (*)(UnicodeEncoding*))(Il2CppBase() + 0x42A6210))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPreamble() {
		return ((T (*)(UnicodeEncoding*))(Il2CppBase() + 0x42A62D0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(UnicodeEncoding*, uintptr_t))(Il2CppBase() + 0x42A6414))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UnicodeEncoding*))(Il2CppBase() + 0x42A6518))(this);
	}
	template <typename T = void> static T CopyChars(uintptr_t src, uintptr_t dest, int32_t count, bool bigEndian) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x42A53C0))(0, src, dest, count, bigEndian);
	}

};

}
