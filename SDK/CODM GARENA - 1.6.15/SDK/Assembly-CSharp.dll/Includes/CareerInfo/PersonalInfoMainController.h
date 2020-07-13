#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoMainController"));
	}

	template <typename T = uintptr_t> static T& CurrentGameType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_BaseCtrl() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_AchievementCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_LevelStoneCtr() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_BaseWestCtrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& uiScene() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& willShowTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& startTid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& personalinfoDs() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LevelUnlock_1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInit_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopRankTitleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZMGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenameGotoMileStoneCtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreditScoreBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T T_LevelUnlock_1_Init() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0D4B4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0D804))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0D8D8))(this);
	}
	template <typename T = void> T SetupTabController() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0DB74))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0DD34))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0E0EC))(this);
	}
	template <typename T = void> T OnRefreshRedPoint(uintptr_t msg) {
		return ((T (*)(PersonalInfoMainController*, uintptr_t))(Il2CppBase() + 0x1D0E260))(this, msg);
	}
	template <typename T = void> T SetInit(int32_t index, int32_t thirdTab) {
		return ((T (*)(PersonalInfoMainController*, int32_t, int32_t))(Il2CppBase() + 0x1D0E538))(this, index, thirdTab);
	}
	template <typename T = void> T SetInit_1() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0E848))(this);
	}
	template <typename T = void> T ChangeTabController(int32_t index) {
		return ((T (*)(PersonalInfoMainController*, int32_t))(Il2CppBase() + 0x1D0E948))(this, index);
	}
	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(PersonalInfoMainController*, int32_t))(Il2CppBase() + 0x1D0EFA8))(this, index);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0FA38))(this);
	}
	template <typename T = void> T OnTopRankTitleChange(int32_t index) {
		return ((T (*)(PersonalInfoMainController*, int32_t))(Il2CppBase() + 0x1D0F3C0))(this, index);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D0FDC4))(this);
	}
	template <typename T = void> T OnPVPGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoMainController*, uintptr_t))(Il2CppBase() + 0x1D101DC))(this, obj);
	}
	template <typename T = void> T OnZMGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoMainController*, uintptr_t))(Il2CppBase() + 0x1D10348))(this, obj);
	}
	template <typename T = void> T OnBRGameTypeClick(uintptr_t obj) {
		return ((T (*)(PersonalInfoMainController*, uintptr_t))(Il2CppBase() + 0x1D104B4))(this, obj);
	}
	template <typename T = void> T ShowController(int32_t index) {
		return ((T (*)(PersonalInfoMainController*, int32_t))(Il2CppBase() + 0x1D0EAA4))(this, index);
	}
	template <typename T = void> T RenameGotoMileStoneCtr(uintptr_t Msg) {
		return ((T (*)(PersonalInfoMainController*, uintptr_t))(Il2CppBase() + 0x1D10620))(this, Msg);
	}
	template <typename T = void> T NavigationWill() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10780))(this);
	}
	template <typename T = void> T OnCreditScoreBtnClick() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10854))(this);
	}
	template <typename T = void> static T T_LevelUnlock_1_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D10920))(0, tutorialType, info);
	}
	template <typename T = void> T T_LevelUnlock_1_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(PersonalInfoMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D10B8C))(this, tutorialType, info);
	}
	template <typename T = void> T WillShowm__2() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10D18))(this);
	}
	template <typename T = void> static T T_LevelUnlock_1_Initm__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D10D20))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10E24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10E2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeTabController(int32_t P0) {
		return ((T (*)(PersonalInfoMainController*, int32_t))(Il2CppBase() + 0x1D10E3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyTabChanged(int32_t P0) {
		return ((T (*)(PersonalInfoMainController*, int32_t))(Il2CppBase() + 0x1D10E44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PersonalInfoMainController*))(Il2CppBase() + 0x1D10E54))(this);
	}

};

}
