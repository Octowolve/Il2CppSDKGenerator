#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponTabTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponTabTemplate"));
	}

	template <typename T = uintptr_t> T& TabLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SelectedTabLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SelectObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCacheTabData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutWeaponTabTemplate*))(Il2CppBase() + 0x1F6E140))(this);
	}
	template <typename T = void> T OnTabClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponTabTemplate*, uintptr_t))(Il2CppBase() + 0x1F6E270))(this, obj);
	}
	template <typename T = void> T SetTabData(uintptr_t tabData) {
		return ((T (*)(LoadoutWeaponTabTemplate*, uintptr_t))(Il2CppBase() + 0x1F6914C))(this, tabData);
	}

};

}
