#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionSubView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionSubView"));
	}

	template <typename T = uintptr_t> T& DailyActivityValueLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WeeklyActivityValueLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardProgress() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RewardProgressObj() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& DailyMissionScrollView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ScrollViewParent() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& WeeklyActivityReward_1() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& WeeklyActivityProgressLabel_1() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RewardStatusWidget_1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RewardAvaliableButton_1() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RewardAvaliableButtonObj_1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RewardClaimedObject_1() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& WeeklyActivityReward_2() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& WeeklyActivityProgressLabel_2() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& RewardStatusWidget_2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RewardAvaliableButton_2() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& RewardAvaliableButtonObj_2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RewardClaimedObject_2() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDailyActivityValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeeklyActivityValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeeklyActivity1ProgressLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeeklyActivity2ProgressLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardItemStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetDailyActivityValue(int32_t activityValue) {
		return ((T (*)(DailyMissionSubView*, int32_t))(Il2CppBase() + 0x41F5D90))(this, activityValue);
	}
	template <typename T = void> T SetWeeklyActivityValue(int32_t activityValue) {
		return ((T (*)(DailyMissionSubView*, int32_t))(Il2CppBase() + 0x41F5EE0))(this, activityValue);
	}
	template <typename T = void> T SetWeeklyActivity1ProgressLabel(Il2CppString* progressString) {
		return ((T (*)(DailyMissionSubView*, Il2CppString*))(Il2CppBase() + 0x41F6030))(this, progressString);
	}
	template <typename T = void> T SetWeeklyActivity2ProgressLabel(Il2CppString* progressString) {
		return ((T (*)(DailyMissionSubView*, Il2CppString*))(Il2CppBase() + 0x41F6334))(this, progressString);
	}
	template <typename T = void> T SetRewardItemStatus(uintptr_t itemTemplate, uintptr_t stateEnum) {
		return ((T (*)(DailyMissionSubView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F61A4))(this, itemTemplate, stateEnum);
	}

};

}
