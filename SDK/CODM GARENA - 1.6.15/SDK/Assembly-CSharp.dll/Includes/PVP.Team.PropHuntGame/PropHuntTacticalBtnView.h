#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntTacticalBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntTacticalBtnView"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TacticalCount() {
		return *(T*)((uintptr_t)this + 0x94);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B6E88))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B6F30))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B6F38))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B6F44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B6F54))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7180))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7254))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B72FC))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B73A4))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7444))(this);
	}
	template <typename T = void> T TacticalBtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntTacticalBtnView*, uintptr_t))(Il2CppBase() + 0x34B74E4))(this, obj);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B75DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B773C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B774C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7754))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B775C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(PropHuntTacticalBtnView*))(Il2CppBase() + 0x34B7764))(this);
	}

};

}
