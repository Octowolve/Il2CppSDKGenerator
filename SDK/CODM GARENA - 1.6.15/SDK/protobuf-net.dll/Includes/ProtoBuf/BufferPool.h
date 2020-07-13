#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class BufferPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "BufferPool"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& pool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x5060170))(0);
	}
	template <typename T = void> static T ResizeAndFlushLeft(Il2CppArray<uintptr_t>* buffer, int32_t toFitAtLeastBytes, int32_t copyFromIndex, int32_t copyBytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x5060558))(0, buffer, toFitAtLeastBytes, copyFromIndex, copyBytes);
	}
	template <typename T = void> static T ReleaseBufferToPool(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50606E0))(0, buffer);
	}

};

}
