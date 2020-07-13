#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSniperAimingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSniperAimingComponent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderersExceptSight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecursiveMeshRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHiddenExceptSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CacheMeshRenderers() {
		return ((T (*)(WeaponSniperAimingComponent*))(Il2CppBase() + 0x4C55F24))(this);
	}
	template <typename T = void> T RecursiveMeshRender(uintptr_t parentGameObject) {
		return ((T (*)(WeaponSniperAimingComponent*, uintptr_t))(Il2CppBase() + 0x4C56010))(this, parentGameObject);
	}
	template <typename T = void> T SetHiddenExceptSight(uintptr_t weapon, bool isHidden) {
		return ((T (*)(WeaponSniperAimingComponent*, uintptr_t, bool))(Il2CppBase() + 0x4C566A0))(this, weapon, isHidden);
	}

};

}
