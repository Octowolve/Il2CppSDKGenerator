#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class BufferUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "BufferUtils"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T RentBuffer(void* bufferPool, int32_t minSize) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x4DE2C3C))(0, bufferPool, minSize);
	}
	template <typename T = void> static T ReturnBuffer(void* bufferPool, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, void*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DE2D5C))(0, bufferPool, buffer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T EnsureBufferSize(void* bufferPool, int32_t size, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, void*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DE2E48))(0, bufferPool, size, buffer);
	}

};

}
