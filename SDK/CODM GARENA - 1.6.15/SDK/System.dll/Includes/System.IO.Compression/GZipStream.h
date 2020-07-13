#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO.Compression {

class GZipStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.IO.Compression", "GZipStream"));
	}

	template <typename T = uintptr_t> T& deflateStream() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(GZipStream*, bool))(Il2CppBase() + 0x42B4AD8))(this, disposing);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* dest, int32_t dest_offset, int32_t count) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B4B24))(this, dest, dest_offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* src, int32_t src_offset, int32_t count) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B4B64))(this, src, src_offset, count);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x42B4BA4))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(GZipStream*, int64_t, uintptr_t))(Il2CppBase() + 0x42B4BD8))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(GZipStream*, int64_t))(Il2CppBase() + 0x42B4C20))(this, value);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B4C60))(this, buffer, offset, count, cback, state);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B4CB0))(this, buffer, offset, count, cback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t async_result) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x42B4D00))(this, async_result);
	}
	template <typename T = void> T EndWrite(uintptr_t async_result) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x42B4D34))(this, async_result);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x42B4D68))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x42B4D9C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x42B4DD0))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x42B4E04))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x42B4E38))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(GZipStream*, int64_t))(Il2CppBase() + 0x42B4E6C))(this, value);
	}

};

}
