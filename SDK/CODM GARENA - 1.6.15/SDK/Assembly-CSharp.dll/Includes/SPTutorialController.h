#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPTutorialController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPTutorialController"));
	}

	template <typename T = uintptr_t> T& m_TutorialView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_EditorController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FireModeController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_RepeatTimes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& openDoorEvent() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPickUpSignParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectSettingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSettingSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowEditPosAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowEditScaleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowFingerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowFocusMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowOnlyGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSignTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeachOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeachOverBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenDoorClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnTeachOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeachEdit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRepeatCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepeatCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideTiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGiveGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRetryBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextStepBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAskRetry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkTargetsToUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeachAimTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaitForTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaitForTouchOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowOperateSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPickUpSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMoveSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowMoveLRSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowAimAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowRotAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowShootSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveSignLRBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowAimingShoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42EF02C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42EF0D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42EF648))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F016C))(this);
	}
	template <typename T = void> T OnFeedback(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F05A4))(this, msg);
	}
	template <typename T = void> T OnSwitchKnife(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F1020))(this, msg);
	}
	template <typename T = void> T SetPickUpSignParent(uintptr_t parent) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F1234))(this, parent);
	}
	template <typename T = void> T OnSelectSettingMode(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F1444))(this, msg);
	}
	template <typename T = void> T OnShowSettingSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F152C))(this, msg);
	}
	template <typename T = void> T OnShowEditPosAnim(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F18D8))(this, msg);
	}
	template <typename T = void> T OnShowEditScaleAnim(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F1AD4))(this, msg);
	}
	template <typename T = void> T OnShowFingerAnim(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F1CD0))(this, msg);
	}
	template <typename T = void> T OnShowFocusMask(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F2334))(this, msg);
	}
	template <typename T = void> T OnShowOnlyGroup(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F2D7C))(this, msg);
	}
	template <typename T = void> T OnShowSignTips(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F3978))(this, msg);
	}
	template <typename T = void> T OnTeachOver() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F4058))(this);
	}
	template <typename T = void> T OnTeachOverBtnClick() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F4160))(this);
	}
	template <typename T = void> T OnShowOpenDoor(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F41F8))(this, msg);
	}
	template <typename T = void> T OnHideOpenDoor(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F4418))(this, msg);
	}
	template <typename T = void> T OnOpenDoorClick() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F44E8))(this);
	}
	template <typename T = void> T OnTeachOver_1(uintptr_t _) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F45D0))(this, _);
	}
	template <typename T = void> T OnTeachEdit(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F467C))(this, msg);
	}
	template <typename T = void> T SetRepeatCommand() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F5B70))(this);
	}
	template <typename T = void> T RepeatCommand() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F5C90))(this);
	}
	template <typename T = void> T OnHideTiming(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F5D38))(this, msg);
	}
	template <typename T = void> T OnGiveGrenade(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F5F1C))(this, msg);
	}
	template <typename T = void> T OnRetryBtnClick() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F60F8))(this);
	}
	template <typename T = void> T OnNextStepBtnClick() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F6234))(this);
	}
	template <typename T = void> T OnAskRetry(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F6370))(this, msg);
	}
	template <typename T = void> T OnLinkTargetsToUI(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F667C))(this, msg);
	}
	template <typename T = void> T OnTeachAimTargets(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F70C8))(this, msg);
	}
	template <typename T = void> T OnWaitForTouch(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F734C))(this, msg);
	}
	template <typename T = void> T OnWaitForTouchOver(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F7494))(this, msg);
	}
	template <typename T = void> T OnShowOperateSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F77A0))(this, msg);
	}
	template <typename T = void> T OnFinishSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F78E8))(this, msg);
	}
	template <typename T = void> T OnShowPickUpSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F79A8))(this, msg);
	}
	template <typename T = void> T OnShowMoveSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F7BF4))(this, msg);
	}
	template <typename T = void> T OnShowMoveLRSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F83CC))(this, msg);
	}
	template <typename T = void> T OnShowAimAnim(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F85B0))(this, msg);
	}
	template <typename T = void> T OnShowRotAnim(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F8A98))(this, msg);
	}
	template <typename T = void> T OnShowShootSign(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F9548))(this, msg);
	}
	template <typename T = void> T MoveSignLRBtnClick(uintptr_t go) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F9758))(this, go);
	}
	template <typename T = void> T OnShowAimingShoot(uintptr_t msg) {
		return ((T (*)(SPTutorialController*, uintptr_t))(Il2CppBase() + 0x42F9870))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F9A90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F9A98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F9AA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SPTutorialController*))(Il2CppBase() + 0x42F9AA8))(this);
	}

};

}
