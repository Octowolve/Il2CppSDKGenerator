#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeedSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeedSpawnPoint"));
	}

	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
