#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialViewOutGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialView_OutGame"));
	}

	template <typename T = uintptr_t> T& CommandRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ContentLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CommanderBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CommanderBG() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& FingerLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& FingerLabelBG() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FingerSign() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& FingerArrow() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& FakeBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& FingerLabelArrow() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& FingerLabelAnchor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& bSpeedUp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& DialogSpeedUpRemainTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> static T& DialogSpeedUpTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CONST_DIALOG_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& DialogInterval() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& MaskPic() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& MaskEdge() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MaskSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_FingerTipPosAfterCommander() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector2> T& m_FingerTipOffsetAfterCommander() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_ShowFingerAfterCommander() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_UnforceTouch() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = uintptr_t> T& m_FocusTrans() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_FocusParent() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_DialogCoroutine() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FignerList() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& m_FingerPos() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& m_FingerOffset() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& m_FocusScale() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_FocusPosition() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& m_FocusWorldPosition() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector3> T& m_NewLocalPosition() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& m_NewLocalScale() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& m_PassPrintDialog() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& TempParent() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& bShowEffect() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& bShowMask2() {
		return *(T*)((uintptr_t)this + 0x141);
	}
	template <typename T = uintptr_t> T& m_Mask2() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& m_NewContent() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& m_NewUILabel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& NewUILabelBG() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& NewMaskSprite() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_NewContentLeft() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& m_NewUILabelLeft() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& NewUILabelLeftBG() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraTempParents() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraFocusTrans() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraFocusParentTrans() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& extraFocusScales() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& extraFocusPositions() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& extraNewLocalPositions() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& LeftMan() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& LeftLabel() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& LeftCmdBtn() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppString*> static T& Play_ui_tutorial_mission_detail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Stop_ui_tutorial_mission_detail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDialogInterval3X() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewTipsPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommanderInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommander() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCommander() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFingerSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFocusTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExtraFocusTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowExtraFocusTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFocusTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFingerTipPostion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideFocusTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnForceTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveBackFinger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUnforceTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFingerLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustMaskSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = bool> T get_ShowFingerAfterCommander() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4232D4C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4244684))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x424468C))(this);
	}
	template <typename T = void> T AdjustDialogInterval3X(bool speedUp) {
		return ((T (*)(TutorialViewOutGame*, bool))(Il2CppBase() + 0x4232E18))(this, speedUp);
	}
	template <typename T = void> T SetNewTipsPosition(bool bShow, Il2CppVector2 offset, Il2CppVector2 size, int32_t newWidth) {
		return ((T (*)(TutorialViewOutGame*, bool, Il2CppVector2, Il2CppVector2, int32_t))(Il2CppBase() + 0x4236070))(this, bShow, offset, size, newWidth);
	}
	template <typename T = void> T SetCommanderInfo(Il2CppString* content, bool rightSide, Il2CppVector3 offset, uintptr_t config) {
		return ((T (*)(TutorialViewOutGame*, Il2CppString*, bool, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4244AD0))(this, content, rightSide, offset, config);
	}
	template <typename T = uintptr_t> T PrintDialog(float displayInterval, Il2CppString* content, uintptr_t config) {
		return ((T (*)(TutorialViewOutGame*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4244FA4))(this, displayInterval, content, config);
	}
	template <typename T = void> T ShowCommander(uintptr_t tutorialType, uintptr_t eventType, bool bShowFinger) {
		return ((T (*)(TutorialViewOutGame*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4234D44))(this, tutorialType, eventType, bShowFinger);
	}
	template <typename T = bool> T HideCommander() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4232A10))(this);
	}
	template <typename T = void> T ShowFingerSign(bool show, Il2CppVector3 position, Il2CppVector3 offset) {
		return ((T (*)(TutorialViewOutGame*, bool, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x42343F8))(this, show, position, offset);
	}
	template <typename T = void> T SetFocusTrans(uintptr_t go, uintptr_t parentGO) {
		return ((T (*)(TutorialViewOutGame*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4234670))(this, go, parentGO);
	}
	template <typename T = void> T SetExtraFocusTrans() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4234918))(this);
	}
	template <typename T = void> T ShowExtraFocusTrans() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4245FBC))(this);
	}
	template <typename T = void> T ShowFocusTrans(uintptr_t tipPos, Il2CppVector3 tipOffset) {
		return ((T (*)(TutorialViewOutGame*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x42450EC))(this, tipPos, tipOffset);
	}
	template <typename T = void> T UpdateFingerTipPostion(uintptr_t tipPos, Il2CppVector3 tipOffset) {
		return ((T (*)(TutorialViewOutGame*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x42467EC))(this, tipPos, tipOffset);
	}
	template <typename T = void> T HideFocusTrans() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x424565C))(this);
	}
	template <typename T = void> T CheckUnForceTouch() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4246520))(this);
	}
	template <typename T = void> T GiveBackFinger() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x42354F8))(this);
	}
	template <typename T = void> T CancelUnforceTouch() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4232738))(this);
	}
	template <typename T = void> T SetFingerLayer(int32_t depth) {
		return ((T (*)(TutorialViewOutGame*, int32_t))(Il2CppBase() + 0x42469CC))(this, depth);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TutorialViewOutGame*, float))(Il2CppBase() + 0x4246B64))(this, dt);
	}
	template <typename T = void> T AdjustMaskSize() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x4244800))(this);
	}
	template <typename T = void> T ShowMask(bool show, bool maskBlackShow, uintptr_t targetTransform, Il2CppVector2 center, Il2CppVector2 offset, Il2CppVector2 size, float perspectiveRotY, int32_t newWidth) {
		return ((T (*)(TutorialViewOutGame*, bool, bool, uintptr_t, Il2CppVector2, Il2CppVector2, Il2CppVector2, float, int32_t))(Il2CppBase() + 0x423570C))(this, show, maskBlackShow, targetTransform, center, offset, size, perspectiveRotY, newWidth);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialViewOutGame*))(Il2CppBase() + 0x42479A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TutorialViewOutGame*, float))(Il2CppBase() + 0x42479B0))(this, P0);
	}

};

}
