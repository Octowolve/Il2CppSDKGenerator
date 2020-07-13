#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class RequestStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "RequestStream"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& remaining_body() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4EAFC))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4EB04))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4EB0C))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4EB14))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4EBA8))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(RequestStream*, int64_t))(Il2CppBase() + 0x3E4EC3C))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4ECD0))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(RequestStream*))(Il2CppBase() + 0x3E4ECDC))(this);
	}
	template <typename T = int32_t> T FillFromBuffer(Il2CppArray<uintptr_t>* buffer, int32_t off, int32_t count) {
		return ((T (*)(RequestStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E4ECE0))(this, buffer, off, count);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(RequestStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3E4F008))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(RequestStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E4F1EC))(this, buffer, offset, count, cback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t ares) {
		return ((T (*)(RequestStream*, uintptr_t))(Il2CppBase() + 0x3E4F454))(this, ares);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(RequestStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3E4F7B4))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(RequestStream*, int64_t))(Il2CppBase() + 0x3E4F848))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(RequestStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E4F8DC))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(RequestStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E4F970))(this, buffer, offset, count, cback, state);
	}
	template <typename T = void> T EndWrite(uintptr_t async_result) {
		return ((T (*)(RequestStream*, uintptr_t))(Il2CppBase() + 0x3E4FA04))(this, async_result);
	}

};

}
