#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionDailyMissionItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionDailyMissionItemView"));
	}

	template <typename T = uintptr_t> T& MissionRewardObj1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MissionRewardTemplate1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MissionRewardObj2() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MissionRewardTemplate2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MissionRewardObj3() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MissionRewardTemplate3() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MissionDescLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& MissionProgressLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RewardClaimedObj() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RewardAvailableObj() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ClaimRewardButton() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& GotoFinishObj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& GotoFinishButton() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MissionRewardObjList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MissionRewardItemList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheRewardData() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_CacheMissonStateEnum() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMissionDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactivateAllRewardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMissionStateBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DailyMissionDailyMissionItemView*))(Il2CppBase() + 0x41F2BF0))(this);
	}
	template <typename T = void> T SetMissionDesc(uintptr_t task) {
		return ((T (*)(DailyMissionDailyMissionItemView*, uintptr_t))(Il2CppBase() + 0x41F1DA0))(this, task);
	}
	template <typename T = void> T SetRewardItem(uintptr_t task) {
		return ((T (*)(DailyMissionDailyMissionItemView*, uintptr_t))(Il2CppBase() + 0x41F21C0))(this, task);
	}
	template <typename T = void> T DeactivateAllRewardItem() {
		return ((T (*)(DailyMissionDailyMissionItemView*))(Il2CppBase() + 0x41F2DA4))(this);
	}
	template <typename T = void> T SetMissionStateBtn(uintptr_t newState) {
		return ((T (*)(DailyMissionDailyMissionItemView*, uintptr_t))(Il2CppBase() + 0x41F2010))(this, newState);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DailyMissionDailyMissionItemView*))(Il2CppBase() + 0x41F2FA0))(this);
	}

};

}
