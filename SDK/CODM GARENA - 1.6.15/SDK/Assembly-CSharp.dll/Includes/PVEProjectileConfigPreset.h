#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEProjectileConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEProjectileConfigPreset"));
	}

	template <typename T = float> T& initSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& accelSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& gravityScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& collisionRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& flightEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& explosionEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& explosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& canPenetrate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& canBounce() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& ignoreSameCamp() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_projPrefabAssetID() {
		return ((T (*)(PVEProjectileConfigPreset*))(Il2CppBase() + 0x406CB84))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(PVEProjectileConfigPreset*, uintptr_t))(Il2CppBase() + 0x406CB8C))(this, assetsList);
	}
	template <typename T = uintptr_t> T GenerateProperties() {
		return ((T (*)(PVEProjectileConfigPreset*))(Il2CppBase() + 0x406CCD0))(this);
	}

};

}
