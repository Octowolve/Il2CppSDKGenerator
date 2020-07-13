#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PauseMenuBtnHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PauseMenuBtnHUD"));
	}

	template <typename T = uintptr_t> T& ChangeLoadoutBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SettingBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& QuitBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& IntroductionObj() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BR_IOS_IntroductionObj() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BR_Android_IntroductionObj() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& MP_IOS_IntroductionObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MP_Android_IntroductionObj() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PVEIntroductionObj() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsIntroductionShow() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& T_TargetClickedHandler_Setting() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadStatteChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenIntroduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowIntroduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEscapleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnSettingBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler_Setting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1626FB0))(this);
	}
	template <typename T = void> T OnServerInitialized() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1627048))(this);
	}
	template <typename T = void> T GamepadStatteChanged() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x16270E0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1627A18))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(PauseMenuBtnHUD*, bool))(Il2CppBase() + 0x1627ACC))(this, paused);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1627BE8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628000))(this);
	}
	template <typename T = bool> T OnGamepadQuit() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628400))(this);
	}
	template <typename T = bool> T OnGamepadClose() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628574))(this);
	}
	template <typename T = bool> T OnGamepadOpenIntroduction() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628710))(this);
	}
	template <typename T = void> T ShowIntroduction(bool show) {
		return ((T (*)(PauseMenuBtnHUD*, bool))(Il2CppBase() + 0x16271E0))(this, show);
	}
	template <typename T = void> T OnChangeLoadoutClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x16287E4))(this);
	}
	template <typename T = void> T OnSettingBtnClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628B70))(this);
	}
	template <typename T = void> T OnQuitBtnClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x16284D0))(this);
	}
	template <typename T = void> T OnQuitClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628E00))(this);
	}
	template <typename T = void> T OnQuitCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(PauseMenuBtnHUD*, uintptr_t, int32_t))(Il2CppBase() + 0x1629438))(this, result, context);
	}
	template <typename T = void> T StopSound() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x16295D8))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628658))(this);
	}
	template <typename T = bool> T OnEscapleBtnClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629858))(this);
	}
	template <typename T = void> T OnShowView(uintptr_t MSG) {
		return ((T (*)(PauseMenuBtnHUD*, uintptr_t))(Il2CppBase() + 0x1629934))(this, MSG);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629A7C))(this);
	}
	template <typename T = void> T T_OnSettingBtnClick() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1628D20))(this);
	}
	template <typename T = void> T T_SetClickHandler_Setting(uintptr_t clickHandler) {
		return ((T (*)(PauseMenuBtnHUD*, uintptr_t))(Il2CppBase() + 0x1629C1C))(this, clickHandler);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629CC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629CCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(PauseMenuBtnHUD*, bool))(Il2CppBase() + 0x1629CD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629CDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629CE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(PauseMenuBtnHUD*))(Il2CppBase() + 0x1629CEC))(this);
	}

};

}
