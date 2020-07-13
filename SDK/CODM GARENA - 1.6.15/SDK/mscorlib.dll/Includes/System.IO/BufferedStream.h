#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class BufferedStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "BufferedStream"));
	}

	template <typename T = uintptr_t> T& m_stream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_buffer_pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_buffer_read_ahead() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_buffer_reading() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FECEB0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FECEE4))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FECF18))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FECF4C))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FED040))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(BufferedStream*, int64_t))(Il2CppBase() + 0x3FED170))(this, value);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(BufferedStream*, bool))(Il2CppBase() + 0x3FED2E8))(this, disposing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FECF88))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(BufferedStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3FED34C))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(BufferedStream*, int64_t))(Il2CppBase() + 0x3FED474))(this, value);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FED6CC))(this);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(BufferedStream*, unsigned char))(Il2CppBase() + 0x3FEDB78))(this, value);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** array, int32_t offset, int32_t count) {
		return ((T (*)(BufferedStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3FED7C0))(this, array, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(BufferedStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FEDC60))(this, array, offset, count);
	}
	template <typename T = void> T CheckObjectDisposedException() {
		return ((T (*)(BufferedStream*))(Il2CppBase() + 0x3FED094))(this);
	}

};

}
