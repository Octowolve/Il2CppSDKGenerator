#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BRZombieZone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BRZombieZone"));
	}

	template <typename T = uint32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieTriggersVolumeList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieBattleVolumeList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieSpawnSpotList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bossSpawnSpotList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mysteryBoxPointList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LinkWaveList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieTriggerVolumeGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieBattleVolumeGroup() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieSpawnSpotGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bossSpawnSpotGroup() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mysteryBoxPointGroup() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieBattleVolumeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieSpawnSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBossSpawnSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMysteryBoxPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieTriggerVolumeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRZombieZone*))(Il2CppBase() + 0x418B514))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetZombieBattleVolumeGroup() {
		return ((T (*)(BRZombieZone*))(Il2CppBase() + 0x418B51C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetZombieSpawnSpots() {
		return ((T (*)(BRZombieZone*))(Il2CppBase() + 0x418B5E4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBossSpawnSpots() {
		return ((T (*)(BRZombieZone*))(Il2CppBase() + 0x418B6AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMysteryBoxPoints() {
		return ((T (*)(BRZombieZone*))(Il2CppBase() + 0x418B774))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetZombieTriggerVolumeGroup() {
		return ((T (*)(BRZombieZone*))(Il2CppBase() + 0x418B83C))(this);
	}

};

}
