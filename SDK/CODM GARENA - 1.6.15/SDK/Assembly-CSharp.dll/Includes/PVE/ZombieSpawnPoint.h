#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ZombieSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ZombieSpawnPoint"));
	}

	template <typename T = float> T& SpawnInterval() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& MaxActorCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedSpawnNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T NeedSpawnNew() {
		return ((T (*)(ZombieSpawnPoint*))(Il2CppBase() + 0x4069594))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedSpawnNew() {
		return ((T (*)(ZombieSpawnPoint*))(Il2CppBase() + 0x40699B4))(this);
	}

};

}
