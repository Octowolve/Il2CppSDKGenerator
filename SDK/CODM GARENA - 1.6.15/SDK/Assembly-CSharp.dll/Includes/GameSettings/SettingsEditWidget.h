#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditWidget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditWidget"));
	}

	template <typename T = uintptr_t> T& EdittingContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EdittingContainerChild() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EdittingMask() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& HideMask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ChangeObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& adjustiveBoxCollider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsChange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_UIRoot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& settingsEditViewPostion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mSelected() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mMinScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& mMaxScale() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& mDefScale() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mDisplayBtn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& mCanHideBtn() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = float> T& m_MinAlpha() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_MaxAlpha() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_DefAlpha() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& Anchor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_ScreenScale() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& leftTopLocalPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& rightTopLocalPos() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& leftBottomLocalPos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& rightBottomLocalPos() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncViewWithMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewWithMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveModeFromView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherEditWidgetChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEdittingSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyWidgetScaleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckObjChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWidgetBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBoundsPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFullInsideScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDragToCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInsideScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsPointInsideScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoAdjustLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_AdjustiveBoxCollider() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257CDAC))(this);
	}
	template <typename T = void> T set_Mode(uintptr_t value) {
		return ((T (*)(SettingsEditWidget*, uintptr_t))(Il2CppBase() + 0x257C0B4))(this, value);
	}
	template <typename T = uintptr_t> T get_Mode() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257F31C))(this);
	}
	template <typename T = bool> T get_CanHorizentalMove() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257FAA0))(this);
	}
	template <typename T = bool> T get_CanVerticalMove() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257FAA8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257FAB0))(this);
	}
	template <typename T = void> T SyncViewWithMode() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257C0BC))(this);
	}
	template <typename T = void> T ResetViewWithMode() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2576A9C))(this);
	}
	template <typename T = void> T SaveModeFromView() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257566C))(this);
	}
	template <typename T = void> T OnOtherEditWidgetChange(uintptr_t srcWidget, Il2CppVector3 targetPos, Il2CppVector3 boxCenter, Il2CppVector3 boxSize) {
		return ((T (*)(SettingsEditWidget*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x258047C))(this, srcWidget, targetPos, boxCenter, boxSize);
	}
	template <typename T = void> T SetEdittingSelected(bool selected) {
		return ((T (*)(SettingsEditWidget*, bool))(Il2CppBase() + 0x2580568))(this, selected);
	}
	template <typename T = float> T get_Scale() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DBE0))(this);
	}
	template <typename T = void> T set_Scale(float value) {
		return ((T (*)(SettingsEditWidget*, float))(Il2CppBase() + 0x257E050))(this, value);
	}
	template <typename T = bool> T get_DisplayBtn() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DD20))(this);
	}
	template <typename T = void> T set_DisplayBtn(bool value) {
		return ((T (*)(SettingsEditWidget*, bool))(Il2CppBase() + 0x257E874))(this, value);
	}
	template <typename T = bool> T get_CanHideBtn() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2575E6C))(this);
	}
	template <typename T = void> T set_CanHideBtn(bool value) {
		return ((T (*)(SettingsEditWidget*, bool))(Il2CppBase() + 0x2580120))(this, value);
	}
	template <typename T = float> T get_DefaultScale() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DC24))(this);
	}
	template <typename T = float> T get_MinScale() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DBD8))(this);
	}
	template <typename T = float> T get_MaxScale() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DBD0))(this);
	}
	template <typename T = float> T get_DefAlpha() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2580674))(this);
	}
	template <typename T = float> T get_MinAlpha() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DC34))(this);
	}
	template <typename T = float> T get_MaxAlpha() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DC2C))(this);
	}
	template <typename T = float> T get_Alpha() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x257DC3C))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(SettingsEditWidget*, float))(Il2CppBase() + 0x257E4A0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Position() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2580414))(this);
	}
	template <typename T = void> T set_IsChange(bool value) {
		return ((T (*)(SettingsEditWidget*, bool))(Il2CppBase() + 0x257E18C))(this, value);
	}
	template <typename T = bool> T get_IsChange() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2575664))(this);
	}
	template <typename T = void> T OnWidgetClick(uintptr_t go, bool isPress) {
		return ((T (*)(SettingsEditWidget*, uintptr_t, bool))(Il2CppBase() + 0x258067C))(this, go, isPress);
	}
	template <typename T = void> T OnWidgetDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(SettingsEditWidget*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2580AB4))(this, go, delta);
	}
	template <typename T = void> T NotifyWidgetScaleChange() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2581068))(this);
	}
	template <typename T = void> T CheckObjChange() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x258014C))(this);
	}
	template <typename T = void> T UpdateWidgetBoxCollider() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x25808AC))(this);
	}
	template <typename T = void> T InitBoundsPosition() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x25814C0))(this);
	}
	template <typename T = bool> T IsFullInsideScreen(Il2CppVector3 localCenterPos) {
		return ((T (*)(SettingsEditWidget*, Il2CppVector3))(Il2CppBase() + 0x2580CC8))(this, localCenterPos);
	}
	template <typename T = bool> T IsDragToCenter(Il2CppVector3 deltaDirection) {
		return ((T (*)(SettingsEditWidget*, Il2CppVector3))(Il2CppBase() + 0x2580E2C))(this, deltaDirection);
	}
	template <typename T = bool> T IsPointInsideScreen(Il2CppVector3 localPos) {
		return ((T (*)(SettingsEditWidget*, Il2CppVector3))(Il2CppBase() + 0x25819C0))(this, localPos);
	}
	template <typename T = bool> T IsPointInsideScreen_1(Il2CppVector3 centerLocalPos, float width, float height) {
		return ((T (*)(SettingsEditWidget*, Il2CppVector3, float, float))(Il2CppBase() + 0x2581768))(this, centerLocalPos, width, height);
	}
	template <typename T = void> T AutoAdjustLocation() {
		return ((T (*)(SettingsEditWidget*))(Il2CppBase() + 0x2581114))(this);
	}

};

}
