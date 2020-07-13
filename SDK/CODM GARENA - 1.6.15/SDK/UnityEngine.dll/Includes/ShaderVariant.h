#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderVariant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ShaderVariant"));
	}

	template <typename T = uintptr_t> T& shader() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& passType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keywords() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
