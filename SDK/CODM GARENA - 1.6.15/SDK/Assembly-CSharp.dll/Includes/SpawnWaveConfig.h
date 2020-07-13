#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnWaveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnWaveConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& zombieList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& botList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& powerUpDropList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectZombieType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectBotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CollectZombieType(uintptr_t zombieTypeAll) {
		return ((T (*)(SpawnWaveConfig*, uintptr_t))(Il2CppBase() + 0x3912E28))(this, zombieTypeAll);
	}
	template <typename T = void> T CollectBotType(uintptr_t botTypeAll) {
		return ((T (*)(SpawnWaveConfig*, uintptr_t))(Il2CppBase() + 0x3913028))(this, botTypeAll);
	}

};

}
