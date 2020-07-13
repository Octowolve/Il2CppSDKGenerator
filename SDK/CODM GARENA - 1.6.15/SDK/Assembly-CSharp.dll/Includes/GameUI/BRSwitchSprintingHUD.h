#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSwitchSprintingHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSwitchSprintingHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SprintingSwitchCollider() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SprintingSwitchWidget() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SprintWg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& FastStandWg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SprintNor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SprintHigh() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& FastStandNor() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& FastStandHigh() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& PlayingAnimatorIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& bHoverOnce() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& CurrentTouchPos() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& CurrentTouchOffset() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MoveBtnTransform() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector2> T& movementInputPos() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> static T& emulatorAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& settingOriginLocalPos() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& lastYOffset() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& m_IsLastLockSprint() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& IsLastFastStanding() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& IsInRange() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwimStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFastStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyShowSprintBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFastStanding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSprintSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchSprintingBtnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockSprinte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickByInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HoverOnBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseMoveTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetOriginScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPanelTransformEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC0164))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC016C))(this);
	}
	template <typename T = uintptr_t> T get_MoveJoySticksTransform() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC017C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC02E0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC050C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC0664))(this);
	}
	template <typename T = void> T OnSwimStateChanged(uintptr_t Msg) {
		return ((T (*)(BRSwitchSprintingHUD*, uintptr_t))(Il2CppBase() + 0x3DC0734))(this, Msg);
	}
	template <typename T = void> T OnFastStand(uintptr_t Msg) {
		return ((T (*)(BRSwitchSprintingHUD*, uintptr_t))(Il2CppBase() + 0x3DC0BC0))(this, Msg);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC1010))(this);
	}
	template <typename T = void> T NotifyShowSprintBtn(uintptr_t Msg) {
		return ((T (*)(BRSwitchSprintingHUD*, uintptr_t))(Il2CppBase() + 0x3DC1164))(this, Msg);
	}
	template <typename T = bool> T IsFastStanding() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC0DB8))(this);
	}
	template <typename T = void> T SetNormal(bool isNormal) {
		return ((T (*)(BRSwitchSprintingHUD*, bool))(Il2CppBase() + 0x3DC1418))(this, isNormal);
	}
	template <typename T = void> T ResetSprintSprite() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC07E0))(this);
	}
	template <typename T = void> T SetSwitchSprintingBtnPos() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC154C))(this);
	}
	template <typename T = bool> T IsLockSprinte() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC1E08))(this);
	}
	template <typename T = void> T TickByInput() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC2010))(this);
	}
	template <typename T = void> T CheckEffect() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC2888))(this);
	}
	template <typename T = void> T CheckHover() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC236C))(this);
	}
	template <typename T = void> T HoverOnBtn() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC2D2C))(this);
	}
	template <typename T = void> T ReleaseMoveTouch() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC2DD0))(this);
	}
	template <typename T = void> T StartSprinting() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC2EA8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC2278))(this);
	}
	template <typename T = void> T ResetOriginScreenPos() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC3204))(this);
	}
	template <typename T = void> T ResetPanelTransformEnd() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC34C8))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRSwitchSprintingHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3DC3578))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRSwitchSprintingHUD*, uintptr_t))(Il2CppBase() + 0x3DC36EC))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC37DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC37E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC37EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC37F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetPanelTransformEnd() {
		return ((T (*)(BRSwitchSprintingHUD*))(Il2CppBase() + 0x3DC37FC))(this);
	}

};

}
