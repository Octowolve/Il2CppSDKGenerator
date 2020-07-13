#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPveOffWallView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPveOffWallView"));
	}

	template <typename T = uintptr_t> T& WeaponRootWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& WeaponItemScrollView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& WeaponBtnGroup() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& WeaponEditBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TabGrid() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WeaponTypeTab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ResetAllTab() {
		return ((T (*)(LoadoutPveOffWallView*))(Il2CppBase() + 0x1A855B4))(this);
	}
	template <typename T = void> T ShowWeaponTab() {
		return ((T (*)(LoadoutPveOffWallView*))(Il2CppBase() + 0x1A85850))(this);
	}
	template <typename T = void> T ShowFilterView() {
		return ((T (*)(LoadoutPveOffWallView*))(Il2CppBase() + 0x1A85964))(this);
	}
	template <typename T = bool> static T ShowFilterViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A886E0))(0, it);
	}

};

}
