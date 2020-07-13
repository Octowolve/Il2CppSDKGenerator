#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntLockView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntLockView"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LockSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& UnLockSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLockBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AE988))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEA30))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEA38))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEA44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEA54))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEC80))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AED54))(this);
	}
	template <typename T = void> T UpdateLockBtnState() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEDF4))(this);
	}
	template <typename T = void> T LockBtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntLockView*, uintptr_t))(Il2CppBase() + 0x34AF12C))(this, obj);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AEFD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AF39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AF3A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AF3AC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(PropHuntLockView*))(Il2CppBase() + 0x34AF3B4))(this);
	}

};

}
