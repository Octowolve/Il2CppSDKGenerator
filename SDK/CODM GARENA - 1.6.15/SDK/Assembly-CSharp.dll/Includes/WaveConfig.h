#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveConfig"));
	}

	template <typename T = int32_t> T& waveID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& typeGroupID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& respawn() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = float> T& prepareTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& spawnWaveEndDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& maxActiveZombie() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& maxActiveBot() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = float> T& spawnInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isRandomWave() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isMysteryWave() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = int32_t> T& mysterySchemeID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isMysteryOpenNeedClear() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& finishGetMoneyCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& spawnWaveList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaveID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectZombieType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectBotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetWaveID(int32_t id) {
		return ((T (*)(WaveConfig*, int32_t))(Il2CppBase() + 0x4890AB0))(this, id);
	}
	template <typename T = void> T CollectZombieType(uintptr_t zombieTypeAll) {
		return ((T (*)(WaveConfig*, uintptr_t))(Il2CppBase() + 0x4890B58))(this, zombieTypeAll);
	}
	template <typename T = void> T CollectBotType(uintptr_t botTypeAll) {
		return ((T (*)(WaveConfig*, uintptr_t))(Il2CppBase() + 0x4890C68))(this, botTypeAll);
	}

};

}
