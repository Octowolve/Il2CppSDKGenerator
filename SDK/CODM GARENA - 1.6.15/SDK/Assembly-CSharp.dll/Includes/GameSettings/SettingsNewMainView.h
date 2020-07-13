#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewMainView"));
	}

	template <typename T = uintptr_t> T& linkBindGrid() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& tabViewContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& tabBarPrefab() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& tabGrid() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& tabScrollView() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& subViewContainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& tweenAnimation() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PermitBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PrivacyBtn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& DefaultBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& HelpBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ExitBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TopLine() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LinkObject1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LinkObject2() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LinkBtn2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LinkBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& link_FX() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BindingTips() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BindingTipsContent() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BindingTipsBlock() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LinkedBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LinkedSprite() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LinkedLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LinkedCollider() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ToLeft() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ToRight() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& Parent() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CompareWidget() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& FirstWidget() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& LastWidget() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& TopRightGrid() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& Uno() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& Facebook() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& Line() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& Garena() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& Apple() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& Google() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& GameCenter() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> static T& SaveSensivityInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& lastTime() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& m_LastHeadSetDetectStatus() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSupportState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTabScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTopLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLinkBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLinkedBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLinkedBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshLinkBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x2889EB4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x2889EBC))(this);
	}
	template <typename T = void> T SetSupportState() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x28826F8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SettingsNewMainView*, float))(Il2CppBase() + 0x2889EC4))(this, dt);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x288A3E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x288A540))(this);
	}
	template <typename T = void> T ResetTabScrollView() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x28825D0))(this);
	}
	template <typename T = void> T HideTopLine(bool bHide) {
		return ((T (*)(SettingsNewMainView*, bool))(Il2CppBase() + 0x288114C))(this, bHide);
	}
	template <typename T = int32_t> T GetPanelDepth() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x288A69C))(this);
	}
	template <typename T = void> T ResetTab() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x287FBB4))(this);
	}
	template <typename T = void> T SetTab(uintptr_t type, bool bFirst, bool bLast) {
		return ((T (*)(SettingsNewMainView*, uintptr_t, bool, bool))(Il2CppBase() + 0x287FFF4))(this, type, bFirst, bLast);
	}
	template <typename T = void> T RefreshTabs() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x2880364))(this);
	}
	template <typename T = void> T RefreshLinkBtn(bool isShow) {
		return ((T (*)(SettingsNewMainView*, bool))(Il2CppBase() + 0x288A980))(this, isShow);
	}
	template <typename T = void> T ResetLinkedBtn() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x2887EDC))(this);
	}
	template <typename T = void> T RefreshLinkedBtn(Il2CppList<uintptr_t>* list, bool isEnableBind) {
		return ((T (*)(SettingsNewMainView*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x28893F0))(this, list, isEnableBind);
	}
	template <typename T = void> T RefreshLinkBtn_1(uintptr_t data) {
		return ((T (*)(SettingsNewMainView*, uintptr_t))(Il2CppBase() + 0x288AA88))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SettingsNewMainView*, float))(Il2CppBase() + 0x288AC8C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x288AC94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SettingsNewMainView*))(Il2CppBase() + 0x288AC9C))(this);
	}

};

}
