#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ExportLevelLogic.Random {

class WaveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ExportLevelLogic.Random", "WaveConfig"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnWaveList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSpawnWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSpawnWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddSpawnWave() {
		return ((T (*)(WaveConfig*))(Il2CppBase() + 0x4BD75E0))(this);
	}
	template <typename T = void> T RemoveSpawnWave(int32_t index) {
		return ((T (*)(WaveConfig*, int32_t))(Il2CppBase() + 0x4BD774C))(this, index);
	}
	template <typename T = void> T Resize(int32_t length) {
		return ((T (*)(WaveConfig*, int32_t))(Il2CppBase() + 0x4BD78BC))(this, length);
	}

};

}
