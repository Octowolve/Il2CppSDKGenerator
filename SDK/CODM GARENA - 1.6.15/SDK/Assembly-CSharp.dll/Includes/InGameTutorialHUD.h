#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InGameTutorialHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InGameTutorialHUD"));
	}

	template <typename T = uintptr_t> T& MaskBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MaskEdge() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WaitForTouchSign() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SettingTutorialAdvanceBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SettingTutorialSimpleBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& handAniObject() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SignRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SignTips() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SignBG() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TipsArrow() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ArrowUpSocket() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ArrowDownSocket() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ArrowLeftSocket() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ArrowRightSocket() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& FocusTransforms() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_tapToContinue() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_MaskEnabled() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& m_SendTutorialEventOnMaskClose() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = uintptr_t> T& m_TutorialEventType() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_tapToShowTips() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_Focus() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_FocusParent() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector3> T& m_FocusScale() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_SendTutorialEventOnFoucsClicked() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_TutorialEventOnFoucsClicked() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_Focus2() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_FocusParent2() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& m_FocusScale2() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_SendTutorialEventOnFoucsClicked2() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_TutorialEventOnFoucsClicked2() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& m_showTips() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& bLoopHandTips() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& startLoopTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& bHandTipLeft() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& cacheAdvanceTrans() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& cacheSimpleTrans() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLoopHandTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopLoopHandTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoopHandTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTutorialEventOnMaskClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHandTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettingTutorialAdvanceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettingTutorialSimpleBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTutorialBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTargetFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetFocus2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTargetFocus2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTutorialEventOnFocusClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFocusClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTutorialEventOnFocusClicked2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFocusClicked2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaskBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T get_MaskEnabled() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3176CEC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3176CF4))(this);
	}
	template <typename T = void> T StartLoopHandTips(uintptr_t advanceTrans, uintptr_t simpleTrans) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x317705C))(this, advanceTrans, simpleTrans);
	}
	template <typename T = void> T StopLoopHandTips() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3177128))(this);
	}
	template <typename T = void> T LoopHandTips() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3176DA4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x31774E8))(this);
	}
	template <typename T = void> T ShowMask(bool show, bool tapToContinue, bool transparent, uintptr_t target, Il2CppVector2 center, Il2CppVector2 size, bool pause, bool tapToShowTips) {
		return ((T (*)(InGameTutorialHUD*, bool, bool, bool, uintptr_t, Il2CppVector2, Il2CppVector2, bool, bool))(Il2CppBase() + 0x3177630))(this, show, tapToContinue, transparent, target, center, size, pause, tapToShowTips);
	}
	template <typename T = void> T SetTutorialEventOnMaskClose(uintptr_t eventType) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x3177D00))(this, eventType);
	}
	template <typename T = void> T ShowSignTips(bool show, float angle, Il2CppString* content, uintptr_t targetParent, Il2CppVector3 targetOffset, Il2CppVector3 contentOffset, uintptr_t arrowType, bool showFocus, bool showWithoutParent, bool showArrow) {
		return ((T (*)(InGameTutorialHUD*, bool, float, Il2CppString*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x3177DB0))(this, show, angle, content, targetParent, targetOffset, contentOffset, arrowType, showFocus, showWithoutParent, showArrow);
	}
	template <typename T = void> T ShowHandTips(bool show, uintptr_t targetParent, Il2CppVector3 targetOffset, bool showWithoutParent) {
		return ((T (*)(InGameTutorialHUD*, bool, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x317725C))(this, show, targetParent, targetOffset, showWithoutParent);
	}
	template <typename T = void> T ShowSettingTutorialAdvanceBtn(bool show, uintptr_t callback, uintptr_t targetParent, bool showWithoutParent) {
		return ((T (*)(InGameTutorialHUD*, bool, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x317843C))(this, show, callback, targetParent, showWithoutParent);
	}
	template <typename T = void> T ShowSettingTutorialSimpleBtn(bool show, uintptr_t callback, uintptr_t targetParent, bool showWithoutParent) {
		return ((T (*)(InGameTutorialHUD*, bool, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3178958))(this, show, callback, targetParent, showWithoutParent);
	}
	template <typename T = void> T SetTutorialBtn(uintptr_t SettingTutorialBtn, uintptr_t callback, bool show, uintptr_t targetParent, bool showWithoutParent) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x3178524))(this, SettingTutorialBtn, callback, show, targetParent, showWithoutParent);
	}
	template <typename T = void> T SetTargetFocus(uintptr_t trans) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x3178A40))(this, trans);
	}
	template <typename T = void> T ClearTargetFocus() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3177888))(this);
	}
	template <typename T = void> T SetTargetFocus2(uintptr_t trans) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x3178C0C))(this, trans);
	}
	template <typename T = void> T ClearTargetFocus2() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3177AC4))(this);
	}
	template <typename T = void> T SetTutorialEventOnFocusClicked(uintptr_t eventType) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x3178DD8))(this, eventType);
	}
	template <typename T = void> T OnFocusClicked(uintptr_t target) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x3178E88))(this, target);
	}
	template <typename T = void> T SetTutorialEventOnFocusClicked2(uintptr_t eventType) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x317909C))(this, eventType);
	}
	template <typename T = void> T OnFocusClicked2(uintptr_t target) {
		return ((T (*)(InGameTutorialHUD*, uintptr_t))(Il2CppBase() + 0x317914C))(this, target);
	}
	template <typename T = void> T OnMaskBtnClick() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3179360))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InGameTutorialHUD*))(Il2CppBase() + 0x3179804))(this);
	}

};

}
