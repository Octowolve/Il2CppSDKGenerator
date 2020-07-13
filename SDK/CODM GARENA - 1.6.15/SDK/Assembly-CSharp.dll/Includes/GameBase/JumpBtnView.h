#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JumpBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JumpBtnView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& ClimbNextTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_currentStateScale() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& mSlicedFactor() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& isPressed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& LongTouchTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& LongTouchInterval() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Container2() {
		return *(T*)((uintptr_t)this + 0xB4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Jump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpButtonDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LongTouchJumpButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E1FF8C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20118))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20120))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20134))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E204BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20600))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20744))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20818))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E208B8))(this);
	}
	template <typename T = void> T NotifyClicked() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20958))(this);
	}
	template <typename T = bool> T Jump() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E20BBC))(this);
	}
	template <typename T = void> T JumpButtonClick(uintptr_t obj) {
		return ((T (*)(JumpBtnView*, uintptr_t))(Il2CppBase() + 0x2E20C68))(this, obj);
	}
	template <typename T = void> T JumpButtonDoubleClick(uintptr_t obj) {
		return ((T (*)(JumpBtnView*, uintptr_t))(Il2CppBase() + 0x2E20FC4))(this, obj);
	}
	template <typename T = void> T JumpButtonPress(uintptr_t go, bool state) {
		return ((T (*)(JumpBtnView*, uintptr_t, bool))(Il2CppBase() + 0x2E21124))(this, go, state);
	}
	template <typename T = void> T LongTouchJumpButton() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21488))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(JumpBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2E216AC))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(JumpBtnView*, uintptr_t))(Il2CppBase() + 0x2E21920))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A30))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A34))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(JumpBtnView*))(Il2CppBase() + 0x2E21A38))(this);
	}

};

}
