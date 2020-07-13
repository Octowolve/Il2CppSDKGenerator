#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnItem"));
	}

	template <typename T = uintptr_t> T& checker() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& spawnPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
