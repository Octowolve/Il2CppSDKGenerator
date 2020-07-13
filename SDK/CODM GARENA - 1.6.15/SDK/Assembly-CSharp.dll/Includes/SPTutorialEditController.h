#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPTutorialEditController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPTutorialEditController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CurSelectedView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_CurSelectedCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_FireEditableCtrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_JoySticksController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_RepeatTimes() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_SoundHasPlayed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEditEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEditDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSliderPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireBtnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScaleValueChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRepeatCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepeatCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFixCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLocalConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickDragged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickPinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickPinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickPinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickAlphaChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickDragStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoySticksSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoySticksReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEditableJoyStickButtonController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Select() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FA9EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FAA90))(this);
	}
	template <typename T = void> T SetEditEnable() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42F5608))(this);
	}
	template <typename T = void> T SetEditDisable() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42F4ED4))(this);
	}
	template <typename T = Il2CppVector3> T GetSliderPos() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42F5524))(this);
	}
	template <typename T = Il2CppVector3> T GetFireBtnPos() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42F512C))(this);
	}
	template <typename T = void> T OnScaleValueChange(float value) {
		return ((T (*)(SPTutorialEditController*, float))(Il2CppBase() + 0x42FAC18))(this, value);
	}
	template <typename T = void> T SetRepeatCommand() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42F5A50))(this);
	}
	template <typename T = void> T RepeatCommand() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FADB0))(this);
	}
	template <typename T = void> T SetFixCommand() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FAE58))(this);
	}
	template <typename T = void> T OnSelfShow() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42F4BD0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FAF48))(this);
	}
	template <typename T = void> T OnConfirm() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FB090))(this);
	}
	template <typename T = void> T SaveLocalConfig() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FB374))(this);
	}
	template <typename T = void> T OnJoyStickDragged(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FB47C))(this, msg);
	}
	template <typename T = void> T OnJoyStickPinchIn(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FB5FC))(this, msg);
	}
	template <typename T = void> T OnJoyStickPinchOut(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FB71C))(this, msg);
	}
	template <typename T = void> T OnJoyStickPinchEnd(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FB83C))(this, msg);
	}
	template <typename T = void> T OnJoyStickAlphaChanged(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FB95C))(this, msg);
	}
	template <typename T = void> T OnJoyStickDragStarted(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FBAE0))(this, msg);
	}
	template <typename T = void> T OnJoySticksSelected(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FBE18))(this, msg);
	}
	template <typename T = void> T OnJoySticksReset(uintptr_t msg) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FBF3C))(this, msg);
	}
	template <typename T = uintptr_t> T CreateEditableJoyStickButtonController(uintptr_t inCfg, uintptr_t inParent, uintptr_t inAnchor, bool inDisplay, int32_t inUserContext) {
		return ((T (*)(SPTutorialEditController*, uintptr_t, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x335FC0C))(this, inCfg, inParent, inAnchor, inDisplay, inUserContext);
	}
	template <typename T = void> T Select(uintptr_t view) {
		return ((T (*)(SPTutorialEditController*, uintptr_t))(Il2CppBase() + 0x42FBC90))(this, view);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FC008))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPTutorialEditController*))(Il2CppBase() + 0x42FC010))(this);
	}

};

}
