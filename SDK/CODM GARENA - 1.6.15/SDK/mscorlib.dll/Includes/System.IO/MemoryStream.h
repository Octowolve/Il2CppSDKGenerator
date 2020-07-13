#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class MemoryStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "MemoryStream"));
	}

	template <typename T = bool> T& canWrite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& allowGetBuffer() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = int32_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& internalBuffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& initialIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& expandable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& streamClosed() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& dirty_bytes() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T InternalConstructor(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count, bool writable, bool publicallyVisible) {
		return ((T (*)(MemoryStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x3FFD29C))(this, buffer, index, count, writable, publicallyVisible);
	}
	template <typename T = void> T CheckIfClosedThrowDisposed() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFD5F4))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFD6AC))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFD6C0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFD6D4))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFD6F8))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(MemoryStream*, int32_t))(Il2CppBase() + 0x3FFD718))(this, value);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFDB18))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFDB3C))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(MemoryStream*, int64_t))(Il2CppBase() + 0x3FFDB60))(this, value);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(MemoryStream*, bool))(Il2CppBase() + 0x3FFDC90))(this, disposing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFDC9C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBuffer() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFDCA0))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(MemoryStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3FFDD48))(this, buffer, offset, count);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFDF28))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t loc) {
		return ((T (*)(MemoryStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3FFDF8C))(this, offset, loc);
	}
	template <typename T = int32_t> T CalculateNewCapacity(int32_t minimum) {
		return ((T (*)(MemoryStream*, int32_t))(Il2CppBase() + 0x3FFE1EC))(this, minimum);
	}
	template <typename T = void> T Expand(int32_t newSize) {
		return ((T (*)(MemoryStream*, int32_t))(Il2CppBase() + 0x3FFE208))(this, newSize);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(MemoryStream*, int64_t))(Il2CppBase() + 0x3FFE280))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(MemoryStream*))(Il2CppBase() + 0x3FFE490))(this);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(MemoryStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFE564))(this, buffer, offset, count);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(MemoryStream*, unsigned char))(Il2CppBase() + 0x3FFE784))(this, value);
	}
	template <typename T = void> T WriteTo(uintptr_t stream) {
		return ((T (*)(MemoryStream*, uintptr_t))(Il2CppBase() + 0x3FFE8B0))(this, stream);
	}

};

}
