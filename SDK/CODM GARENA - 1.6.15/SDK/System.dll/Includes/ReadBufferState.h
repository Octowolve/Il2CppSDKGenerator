#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReadBufferState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ReadBufferState"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& InitialCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Ares() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
