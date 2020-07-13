#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveExportConfigNew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveExportConfigNew"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& waveConfigList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& zombieSpawnConfig() {
		return *(T*)((uintptr_t)this + 0x28);
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

	template <typename T = void> T AddZombieSpawnConfig() {
		return ((T (*)(WaveExportConfigNew*))(Il2CppBase() + 0x4891EF4))(this);
	}
	template <typename T = void> T RemoveZombieSpawnConfig(int32_t index) {
		return ((T (*)(WaveExportConfigNew*, int32_t))(Il2CppBase() + 0x48920A0))(this, index);
	}
	template <typename T = uintptr_t> T AddWave() {
		return ((T (*)(WaveExportConfigNew*))(Il2CppBase() + 0x4892210))(this);
	}
	template <typename T = void> T RemoveWave(int32_t index) {
		return ((T (*)(WaveExportConfigNew*, int32_t))(Il2CppBase() + 0x4892468))(this, index);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WaveExportConfigNew*))(Il2CppBase() + 0x48925D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(WaveExportConfigNew*))(Il2CppBase() + 0x4892898))(this);
	}

};

}
