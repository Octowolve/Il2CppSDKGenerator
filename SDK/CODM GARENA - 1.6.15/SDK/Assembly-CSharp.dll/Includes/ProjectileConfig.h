#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProjectileConfig"));
	}

	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
