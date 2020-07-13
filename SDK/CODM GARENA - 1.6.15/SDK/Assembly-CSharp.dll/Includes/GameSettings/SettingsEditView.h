#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditView"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ResetButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ConfirmButton() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BGMask() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& expandPanel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& shrinkPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& JoyStickWidgets() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& HUDWidgets() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DefaultWidget() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& WidgetsContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BottomLeft() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& Left() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TopLeft() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Top() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TopRight() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Right() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BottomRight() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Bottom() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Center() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_CurChangeWidget() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& cachedSwitchSprint() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& cachedMovementJoy() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& dropListeners() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector2> T& delta() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSettingsEditWidgetFromMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitialSpecialWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSwitchSprintLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DropListenTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideZoomSliderBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideAlphaSliderBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideMoveBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideDisplayBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnZoomSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAlphaSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisplayBtnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkrinkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExpandBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoveBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireModeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257B35C))(this);
	}
	template <typename T = void> T ConfigureWidgets(Il2CppList<uintptr_t>* wmodes) {
		return ((T (*)(SettingsEditView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x25748A8))(this, wmodes);
	}
	template <typename T = uintptr_t> T ParseAnchor(uintptr_t anchor) {
		return ((T (*)(SettingsEditView*, uintptr_t))(Il2CppBase() + 0x257BCFC))(this, anchor);
	}
	template <typename T = uintptr_t> T CreateSettingsEditWidgetFromMode(uintptr_t mode, uintptr_t assetID, uintptr_t parent) {
		return ((T (*)(SettingsEditView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x257BE24))(this, mode, assetID, parent);
	}
	template <typename T = void> T InitialSpecialWidget() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257C438))(this);
	}
	template <typename T = void> T UpdateSwitchSprintLimit() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x2576F2C))(this);
	}
	template <typename T = void> T DropListenTo(uintptr_t asset, uintptr_t widget) {
		return ((T (*)(SettingsEditView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x257C8A8))(this, asset, widget);
	}
	template <typename T = void> T OnWidgetDrop(uintptr_t msg) {
		return ((T (*)(SettingsEditView*, uintptr_t))(Il2CppBase() + 0x2576390))(this, msg);
	}
	template <typename T = void> T ShowOrHideScrollBar(bool isShow, uintptr_t widget) {
		return ((T (*)(SettingsEditView*, bool, uintptr_t))(Il2CppBase() + 0x2575D08))(this, isShow, widget);
	}
	template <typename T = void> T ShowOrHideZoomSliderBar(bool isShow, uintptr_t widget) {
		return ((T (*)(SettingsEditView*, bool, uintptr_t))(Il2CppBase() + 0x257CF24))(this, isShow, widget);
	}
	template <typename T = void> T ShowOrHideAlphaSliderBar(bool isShow, uintptr_t widget) {
		return ((T (*)(SettingsEditView*, bool, uintptr_t))(Il2CppBase() + 0x257D358))(this, isShow, widget);
	}
	template <typename T = void> T ShowOrHideMoveBtn(bool isShow, uintptr_t widget) {
		return ((T (*)(SettingsEditView*, bool, uintptr_t))(Il2CppBase() + 0x257D778))(this, isShow, widget);
	}
	template <typename T = void> T ShowOrHideDisplayBtn(bool isShow, uintptr_t widget) {
		return ((T (*)(SettingsEditView*, bool, uintptr_t))(Il2CppBase() + 0x2575E74))(this, isShow, widget);
	}
	template <typename T = void> T OnBtnZoomSliderChange() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257DD28))(this);
	}
	template <typename T = void> T OnBtnAlphaSliderChange() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257E194))(this);
	}
	template <typename T = void> T OnDisplayBtnChange() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257E6D0))(this);
	}
	template <typename T = void> T OnSkrinkBtnClick() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257E980))(this);
	}
	template <typename T = void> T OnExpandBtnClick() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257EBA4))(this);
	}
	template <typename T = void> T OnUpMove() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257EDC8))(this);
	}
	template <typename T = void> T OnDownMove() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257EFF0))(this);
	}
	template <typename T = void> T OnLeftMove() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257F0AC))(this);
	}
	template <typename T = void> T OnRightMove() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257F168))(this);
	}
	template <typename T = void> T OnMoveBtn(Il2CppVector2 delta) {
		return ((T (*)(SettingsEditView*, Il2CppVector2))(Il2CppBase() + 0x257EE84))(this, delta);
	}
	template <typename T = void> T SetFireModeName() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257434C))(this);
	}
	template <typename T = bool> static T InitialSpecialWidgetm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x257F224))(0, it);
	}
	template <typename T = bool> static T InitialSpecialWidgetm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x257F324))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SettingsEditView*))(Il2CppBase() + 0x257F41C))(this);
	}

};

}
