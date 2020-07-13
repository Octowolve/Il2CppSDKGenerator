#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewPhraseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewPhraseController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& dragListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& configListController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& configCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bAdjusted() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSpecialVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshViewAboutEdit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshViewAboutDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshViewAboutConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCachePhraseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEditButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConfigScrollViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhraseTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleBackgroundButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomEditButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomDefaultButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomCancellButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBottomConfirmButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfigScrollViewTab1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfigScrollViewTab2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfigScrollViewTab3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288DA88))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288DB2C))(this);
	}
	template <typename T = void> T ProcessSpecialVersion() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288DCD0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288E40C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288E8C4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SettingsNewPhraseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x288EC34))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288F6B8))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288DEC4))(this);
	}
	template <typename T = void> T RefreshAllView() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288F9F8))(this);
	}
	template <typename T = void> T RefreshViewAboutEdit() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288FD34))(this);
	}
	template <typename T = void> T RefreshViewAboutDrag(bool ifReset) {
		return ((T (*)(SettingsNewPhraseController*, bool))(Il2CppBase() + 0x288EE6C))(this, ifReset);
	}
	template <typename T = void> T RefreshViewAboutConfig(bool bRefresh) {
		return ((T (*)(SettingsNewPhraseController*, bool))(Il2CppBase() + 0x288F074))(this, bRefresh);
	}
	template <typename T = void> T SetCachePhraseType(uintptr_t t) {
		return ((T (*)(SettingsNewPhraseController*, uintptr_t))(Il2CppBase() + 0x288F8F4))(this, t);
	}
	template <typename T = void> T SetEditButtonState() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288FDD8))(this);
	}
	template <typename T = void> T SetConfigScrollViewData(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(SettingsNewPhraseController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28902F4))(this, dataList);
	}
	template <typename T = void> T OnPhraseTypeChange(uintptr_t msg) {
		return ((T (*)(SettingsNewPhraseController*, uintptr_t))(Il2CppBase() + 0x28904D0))(this, msg);
	}
	template <typename T = void> T OnTitleButtonClick() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x28905EC))(this);
	}
	template <typename T = void> T OnTitleBackgroundButtonClick() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x288FC30))(this);
	}
	template <typename T = void> T OnBottomEditButtonClick() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x28907E4))(this);
	}
	template <typename T = void> T OnBottomDefaultButtonClick() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x28908B4))(this);
	}
	template <typename T = void> T OnBottomCancellButtonClick() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x28906F8))(this);
	}
	template <typename T = void> T OnBottomConfirmButtonClick() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2890988))(this);
	}
	template <typename T = void> T OnConfigScrollViewTab1() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2890220))(this);
	}
	template <typename T = void> T OnConfigScrollViewTab2(int32_t index) {
		return ((T (*)(SettingsNewPhraseController*, int32_t))(Il2CppBase() + 0x2890B94))(this, index);
	}
	template <typename T = void> T OnConfigScrollViewTab3(int32_t index) {
		return ((T (*)(SettingsNewPhraseController*, int32_t))(Il2CppBase() + 0x2890C70))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2890D4C))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewPhraseController*, int32_t))(Il2CppBase() + 0x2890DEC))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewPhraseController*, uintptr_t))(Il2CppBase() + 0x2891174))(this, message);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2890A80))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2891318))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x289145C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2891464))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x289146C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x2891474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewPhraseController*))(Il2CppBase() + 0x289147C))(this);
	}

};

}
