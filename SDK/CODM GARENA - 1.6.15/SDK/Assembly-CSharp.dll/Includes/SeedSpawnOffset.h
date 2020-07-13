#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeedSpawnOffset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeedSpawnOffset"));
	}

	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
