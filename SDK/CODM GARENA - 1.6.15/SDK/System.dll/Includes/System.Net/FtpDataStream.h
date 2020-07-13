#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FtpDataStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FtpDataStream"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& networkStream() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isRead() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = int32_t> T& totalRead() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CAED0))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CAF08))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CAF10))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CAF24))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CAF2C))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CAFC0))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(FtpDataStream*, int64_t))(Il2CppBase() + 0x42CB054))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CB0E8))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CB0FC))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(FtpDataStream*, int64_t, uintptr_t))(Il2CppBase() + 0x42CB100))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(FtpDataStream*, int64_t))(Il2CppBase() + 0x42CB194))(this, value);
	}
	template <typename T = int32_t> T ReadInternal(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(FtpDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42CB228))(this, buffer, offset, size);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t cb, uintptr_t state) {
		return ((T (*)(FtpDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CB5BC))(this, buffer, offset, size, cb, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(FtpDataStream*, uintptr_t))(Il2CppBase() + 0x42CB998))(this, asyncResult);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(FtpDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42CBB74))(this, buffer, offset, size);
	}
	template <typename T = void> T WriteInternal(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(FtpDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42CBDDC))(this, buffer, offset, size);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t cb, uintptr_t state) {
		return ((T (*)(FtpDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CBF78))(this, buffer, offset, size, cb, state);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(FtpDataStream*, uintptr_t))(Il2CppBase() + 0x42CC278))(this, asyncResult);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(FtpDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42CC430))(this, buffer, offset, size);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CC690))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(FtpDataStream*, bool))(Il2CppBase() + 0x42CC6FC))(this, disposing);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(FtpDataStream*))(Il2CppBase() + 0x42CB7D0))(this);
	}

};

}
