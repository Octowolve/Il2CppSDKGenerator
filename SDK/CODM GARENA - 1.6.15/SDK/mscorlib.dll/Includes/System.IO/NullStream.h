#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class NullStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "NullStream"));
	}


	template <typename T = bool> T get_CanRead() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEDD0))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEDD8))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEDE0))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEDE8))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEDF4))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(NullStream*, int64_t))(Il2CppBase() + 0x3FFEE00))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEE04))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(NullStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFEE08))(this, buffer, offset, count);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(NullStream*))(Il2CppBase() + 0x3FFEE10))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(NullStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3FFEE18))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(NullStream*, int64_t))(Il2CppBase() + 0x3FFEE24))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(NullStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFEE28))(this, buffer, offset, count);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(NullStream*, unsigned char))(Il2CppBase() + 0x3FFEE2C))(this, value);
	}

};

}
