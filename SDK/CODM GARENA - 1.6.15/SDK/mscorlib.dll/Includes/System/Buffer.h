#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Buffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Buffer"));
	}


	template <typename T = int32_t> static T ByteLength(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x362C784))(0, array);
	}
	template <typename T = void> static T SetByte(uintptr_t array, int32_t index, unsigned char value) {
		return ((T (*)(void *, uintptr_t, int32_t, unsigned char))(Il2CppBase() + 0x362C8C0))(0, array, index, value);
	}
	template <typename T = void> static T BlockCopy(uintptr_t src, int32_t srcOffset, uintptr_t dst, int32_t dstOffset, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x362C9D0))(0, src, srcOffset, dst, dstOffset, count);
	}
	template <typename T = int32_t> static T ByteLengthInternal(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x362C8B8))(0, array);
	}
	template <typename T = void> static T SetByteInternal(uintptr_t array, int32_t index, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x362C9C0))(0, array, index, value);
	}
	template <typename T = bool> static T BlockCopyInternal(uintptr_t src, int32_t src_offset, uintptr_t dest, int32_t dest_offset, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x362CC98))(0, src, src_offset, dest, dest_offset, count);
	}

};

}
