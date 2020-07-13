#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class DailyMissionTabDisplayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "DailyMissionTabDisplayData"));
	}

	template <typename T = int32_t> T& m_DailyActivityValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_WeeklyActivityValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DailyActivityAllMissionSortedList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DailyActivityRewardList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeeklyActivityRewardList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllAvaliableRewardMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePlayerActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortMissionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertMissionToList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleNewMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAllDailyMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_DailyActivityValue() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F5D88))(this);
	}
	template <typename T = void> T set_DailyActivityValue(int32_t value) {
		return ((T (*)(DailyMissionTabDisplayData*, int32_t))(Il2CppBase() + 0x41F6D50))(this, value);
	}
	template <typename T = int32_t> T get_WeeklyActivityValue() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F5ED8))(this);
	}
	template <typename T = void> T set_WeeklyActivityValue(int32_t value) {
		return ((T (*)(DailyMissionTabDisplayData*, int32_t))(Il2CppBase() + 0x41F6D58))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DailyActivityClaimableMissionList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F683C))(this);
	}
	template <typename T = void> T set_DailyActivityClaimableMissionList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DailyMissionTabDisplayData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41F6D60))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DailyActivityUnfinishMissionList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F6844))(this);
	}
	template <typename T = void> T set_DailyActivityUnfinishMissionList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DailyMissionTabDisplayData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41F6D68))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DailyActivityClaimedMissionList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F684C))(this);
	}
	template <typename T = void> T set_DailyActivityClaimedMissionList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DailyMissionTabDisplayData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41F6D70))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DailyActivityAllMissionSortedList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F6D78))(this);
	}
	template <typename T = void> T set_DailyActivityAllMissionSortedList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DailyMissionTabDisplayData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41F6D80))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DailyActivityRewardList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F6028))(this);
	}
	template <typename T = void> T set_DailyActivityRewardList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DailyMissionTabDisplayData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41F6D88))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeeklyActivityRewardList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F49E4))(this);
	}
	template <typename T = void> T set_WeeklyActivityRewardList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DailyMissionTabDisplayData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41F6D90))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllAvaliableRewardMission() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F6D98))(this);
	}
	template <typename T = void> T CalculatePlayerActivity(uintptr_t mission) {
		return ((T (*)(DailyMissionTabDisplayData*, uintptr_t))(Il2CppBase() + 0x41F6ECC))(this, mission);
	}
	template <typename T = void> T SortMissionList() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F70BC))(this);
	}
	template <typename T = void> T InsertMissionToList(uintptr_t newMission) {
		return ((T (*)(DailyMissionTabDisplayData*, uintptr_t))(Il2CppBase() + 0x41F72BC))(this, newMission);
	}
	template <typename T = void> T HandleNewMission(uintptr_t newMission) {
		return ((T (*)(DailyMissionTabDisplayData*, uintptr_t))(Il2CppBase() + 0x41F74BC))(this, newMission);
	}
	template <typename T = void> T SortAllDailyMission() {
		return ((T (*)(DailyMissionTabDisplayData*))(Il2CppBase() + 0x41F758C))(this);
	}
	template <typename T = int32_t> static T SortMissionListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F769C))(0, a, b);
	}
	template <typename T = int32_t> static T SortMissionListm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F7704))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_HandleNewMission(uintptr_t P0) {
		return ((T (*)(DailyMissionTabDisplayData*, uintptr_t))(Il2CppBase() + 0x41F776C))(this, P0);
	}

};

}
