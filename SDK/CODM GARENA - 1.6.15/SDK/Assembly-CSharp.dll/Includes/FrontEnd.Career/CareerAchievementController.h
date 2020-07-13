#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerAchievementController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerAchievementController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_AchievementListCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AchievementDataList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CurrentShowingAchievement() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheAchievementId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> static T& Achievementcount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_HideThisPVE() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnALLGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnENTGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGotNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAchievementCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipAchievementResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPersonalInfoGameTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FE488))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FE55C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FE8C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FE99C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FEEC0))(this);
	}
	template <typename T = void> T OnALLGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x28FF074))(this, obj);
	}
	template <typename T = void> T OnPVPGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x28FF454))(this, obj);
	}
	template <typename T = void> T OnBRGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x28FF5D8))(this, obj);
	}
	template <typename T = void> T OnPVEGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x28FF75C))(this, obj);
	}
	template <typename T = void> T OnENTGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x28FF8E0))(this, obj);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FFA64))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x28FFB3C))(this);
	}
	template <typename T = void> T RequestGetAchievement() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2900B04))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CareerAchievementController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2900C40))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshGotNum() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2900D90))(this);
	}
	template <typename T = Il2CppString*> T GetAchievementCount() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2901058))(this);
	}
	template <typename T = void> T InitPendingAchievement(uintptr_t type) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x28FFCE4))(this, type);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CareerAchievementController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2901580))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CareerAchievementController*, uintptr_t, int32_t))(Il2CppBase() + 0x2901C30))(this, list, userContext);
	}
	template <typename T = void> T OnShowBtnClick() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2901D14))(this);
	}
	template <typename T = void> T OnEquipAchievementResponse(uintptr_t Msg) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x2901DDC))(this, Msg);
	}
	template <typename T = void> T OnTypeChange(uintptr_t Msg) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x2902144))(this, Msg);
	}
	template <typename T = void> T OnPersonalInfoGameTypeChange(uintptr_t Msg) {
		return ((T (*)(CareerAchievementController*, uintptr_t))(Il2CppBase() + 0x2902214))(this, Msg);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2902418))(this);
	}
	template <typename T = bool> static T InitPendingAchievementm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29025D8))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2902604))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2902634))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2902664))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__5(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2902694))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__6(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29026C4))(0, it);
	}
	template <typename T = bool> static T InitPendingAchievementm__7(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29026F4))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2902724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x290272C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2902734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x290273C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x2902744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CareerAchievementController*))(Il2CppBase() + 0x290274C))(this);
	}

};

}
