#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionSubController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionSubController"));
	}

	template <typename T = uintptr_t> T& m_DailyMissionSubView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DisplayData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_DailyMissionListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& DAILY_MISSION_ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DAILY_MISSION_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache0() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimAllDailyTabReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimWeeklyReward1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimWeeklyReward2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDailyReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeeklyReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDailyRewardClaim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRewardClaim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDailyMissionListView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F3728))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F37CC))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F3A50))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F3E84))(this);
	}
	template <typename T = void> T InitScrollList() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F3BCC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F4098))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F4274))(this);
	}
	template <typename T = void> T ClaimAllDailyTabReward() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F43F0))(this);
	}
	template <typename T = void> T ClaimWeeklyReward1() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F4838))(this);
	}
	template <typename T = void> T ClaimWeeklyReward2() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F49EC))(this);
	}
	template <typename T = void> T RefreshView(uintptr_t displayData) {
		return ((T (*)(DailyMissionSubController*, uintptr_t))(Il2CppBase() + 0x41F3F44))(this, displayData);
	}
	template <typename T = void> T RefreshPlayerActivity() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F4B98))(this);
	}
	template <typename T = void> T RefreshDailyReward() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F4CE0))(this);
	}
	template <typename T = void> T RefreshWeeklyReward() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F52C4))(this);
	}
	template <typename T = void> T OnDailyRewardClaim(uintptr_t obj) {
		return ((T (*)(DailyMissionSubController*, uintptr_t))(Il2CppBase() + 0x41F64A8))(this, obj);
	}
	template <typename T = void> T OnRewardClaim(uint64_t missionSeqId) {
		return ((T (*)(DailyMissionSubController*, uint64_t))(Il2CppBase() + 0x41F45EC))(this, missionSeqId);
	}
	template <typename T = void> T RefreshDailyMissionListView() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F5BC4))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(DailyMissionSubController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x41F6854))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(DailyMissionSubController*, uintptr_t, int32_t))(Il2CppBase() + 0x41F691C))(this, list, userContext);
	}
	template <typename T = int32_t> static T RefreshDailyRewardm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F69D0))(0, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F6A38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F6A40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F6A48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F6A50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DailyMissionSubController*))(Il2CppBase() + 0x41F6A58))(this);
	}

};

}
