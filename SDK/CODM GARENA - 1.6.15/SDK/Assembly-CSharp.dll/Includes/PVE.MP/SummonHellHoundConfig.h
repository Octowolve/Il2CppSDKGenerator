#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SummonHellHoundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SummonHellHoundConfig"));
	}

	template <typename T = uintptr_t> T& prepareAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& triggerSpawnWaveIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& hideSpotName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& showSpotName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& delayedShowTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& showEffectDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& finishAnim() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& skyEffectPath() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& fightWithHellhound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(SummonHellHoundConfig*))(Il2CppBase() + 0x435B8D4))(this);
	}
	template <typename T = float> T get_totalDelayedShowTime() {
		return ((T (*)(SummonHellHoundConfig*))(Il2CppBase() + 0x435B8E4))(this);
	}
	template <typename T = float> T get_finishAnimDuration() {
		return ((T (*)(SummonHellHoundConfig*))(Il2CppBase() + 0x435B8F8))(this);
	}

};

}
