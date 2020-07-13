#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissTabDisplayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissTabDisplayData"));
	}

	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LevelRewardList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_LevelMissionDict() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLevelMissionListByLevelValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClaimableLevelMissionListByLevelValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllClaimableMissionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleNewMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAllGrowthMissionReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uint64_t> T get_ActivityId() {
		return ((T (*)(GrowthMissTabDisplayData*))(Il2CppBase() + 0x32F1658))(this);
	}
	template <typename T = void> T set_ActivityId(uint64_t value) {
		return ((T (*)(GrowthMissTabDisplayData*, uint64_t))(Il2CppBase() + 0x32F1E88))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LevelRewardList() {
		return ((T (*)(GrowthMissTabDisplayData*))(Il2CppBase() + 0x32F0C48))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllLevelMissionListByLevelValue(uint64_t levelValue) {
		return ((T (*)(GrowthMissTabDisplayData*, uint64_t))(Il2CppBase() + 0x32F1E98))(this, levelValue);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetClaimableLevelMissionListByLevelValue(uint64_t levelValue) {
		return ((T (*)(GrowthMissTabDisplayData*, uint64_t))(Il2CppBase() + 0x32F209C))(this, levelValue);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllClaimableMissionList() {
		return ((T (*)(GrowthMissTabDisplayData*))(Il2CppBase() + 0x32F1938))(this);
	}
	template <typename T = void> T HandleNewMission(uintptr_t newMission) {
		return ((T (*)(GrowthMissTabDisplayData*, uintptr_t))(Il2CppBase() + 0x32F21B4))(this, newMission);
	}
	template <typename T = void> T SortAllGrowthMissionReward() {
		return ((T (*)(GrowthMissTabDisplayData*))(Il2CppBase() + 0x32F2554))(this);
	}
	template <typename T = int32_t> static T SortAllGrowthMissionRewardm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x32F26AC))(0, a, b);
	}

};

}
