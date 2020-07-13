#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoHistoryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoHistoryController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mHistoryListCtrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mHistoryList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mPersonalinfoDs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsRefresData() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& mIsHideInfo() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPrivacyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyOffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetHideInfoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D064B8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D0655C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D0688C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D06CB8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D0703C))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D071E4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D07850))(this);
	}
	template <typename T = void> T OnPVPGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t))(Il2CppBase() + 0x1D078F8))(this, obj);
	}
	template <typename T = void> T OnBRGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t))(Il2CppBase() + 0x1D07B2C))(this, obj);
	}
	template <typename T = void> T OnPVEGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t))(Il2CppBase() + 0x1D07D60))(this, obj);
	}
	template <typename T = void> T SetState(bool bRefresh) {
		return ((T (*)(PersonalInfoHistoryController*, bool))(Il2CppBase() + 0x1D07368))(this, bRefresh);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1D081F0))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1D082C0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t, int32_t))(Il2CppBase() + 0x1D08ACC))(this, list, userContext);
	}
	template <typename T = void> T RefreshPrivacyState(bool isHide, bool IsMe) {
		return ((T (*)(PersonalInfoHistoryController*, bool, bool))(Il2CppBase() + 0x1D07F94))(this, isHide, IsMe);
	}
	template <typename T = void> T OnPrivacyOnClick() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D08C88))(this);
	}
	template <typename T = void> T OnPrivacyOffClick() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D08DAC))(this);
	}
	template <typename T = void> T OnSetHideInfoCallBack(uintptr_t Msg) {
		return ((T (*)(PersonalInfoHistoryController*, uintptr_t))(Il2CppBase() + 0x1D08ED0))(this, Msg);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D09208))(this);
	}
	template <typename T = void> static T WillTabShowm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D093BC))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D094C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D094CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D094D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D094DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D094E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PersonalInfoHistoryController*))(Il2CppBase() + 0x1D094EC))(this);
	}

};

}
