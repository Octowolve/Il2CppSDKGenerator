#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TableRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "TableRange"));
	}

	template <typename T = int32_t> T& Start() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& End() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& IndexStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& IndexEnd() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
