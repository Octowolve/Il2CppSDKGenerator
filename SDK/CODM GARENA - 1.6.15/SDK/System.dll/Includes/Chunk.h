#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Chunk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "Chunk"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Bytes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(Chunk*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B8A64))(this, buffer, offset, size);
	}

};

}
