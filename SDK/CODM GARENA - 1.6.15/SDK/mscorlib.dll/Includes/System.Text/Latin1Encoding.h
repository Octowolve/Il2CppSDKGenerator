#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class Latin1Encoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "Latin1Encoding"));
	}


	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A0768))(this, chars, index, count);
	}
	template <typename T = int32_t> T GetByteCount_1(Il2CppString* s) {
		return ((T (*)(Latin1Encoding*, Il2CppString*))(Il2CppBase() + 0x42A0954))(this, s);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A0A0C))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_1(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, uintptr_t buffer, Il2CppArray<uintptr_t>* fallback_chars) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42A0A4C))(this, chars, charIndex, charCount, bytes, byteIndex, buffer, fallback_chars);
	}
	template <typename T = int32_t> T GetBytes_2(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(Latin1Encoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A113C))(this, s, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_3(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, uintptr_t buffer, Il2CppArray<uintptr_t>* fallback_chars) {
		return ((T (*)(Latin1Encoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42A117C))(this, s, charIndex, charCount, bytes, byteIndex, buffer, fallback_chars);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A1864))(this, bytes, index, count);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42A1A50))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(Latin1Encoding*, int32_t))(Il2CppBase() + 0x42A1DE4))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(Latin1Encoding*, int32_t))(Il2CppBase() + 0x42A1EE8))(this, byteCount);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42A1FEC))(this, bytes, index, count);
	}
	template <typename T = Il2CppString*> T GetString_1(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(Latin1Encoding*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42A22B4))(this, bytes);
	}
	template <typename T = Il2CppString*> T get_WebName() {
		return ((T (*)(Latin1Encoding*))(Il2CppBase() + 0x42A239C))(this);
	}

};

}
