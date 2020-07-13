#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ClawDroneConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ClawDroneConfigPreset"));
	}

	template <typename T = float> T& DamageRadius() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& DamageOverTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& bShowScanEffect() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& DroneHeight() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& HitCDTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
