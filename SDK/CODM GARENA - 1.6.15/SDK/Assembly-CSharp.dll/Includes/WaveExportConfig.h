#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveExportConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& waveConfigList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieSpawnConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& botSpawnConfig() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddZombieSpawnConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveZombieSpawnConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(WaveExportConfig*))(Il2CppBase() + 0x4891468))(this);
	}
	template <typename T = void> T AddZombieSpawnConfig() {
		return ((T (*)(WaveExportConfig*))(Il2CppBase() + 0x4891470))(this);
	}
	template <typename T = void> T RemoveZombieSpawnConfig(int32_t index) {
		return ((T (*)(WaveExportConfig*, int32_t))(Il2CppBase() + 0x489161C))(this, index);
	}
	template <typename T = void> T AddWave() {
		return ((T (*)(WaveExportConfig*))(Il2CppBase() + 0x489178C))(this);
	}
	template <typename T = void> T RemoveWave(int32_t index) {
		return ((T (*)(WaveExportConfig*, int32_t))(Il2CppBase() + 0x4891988))(this, index);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WaveExportConfig*))(Il2CppBase() + 0x4891AF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(WaveExportConfig*))(Il2CppBase() + 0x4891E48))(this);
	}

};

}
