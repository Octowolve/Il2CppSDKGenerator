#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Sockets {

class NetworkStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Sockets", "NetworkStream"));
	}

	template <typename T = uintptr_t> T& access() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& socket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& owns_socket() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& readable() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& writeable() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x13);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A5A8))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A5E0))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A5F4))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A5FC))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A614))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A6A8))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(NetworkStream*, int64_t))(Il2CppBase() + 0x3E5A73C))(this, value);
	}
	template <typename T = int32_t> T get_ReadTimeout() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A7D0))(this);
	}
	template <typename T = int32_t> T get_WriteTimeout() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5A914))(this);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t callback, uintptr_t state) {
		return ((T (*)(NetworkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5AA58))(this, buffer, offset, size, callback, state);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t callback, uintptr_t state) {
		return ((T (*)(NetworkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5B1B4))(this, buffer, offset, size, callback, state);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5B8A8))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(NetworkStream*, bool))(Il2CppBase() + 0x3E5B914))(this, disposing);
	}
	template <typename T = int32_t> T EndRead(uintptr_t ar) {
		return ((T (*)(NetworkStream*, uintptr_t))(Il2CppBase() + 0x3E5BA38))(this, ar);
	}
	template <typename T = void> T EndWrite(uintptr_t ar) {
		return ((T (*)(NetworkStream*, uintptr_t))(Il2CppBase() + 0x3E5BC40))(this, ar);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5BE48))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t size) {
		return ((T (*)(NetworkStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3E5BE4C))(this, buffer, offset, size);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(NetworkStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3E5C378))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(NetworkStream*, int64_t))(Il2CppBase() + 0x3E5C40C))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(NetworkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E5C4A0))(this, buffer, offset, size);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(NetworkStream*))(Il2CppBase() + 0x3E5ACEC))(this);
	}

};

}
