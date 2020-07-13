#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class UnmanagedMemoryStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "UnmanagedMemoryStream"));
	}

	template <typename T = int64_t> T& length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& closed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fileaccess() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& initial_pointer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& initial_position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& current_position() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Closed() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400A4E4))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400A50C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400A520))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400A548))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400A604))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(UnmanagedMemoryStream*, int64_t))(Il2CppBase() + 0x400A6C0))(this, value);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(UnmanagedMemoryStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x400A834))(this, buffer, offset, count);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400AB70))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t loc) {
		return ((T (*)(UnmanagedMemoryStream*, int64_t, uintptr_t))(Il2CppBase() + 0x400AD14))(this, offset, loc);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(UnmanagedMemoryStream*, int64_t))(Il2CppBase() + 0x400AEE0))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(UnmanagedMemoryStream*))(Il2CppBase() + 0x400B0F4))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(UnmanagedMemoryStream*, bool))(Il2CppBase() + 0x400B1AC))(this, disposing);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(UnmanagedMemoryStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x400B1E0))(this, buffer, offset, count);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(UnmanagedMemoryStream*, unsigned char))(Il2CppBase() + 0x400B5A4))(this, value);
	}

};

}
