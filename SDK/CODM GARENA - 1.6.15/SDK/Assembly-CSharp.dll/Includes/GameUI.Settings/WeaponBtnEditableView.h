#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class WeaponBtnEditableView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "WeaponBtnEditableView"));
	}

	template <typename T = uintptr_t> T& m_CurWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealViewTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetRealViewTransform() {
		return ((T (*)(WeaponBtnEditableView*))(Il2CppBase() + 0x448D5CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetRealViewTransform() {
		return ((T (*)(WeaponBtnEditableView*))(Il2CppBase() + 0x448D698))(this);
	}

};

}
