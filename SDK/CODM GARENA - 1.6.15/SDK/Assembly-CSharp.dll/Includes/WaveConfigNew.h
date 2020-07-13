#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveConfigNew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveConfigNew"));
	}

	template <typename T = int32_t> T& waveID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& typeGroupID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& respawn() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& prepareTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& spawnWaveEndDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& maxActiveZombie() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& maxActiveBot() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = float> T& spawnInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isRandomWave() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isMysteryWave() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = int32_t> T& mysterySchemeID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isMysteryOpenNeedClear() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& finishGetMoneyCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnWaveList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaveID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSpawnWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSpawnWave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetWaveID(int32_t id) {
		return ((T (*)(WaveConfigNew*, int32_t))(Il2CppBase() + 0x4890EB8))(this, id);
	}
	template <typename T = void> T AddSpawnWave() {
		return ((T (*)(WaveConfigNew*))(Il2CppBase() + 0x4890F60))(this);
	}
	template <typename T = void> T RemoveSpawnWave(int32_t index) {
		return ((T (*)(WaveConfigNew*, int32_t))(Il2CppBase() + 0x48910D0))(this, index);
	}
	template <typename T = void> T Resize(int32_t length) {
		return ((T (*)(WaveConfigNew*, int32_t))(Il2CppBase() + 0x4891240))(this, length);
	}

};

}
