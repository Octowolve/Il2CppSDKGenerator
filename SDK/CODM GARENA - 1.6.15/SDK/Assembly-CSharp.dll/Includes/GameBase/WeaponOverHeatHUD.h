#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponOverHeatHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponOverHeatHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& hotBackGround() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& hotWeapon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& overHeatWidget() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& overHeatLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponOverHeatHUD*))(Il2CppBase() + 0x3A61A0C))(this);
	}
	template <typename T = void> T ShowUI(bool bShow) {
		return ((T (*)(WeaponOverHeatHUD*, bool))(Il2CppBase() + 0x3A62020))(this, bShow);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponOverHeatHUD*))(Il2CppBase() + 0x3A62208))(this);
	}
	template <typename T = void> T RefreshWeaponHotValue() {
		return ((T (*)(WeaponOverHeatHUD*))(Il2CppBase() + 0x3A61C04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(WeaponOverHeatHUD*))(Il2CppBase() + 0x3A62468))(this);
	}

};

}
