#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class ASCIIEncoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "ASCIIEncoding"));
	}


	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4297560))(this, chars, index, count);
	}
	template <typename T = int32_t> T GetByteCount_1(Il2CppString* chars) {
		return ((T (*)(ASCIIEncoding*, Il2CppString*))(Il2CppBase() + 0x4297754))(this, chars);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x429780C))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_1(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, uintptr_t buffer, Il2CppArray<uintptr_t>* fallback_chars) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429784C))(this, chars, charIndex, charCount, bytes, byteIndex, buffer, fallback_chars);
	}
	template <typename T = int32_t> T GetBytes_2(Il2CppString* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(ASCIIEncoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4297F0C))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_3(Il2CppString* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, uintptr_t buffer, Il2CppArray<uintptr_t>* fallback_chars) {
		return ((T (*)(ASCIIEncoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4297F4C))(this, chars, charIndex, charCount, bytes, byteIndex, buffer, fallback_chars);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42985C4))(this, bytes, index, count);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42987B0))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = int32_t> T GetChars_1(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex, uintptr_t buffer) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x42987E4))(this, bytes, byteIndex, byteCount, chars, charIndex, buffer);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(ASCIIEncoding*, int32_t))(Il2CppBase() + 0x4298C78))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(ASCIIEncoding*, int32_t))(Il2CppBase() + 0x4298D7C))(this, byteCount);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount) {
		return ((T (*)(ASCIIEncoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4298E80))(this, bytes, byteIndex, byteCount);
	}
	template <typename T = int32_t> T GetBytes_4(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(ASCIIEncoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4299154))(this, chars, charCount, bytes, byteCount);
	}
	template <typename T = int32_t> T GetByteCount_2(uintptr_t chars, int32_t count) {
		return ((T (*)(ASCIIEncoding*, uintptr_t, int32_t))(Il2CppBase() + 0x429934C))(this, chars, count);
	}
	template <typename T = uintptr_t> T GetDecoder() {
		return ((T (*)(ASCIIEncoding*))(Il2CppBase() + 0x4299354))(this);
	}

};

}
