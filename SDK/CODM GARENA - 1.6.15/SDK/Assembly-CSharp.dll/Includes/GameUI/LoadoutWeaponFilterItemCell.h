#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponFilterItemCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponFilterItemCell"));
	}

	template <typename T = uintptr_t> T& ClickBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SelectedObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CurrentLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CurrentSelectedLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CacheWeaponType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutWeaponFilterItemCell*))(Il2CppBase() + 0x1F69314))(this);
	}
	template <typename T = void> T SetData(uintptr_t wType) {
		return ((T (*)(LoadoutWeaponFilterItemCell*, uintptr_t))(Il2CppBase() + 0x1F50FF8))(this, wType);
	}
	template <typename T = void> T RefreshState() {
		return ((T (*)(LoadoutWeaponFilterItemCell*))(Il2CppBase() + 0x1F51460))(this);
	}
	template <typename T = void> T OnSelectBtnClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponFilterItemCell*, uintptr_t))(Il2CppBase() + 0x1F69438))(this, obj);
	}

};

}
