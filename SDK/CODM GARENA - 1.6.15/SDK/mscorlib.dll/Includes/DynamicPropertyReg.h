#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicPropertyReg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "DynamicPropertyReg"));
	}

	template <typename T = uintptr_t> T& Property() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Sink() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
