#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionSubController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionSubController"));
	}

	template <typename T = uintptr_t> T& m_GrowthMissionSubView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DisplayData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_CurrentSelectIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UnlockList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_GrowthRewardScrollController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LevelMissionList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_GrowthMissionScrollController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_levelInfo() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_LeftLevelIndex() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_RightLevelIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_SelectIndex() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_thirdTab() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockLevelReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreviousLevelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextLevelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResTemplateItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllGrowthMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimLevelReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimAllLevelTabReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T SetSelectIndex(int32_t thirdTab) {
		return ((T (*)(GrowthMissionSubController*, int32_t))(Il2CppBase() + 0x32EF590))(this, thirdTab);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32EF638))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32EF6DC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32EF9B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32EFA58))(this);
	}
	template <typename T = void> T UpdateLevelRewardList() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32EFD90))(this);
	}
	template <typename T = void> T GetSwitchIndex(uintptr_t selectIndex, uintptr_t scrollToIndex) {
		return ((T (*)(GrowthMissionSubController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32F05F8))(this, selectIndex, scrollToIndex);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F09B4))(this);
	}
	template <typename T = void> T RefreshView(uintptr_t displayData) {
		return ((T (*)(GrowthMissionSubController*, uintptr_t))(Il2CppBase() + 0x32F0B18))(this, displayData);
	}
	template <typename T = void> T GetUnlockLevelReward(uintptr_t selectIndex) {
		return ((T (*)(GrowthMissionSubController*, uintptr_t))(Il2CppBase() + 0x32EFFF8))(this, selectIndex);
	}
	template <typename T = void> T OnPreviousLevelBtnClick() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F0C50))(this);
	}
	template <typename T = void> T OnNextLevelBtnClick() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F0D14))(this);
	}
	template <typename T = void> T OnResTemplateItemClick(uintptr_t msg) {
		return ((T (*)(GrowthMissionSubController*, uintptr_t))(Il2CppBase() + 0x32F0E40))(this, msg);
	}
	template <typename T = void> T SetSelectItem() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F07A4))(this);
	}
	template <typename T = void> T UpdateLevelMission() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1388))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllGrowthMission() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F157C))(this);
	}
	template <typename T = void> T ClaimLevelReward(int32_t selectedIndex) {
		return ((T (*)(GrowthMissionSubController*, int32_t))(Il2CppBase() + 0x32F11BC))(this, selectedIndex);
	}
	template <typename T = void> T ClaimAllLevelTabReward() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1660))(this);
	}
	template <typename T = void> T RegisterDelegatesm__0() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1C08))(this);
	}
	template <typename T = bool> T UpdateLevelRewardListm__1(uintptr_t it) {
		return ((T (*)(GrowthMissionSubController*, uintptr_t))(Il2CppBase() + 0x32F1C0C))(this, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1C6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1C74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1C7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1C84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GrowthMissionSubController*))(Il2CppBase() + 0x32F1C8C))(this);
	}

};

}
