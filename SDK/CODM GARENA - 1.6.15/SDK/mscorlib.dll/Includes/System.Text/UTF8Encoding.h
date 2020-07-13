#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class UTF8Encoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "UTF8Encoding"));
	}

	template <typename T = int32_t> static T& UTF8_CODE_PAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& emitIdentifier() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> static T InternalGetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count, uintptr_t leftOver, bool flush) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4D84C80))(0, chars, index, count, leftOver, flush);
	}
	template <typename T = int32_t> static T InternalGetByteCount_1(uintptr_t chars, int32_t count, uintptr_t leftOver, bool flush) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4D84EE0))(0, chars, count, leftOver, flush);
	}
	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(UTF8Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4D84FE0))(this, chars, index, count);
	}
	template <typename T = int32_t> T GetByteCount_1(uintptr_t chars, int32_t count) {
		return ((T (*)(UTF8Encoding*, uintptr_t, int32_t))(Il2CppBase() + 0x4D8500C))(this, chars, count);
	}
	template <typename T = int32_t> static T InternalGetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, uintptr_t leftOver, bool flush) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4D85100))(0, chars, charIndex, charCount, bytes, byteIndex, leftOver, flush);
	}
	template <typename T = int32_t> static T InternalGetBytes_1(uintptr_t chars, int32_t count, uintptr_t bytes, int32_t bcount, uintptr_t leftOver, bool flush) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4D8545C))(0, chars, count, bytes, bcount, leftOver, flush);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UTF8Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D8574C))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_1(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(UTF8Encoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D8578C))(this, s, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_2(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(UTF8Encoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4D85B28))(this, chars, charCount, bytes, byteCount);
	}
	template <typename T = int32_t> static T InternalGetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count, uint32_t leftOverBits, uint32_t leftOverCount, uintptr_t provider, uintptr_t fallbackBuffer, Il2CppArray<uintptr_t>* bufferArg, bool flush) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uint32_t, uint32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4D85CF4))(0, bytes, index, count, leftOverBits, leftOverCount, provider, fallbackBuffer, bufferArg, flush);
	}
	template <typename T = int32_t> static T InternalGetCharCount_1(uintptr_t bytes, int32_t count, uint32_t leftOverBits, uint32_t leftOverCount, uintptr_t provider, uintptr_t fallbackBuffer, Il2CppArray<uintptr_t>* bufferArg, bool flush) {
		return ((T (*)(void *, uintptr_t, int32_t, uint32_t, uint32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4D85F48))(0, bytes, count, leftOverBits, leftOverCount, provider, fallbackBuffer, bufferArg, flush);
	}
	template <typename T = int32_t> static T Fallback(uintptr_t provider, uintptr_t buffer, Il2CppArray<uintptr_t>* bufferArg, uintptr_t bytes, int64_t index, uint32_t size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, int64_t, uint32_t))(Il2CppBase() + 0x4D861E0))(0, provider, buffer, bufferArg, bytes, index, size);
	}
	template <typename T = void> static T Fallback_1(uintptr_t provider, uintptr_t buffer, Il2CppArray<uintptr_t>* bufferArg, uintptr_t bytes, int64_t byteIndex, uint32_t size, uintptr_t chars, uintptr_t charIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, int64_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D86468))(0, provider, buffer, bufferArg, bytes, byteIndex, size, chars, charIndex);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UTF8Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4D86724))(this, bytes, index, count);
	}
	template <typename T = int32_t> static T InternalGetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex, uintptr_t leftOverBits, uintptr_t leftOverCount, uintptr_t provider, uintptr_t fallbackBuffer, Il2CppArray<uintptr_t>* bufferArg, bool flush) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4D8678C))(0, bytes, byteIndex, byteCount, chars, charIndex, leftOverBits, leftOverCount, provider, fallbackBuffer, bufferArg, flush);
	}
	template <typename T = int32_t> static T InternalGetChars_1(uintptr_t bytes, int32_t byteCount, uintptr_t chars, int32_t charCount, uintptr_t leftOverBits, uintptr_t leftOverCount, uintptr_t provider, uintptr_t fallbackBuffer, Il2CppArray<uintptr_t>* bufferArg, bool flush) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4D86B10))(0, bytes, byteCount, chars, charCount, leftOverBits, leftOverCount, provider, fallbackBuffer, bufferArg, flush);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(UTF8Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D8704C))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(UTF8Encoding*, int32_t))(Il2CppBase() + 0x4D870D0))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(UTF8Encoding*, int32_t))(Il2CppBase() + 0x4D871E4))(this, byteCount);
	}
	template <typename T = uintptr_t> T GetDecoder() {
		return ((T (*)(UTF8Encoding*))(Il2CppBase() + 0x4D872F8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPreamble() {
		return ((T (*)(UTF8Encoding*))(Il2CppBase() + 0x4D873E4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(UTF8Encoding*, uintptr_t))(Il2CppBase() + 0x4D87500))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UTF8Encoding*))(Il2CppBase() + 0x4D8767C))(this);
	}
	template <typename T = int32_t> T GetByteCount_2(Il2CppString* chars) {
		return ((T (*)(UTF8Encoding*, Il2CppString*))(Il2CppBase() + 0x4D87684))(this, chars);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(UTF8Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4D8768C))(this, bytes, index, count);
	}

};

}
