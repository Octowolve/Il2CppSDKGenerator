#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeshOptimizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshOptimizeConfig"));
	}

	template <typename T = bool> T& NeedGPUSkin() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
