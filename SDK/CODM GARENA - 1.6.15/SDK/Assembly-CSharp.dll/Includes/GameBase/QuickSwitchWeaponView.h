#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class QuickSwitchWeaponView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "QuickSwitchWeaponView"));
	}

	template <typename T = uintptr_t> T& QuickSwitchWeaponBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickSwitchWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(QuickSwitchWeaponView*))(Il2CppBase() + 0x2DD7834))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(QuickSwitchWeaponView*))(Il2CppBase() + 0x2DD797C))(this);
	}
	template <typename T = void> T OnQuickSwitchWeaponBtnClick() {
		return ((T (*)(QuickSwitchWeaponView*))(Il2CppBase() + 0x2DD7AC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(QuickSwitchWeaponView*))(Il2CppBase() + 0x2DD7B5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(QuickSwitchWeaponView*))(Il2CppBase() + 0x2DD7B64))(this);
	}

};

}
