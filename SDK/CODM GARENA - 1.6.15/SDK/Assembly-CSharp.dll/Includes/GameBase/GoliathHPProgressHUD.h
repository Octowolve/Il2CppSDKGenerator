#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GoliathHPProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GoliathHPProgressHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_HPProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_cacheHealthValue() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_cCurrColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_cOriColor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_cMidColor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_cEndColor() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenProgressBarValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGoliathHPProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGoliathHPProgressColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECD92C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECD938))(this);
	}
	template <typename T = void> T SetOpenProgressBarValue(float value) {
		return ((T (*)(GoliathHPProgressHUD*, float))(Il2CppBase() + 0x1ECDB5C))(this, value);
	}
	template <typename T = bool> T IsNeedHide() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECDCC8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECD9E8))(this);
	}
	template <typename T = void> T ShowUI(bool bShow) {
		return ((T (*)(GoliathHPProgressHUD*, bool))(Il2CppBase() + 0x1ECE008))(this, bShow);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECE1F0))(this);
	}
	template <typename T = void> T RefreshGoliathHPProgress() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECDDA8))(this);
	}
	template <typename T = void> T RefreshGoliathHPProgressColor(float healthRadio) {
		return ((T (*)(GoliathHPProgressHUD*, float))(Il2CppBase() + 0x1ECE450))(this, healthRadio);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GoliathHPProgressHUD*))(Il2CppBase() + 0x1ECE630))(this);
	}

};

}
