#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ResponseStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ResponseStream"));
	}

	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ignore_errors() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& trailer_sent() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& crlf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E4FC54))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E4FC5C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E4FC64))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E4FC6C))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E4FD00))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(ResponseStream*, int64_t))(Il2CppBase() + 0x3E4FD94))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E4FE28))(this);
	}
	template <typename T = uintptr_t> T GetHeaders(bool closing) {
		return ((T (*)(ResponseStream*, bool))(Il2CppBase() + 0x3E50088))(this, closing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(ResponseStream*))(Il2CppBase() + 0x3E504A4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetChunkSizeBytes(int32_t size, bool final) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x3E50160))(0, size, final);
	}
	template <typename T = void> T InternalWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ResponseStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E50310))(this, buffer, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ResponseStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E504A8))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(ResponseStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E5086C))(this, buffer, offset, count, cback, state);
	}
	template <typename T = void> T EndWrite(uintptr_t ares) {
		return ((T (*)(ResponseStream*, uintptr_t))(Il2CppBase() + 0x3E50B58))(this, ares);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(ResponseStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3E50E8C))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(ResponseStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E50F20))(this, buffer, offset, count, cback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t ares) {
		return ((T (*)(ResponseStream*, uintptr_t))(Il2CppBase() + 0x3E50FB4))(this, ares);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(ResponseStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3E51048))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(ResponseStream*, int64_t))(Il2CppBase() + 0x3E510DC))(this, value);
	}

};

}
