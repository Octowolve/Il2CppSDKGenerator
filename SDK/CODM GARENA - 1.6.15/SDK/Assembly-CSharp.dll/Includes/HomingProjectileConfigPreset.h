#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HomingProjectileConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HomingProjectileConfigPreset"));
	}

	template <typename T = float> T& homingAngularSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& maxHomingAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_homing() {
		return ((T (*)(HomingProjectileConfigPreset*))(Il2CppBase() + 0x47553B0))(this);
	}
	template <typename T = uintptr_t> T get_projPrefabAssetID() {
		return ((T (*)(HomingProjectileConfigPreset*))(Il2CppBase() + 0x47553B8))(this);
	}

};

}
