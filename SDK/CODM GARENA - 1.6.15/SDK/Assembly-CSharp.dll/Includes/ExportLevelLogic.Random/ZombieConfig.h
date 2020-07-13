#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ExportLevelLogic.Random {

class ZombieConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ExportLevelLogic.Random", "ZombieConfig"));
	}

	template <typename T = uintptr_t> T& Zombie() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& Count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& SpawnSpotGroup() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& IsRandomConfig() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = int32_t> T& CurrentMaxSpawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TotalMaxSpawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SpawnDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
