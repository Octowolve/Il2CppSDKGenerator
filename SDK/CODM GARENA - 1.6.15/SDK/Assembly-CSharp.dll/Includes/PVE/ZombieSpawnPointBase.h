#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ZombieSpawnPointBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ZombieSpawnPointBase"));
	}

	template <typename T = bool> T& bActive() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = float> T& LastSpawnTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& SecondsOfDuration() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ActivatedTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedSpawnNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelevantActorCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069A58))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069B44))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069BF8))(this);
	}
	template <typename T = uintptr_t> T SpawnActor() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069D28))(this);
	}
	template <typename T = bool> T NeedSpawnNew() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x40699B8))(this);
	}
	template <typename T = int32_t> T GetRelevantActorCount() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x406969C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069DE8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnActor() {
		return ((T (*)(ZombieSpawnPointBase*))(Il2CppBase() + 0x4069DF0))(this);
	}

};

}
