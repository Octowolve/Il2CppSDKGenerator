#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class AchievementPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "AchievementPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_AchievementListCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AchievementDataList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CurrentShowingAchievement() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheAchievementId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& OutSelectIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<int32_t>*> static T& ShowList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& ShowDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshConfirmLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentSelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FB404))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FB4D8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FB7B4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FBA28))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FBC3C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FBD14))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(AchievementPopController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x28FBDEC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T InitPendingAchievement(uintptr_t type) {
		return ((T (*)(AchievementPopController*, uintptr_t))(Il2CppBase() + 0x28FBEEC))(this, type);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(AchievementPopController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x28FC9F8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(AchievementPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x28FCDD4))(this, list, userContext);
	}
	template <typename T = void> T OnShowBtnClick(bool isShow) {
		return ((T (*)(AchievementPopController*, bool))(Il2CppBase() + 0x28FCEB8))(this, isShow);
	}
	template <typename T = void> T OnRefreshData(uintptr_t Msg) {
		return ((T (*)(AchievementPopController*, uintptr_t))(Il2CppBase() + 0x28FD294))(this, Msg);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FD3B8))(this);
	}
	template <typename T = void> T OnConfirmClick() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FD49C))(this);
	}
	template <typename T = void> T RefreshConfirmLabel() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FCB84))(this);
	}
	template <typename T = void> T SetCurrentSelectIndex(int32_t index) {
		return ((T (*)(AchievementPopController*, int32_t))(Il2CppBase() + 0x28FD818))(this, index);
	}
	template <typename T = bool> static T InitPendingAchievementm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28FD9F8))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28FDA24))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28FDA54))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28FDA84))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x28FDAB4))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FDAE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FDAEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FDAF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FDAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FDB04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(AchievementPopController*))(Il2CppBase() + 0x28FDB0C))(this);
	}

};

}
