#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabTypeList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& SettingsDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsBind() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPermitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFeedbackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefaultBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnLoginCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSettingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuestBindRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLinkBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBindingLinkTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBindingTipsSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFacebookLinked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGarenaLinked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLineLinked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLinkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x28862D8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x288637C))(this);
	}
	template <typename T = void> T InitSubController() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2886700))(this);
	}
	template <typename T = void> T SetRedPoint(uintptr_t type, bool isShow) {
		return ((T (*)(SettingsNewMainController*, uintptr_t, bool))(Il2CppBase() + 0x288695C))(this, type, isShow);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(SettingsNewMainController*, int32_t))(Il2CppBase() + 0x2886BA4))(this, tabIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x288719C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2887734))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2887B50))(this);
	}
	template <typename T = void> T OnPermitClick() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2888110))(this);
	}
	template <typename T = void> T OnPrivacyClick() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x288820C))(this);
	}
	template <typename T = void> T OnFeedbackBtnClick() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2888308))(this);
	}
	template <typename T = void> T OnDefaultBtnClick() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x288844C))(this);
	}
	template <typename T = void> T OnLogoutBtnClick() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x288853C))(this);
	}
	template <typename T = void> T OnReturnLoginCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(SettingsNewMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x2888720))(this, result, context);
	}
	template <typename T = void> T OnShowSettingTips(uintptr_t message) {
		return ((T (*)(SettingsNewMainController*, uintptr_t))(Il2CppBase() + 0x288882C))(this, message);
	}
	template <typename T = void> T OnInitTabs(uintptr_t message) {
		return ((T (*)(SettingsNewMainController*, uintptr_t))(Il2CppBase() + 0x2888AA8))(this, message);
	}
	template <typename T = void> T OnRestoreChange(uintptr_t msg) {
		return ((T (*)(SettingsNewMainController*, uintptr_t))(Il2CppBase() + 0x2888EC0))(this, msg);
	}
	template <typename T = void> T OnGuestBindRefresh(uintptr_t Msg) {
		return ((T (*)(SettingsNewMainController*, uintptr_t))(Il2CppBase() + 0x288805C))(this, Msg);
	}
	template <typename T = void> T RefreshLinkBtn() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2888FA4))(this);
	}
	template <typename T = void> T RefreshBindingLinkTips() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889080))(this);
	}
	template <typename T = void> T SetBindingTipsSize() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x28864E8))(this);
	}
	template <typename T = void> T ShowFacebookLinked() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889878))(this);
	}
	template <typename T = void> T ShowGarenaLinked() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889A04))(this);
	}
	template <typename T = void> T ShowLineLinked() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889B90))(this);
	}
	template <typename T = void> T OnLinkBtnClick() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889D1C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889E84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889E8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(SettingsNewMainController*, int32_t))(Il2CppBase() + 0x2889E94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889E9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889EA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsNewMainController*))(Il2CppBase() + 0x2889EAC))(this);
	}

};

}
