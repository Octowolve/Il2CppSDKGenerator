#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LabelData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "LabelData"));
	}

	template <typename T = int32_t> T& addr() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& maxStack() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
