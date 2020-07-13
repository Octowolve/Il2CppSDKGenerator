#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class DemonSeedConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "DemonSeedConfigPreset"));
	}

	template <typename T = float> T& hitGroundDamageRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& hitGroundDamage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& growUpTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& health() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& demonVinePreset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& trailEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& glowEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint64_t> T get_demonVinePresetRoleID() {
		return ((T (*)(DemonSeedConfigPreset*))(Il2CppBase() + 0x45FE24C))(this);
	}
	template <typename T = uintptr_t> T get_projPrefabAssetID() {
		return ((T (*)(DemonSeedConfigPreset*))(Il2CppBase() + 0x45FE330))(this);
	}
	template <typename T = Il2CppVector3> T get_extent() {
		return ((T (*)(DemonSeedConfigPreset*))(Il2CppBase() + 0x45FE338))(this);
	}

};

}
