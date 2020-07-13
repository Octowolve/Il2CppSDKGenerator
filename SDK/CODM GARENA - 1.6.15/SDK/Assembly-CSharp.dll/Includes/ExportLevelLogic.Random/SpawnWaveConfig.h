#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ExportLevelLogic.Random {

class SpawnWaveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ExportLevelLogic.Random", "SpawnWaveConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ZombieWaveConfigList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T AddWave() {
		return ((T (*)(SpawnWaveConfig*))(Il2CppBase() + 0x4BD7220))(this);
	}
	template <typename T = void> T RemoveWave(int32_t index) {
		return ((T (*)(SpawnWaveConfig*, int32_t))(Il2CppBase() + 0x4BD73F8))(this, index);
	}

};

}
