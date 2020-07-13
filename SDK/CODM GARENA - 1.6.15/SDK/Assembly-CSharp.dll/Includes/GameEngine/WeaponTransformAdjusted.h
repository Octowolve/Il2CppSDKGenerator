#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponTransformAdjusted
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponTransformAdjusted"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Adjusted3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Adjusted1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Adjusted3P(uintptr_t assetID, uintptr_t meshTransform) {
		return ((T (*)(WeaponTransformAdjusted*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33C3410))(this, assetID, meshTransform);
	}
	template <typename T = void> T Adjusted1P(uintptr_t assetID, uintptr_t weapon, uintptr_t OwnerPawnTransform) {
		return ((T (*)(WeaponTransformAdjusted*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x33C3754))(this, assetID, weapon, OwnerPawnTransform);
	}

};

}
