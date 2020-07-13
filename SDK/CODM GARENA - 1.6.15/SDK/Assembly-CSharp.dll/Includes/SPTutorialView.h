#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPTutorialView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPTutorialView"));
	}

	template <typename T = uintptr_t> T& MoveSign() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MoveSignLR() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MoveSignLRBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ShootSign() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PickupWeaponSign() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& OperateSign() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EditSign_Scale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& EditSign_Pos() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RotSign() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Rot_LeftSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Rot_RightSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& WaitForTouchSign() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& FingerAnim_Fire() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& FingerAnim_Move() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& FingerAnim_RotLeft() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FingerAnim_RotRight() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& FingerAnim_Aim() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& SignTips() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SignBG() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& TipsArrow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ArrowUpSocket() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ArrowDownSocket() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ArrowLeftSocket() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ArrowRightSocket() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SignTipsFocusGO() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& AskRetryMessage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& RetryContent() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& RetryBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& NextStepBtn() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& MaskEdge() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& SensitivitySetting() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AimTutorTargetList() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& AnimTutorDisappear() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LineList() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& SignSpriteGO() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& FingerLabel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& FingerLabelBG() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& FingerSign() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& FakeBtn() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FingerLabelArrow() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& FingerLabelAnchor() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& TeachEditMask() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& TeachEditBtnGO() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& StepSprite_1() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& StepSprite_2() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& TeachOverBtn() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AnimSignTips() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& PickUpSign() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& TimingRoot() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RecordLabelList() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& TeachFinishGO() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& TeachFinishBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& PauseBtnTutorial() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& OpenDoorRootObject() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& OpenDoorButton() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& FlashingGo() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_AimTutorTargetPosList() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppString*> T& HitAimTargetSound() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& m_RotType() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_RotTarget() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& m_IsShowingRotSign() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& m_RotAttackTarget() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_LastShowTime() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SignList() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& m_IsSniperInZomming() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& m_ShowingSettingSign() {
		return *(T*)((uintptr_t)this + 0x185);
	}
	template <typename T = uintptr_t> T& m_SettingsController() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& m_ShowSettingSignFinished() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = bool> T& m_CanShowFingerAnim() {
		return *(T*)((uintptr_t)this + 0x18D);
	}
	template <typename T = uintptr_t> T& m_PauseHUD() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& m_DialogHUD() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = bool> T& m_ShowAimTutorialTarget() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& m_showAimingShoot() {
		return *(T*)((uintptr_t)this + 0x199);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettingSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSettingSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEditScaleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEditPosAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFingerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowFingerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUIToUIGOLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUIToWorldGOLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowUIToWorldGOLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAimTutorTargetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAimTutorTargetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimTutorTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimationSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowRotSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRotSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimSignTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowRotSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeReportCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimeRecordRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSniperZoomingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimingVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFingerTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFingerTipPostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAimingShoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimingShoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = bool> T get_CanShowFingerAnim() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42F219C))(this);
	}
	template <typename T = void> T set_CanShowFingerAnim(bool value) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F1F38))(this, value);
	}
	template <typename T = void> T ShowSettingSign() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42F1700))(this);
	}
	template <typename T = void> T UpdateSettingSign() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FC21C))(this);
	}
	template <typename T = void> T BeginSign() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FC14C))(this);
	}
	template <typename T = void> T EndSign() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FC7C4))(this);
	}
	template <typename T = void> T UpdateSignPosition(Il2CppVector3 position) {
		return ((T (*)(SPTutorialView*, Il2CppVector3))(Il2CppBase() + 0x42FC894))(this, position);
	}
	template <typename T = void> T ShowEditScaleAnim(bool show) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F1C08))(this, show);
	}
	template <typename T = void> T ShowEditPosAnim(bool show) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F1A0C))(this, show);
	}
	template <typename T = void> T ShowFingerAnim(Il2CppString* animName) {
		return ((T (*)(SPTutorialView*, Il2CppString*))(Il2CppBase() + 0x42F1F40))(this, animName);
	}
	template <typename T = void> T ShowFingerAnim_1(uintptr_t animType) {
		return ((T (*)(SPTutorialView*, uintptr_t))(Il2CppBase() + 0x42F8270))(this, animType);
	}
	template <typename T = void> T ShowMask(bool show, Il2CppString* targetName, Il2CppVector2 center, Il2CppVector2 size, bool useMask) {
		return ((T (*)(SPTutorialView*, bool, Il2CppString*, Il2CppVector2, Il2CppVector2, bool))(Il2CppBase() + 0x42F26C4))(this, show, targetName, center, size, useMask);
	}
	template <typename T = void> T ShowSignTips(Il2CppString* content, bool show, Il2CppString* targetName, Il2CppVector3 targetOffset, uintptr_t arrowType, bool focus) {
		return ((T (*)(SPTutorialView*, Il2CppString*, bool, Il2CppString*, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x42F3CB4))(this, content, show, targetName, targetOffset, arrowType, focus);
	}
	template <typename T = void> T SetTipsDepth(int32_t depth) {
		return ((T (*)(SPTutorialView*, int32_t))(Il2CppBase() + 0x42F3710))(this, depth);
	}
	template <typename T = void> T ShowUIToUIGOLine(uintptr_t uiGO, Il2CppVector3 uiOffset, Il2CppVector3 targetOffset, uintptr_t target, bool show, bool showOnlyActive) {
		return ((T (*)(SPTutorialView*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, bool, bool))(Il2CppBase() + 0x42F6C58))(this, uiGO, uiOffset, targetOffset, target, show, showOnlyActive);
	}
	template <typename T = void> T ShowUIToWorldGOLine(uintptr_t uiGO, Il2CppVector3 uiOffset, Il2CppVector3 targetOffset, Il2CppArray<uintptr_t>* targets, bool show, bool showOnlyActive) {
		return ((T (*)(SPTutorialView*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, bool, bool))(Il2CppBase() + 0x42F6E60))(this, uiGO, uiOffset, targetOffset, targets, show, showOnlyActive);
	}
	template <typename T = void> T ShowUIToWorldGOLine_1(int32_t index, uintptr_t uiGO, Il2CppVector3 uiOffset, Il2CppVector3 targetOffset, uintptr_t worldGO, bool showOnlyActive) {
		return ((T (*)(SPTutorialView*, int32_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x42FC998))(this, index, uiGO, uiOffset, targetOffset, worldGO, showOnlyActive);
	}
	template <typename T = void> T HideLine(int32_t index) {
		return ((T (*)(SPTutorialView*, int32_t))(Il2CppBase() + 0x42FCBE8))(this, index);
	}
	template <typename T = void> T InitAimTutorTargetList() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42F9168))(this);
	}
	template <typename T = void> T ShowAimTutorTargetList(bool show) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F71FC))(this, show);
	}
	template <typename T = void> T UpdateAimTutorTarget() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FCD88))(this);
	}
	template <typename T = void> T FinishSign() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42F75D0))(this);
	}
	template <typename T = void> T SetTargetPosition(uintptr_t target, Il2CppString* socketName, Il2CppVector3 offset, Il2CppVector3 defaultPos) {
		return ((T (*)(SPTutorialView*, uintptr_t, Il2CppString*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x42F7E20))(this, target, socketName, offset, defaultPos);
	}
	template <typename T = void> T ShowAnimationSign(uintptr_t signGO, bool show) {
		return ((T (*)(SPTutorialView*, uintptr_t, bool))(Il2CppBase() + 0x42F808C))(this, signGO, show);
	}
	template <typename T = void> T SetShowRotSign(bool show) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F90C0))(this, show);
	}
	template <typename T = void> T ShowRotSign(uintptr_t rotTarget) {
		return ((T (*)(SPTutorialView*, uintptr_t))(Il2CppBase() + 0x42F8F70))(this, rotTarget);
	}
	template <typename T = void> T ShowAnimSignTips(bool show) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F21A4))(this, show);
	}
	template <typename T = void> T ShowRotSign_1(uintptr_t rotType) {
		return ((T (*)(SPTutorialView*, uintptr_t))(Il2CppBase() + 0x42F87B0))(this, rotType);
	}
	template <typename T = void> T SetTimeReportCallback() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42EF560))(this);
	}
	template <typename T = void> T OnTimeRecordRefresh() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FD490))(this);
	}
	template <typename T = void> T UpdateTimeLabel() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FD7C4))(this);
	}
	template <typename T = void> T UpdateRotSign() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FDA38))(this);
	}
	template <typename T = void> T UpdateSniperZoomingTips() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FE658))(this);
	}
	template <typename T = void> T SetTimingVisible(bool visible) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F5DFC))(this, visible);
	}
	template <typename T = void> T UpdateSignList() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FEBAC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FEE54))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SPTutorialView*, float))(Il2CppBase() + 0x42FEE5C))(this, dt);
	}
	template <typename T = void> T ShowFingerTips(bool show, Il2CppString* content, uintptr_t tipPos, Il2CppVector3 position) {
		return ((T (*)(SPTutorialView*, bool, Il2CppString*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x42F5218))(this, show, content, tipPos, position);
	}
	template <typename T = void> T UpdateFingerTipPostion(uintptr_t tipPos, Il2CppVector3 tipOffset) {
		return ((T (*)(SPTutorialView*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x42FF368))(this, tipPos, tipOffset);
	}
	template <typename T = void> T ShowAimingShoot(bool show) {
		return ((T (*)(SPTutorialView*, bool))(Il2CppBase() + 0x42F99A4))(this, show);
	}
	template <typename T = void> T UpdateAimingShoot() {
		return ((T (*)(SPTutorialView*))(Il2CppBase() + 0x42FEF30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SPTutorialView*, float))(Il2CppBase() + 0x42FF8F4))(this, P0);
	}

};

}
