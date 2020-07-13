#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class MissionSystemDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "MissionSystemDataStore"));
	}

	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint64_t, int32_t>*> T& m_DailyMissionRedDotMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint64_t, int32_t>*> T& m_GrowthMissionRedDotMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRedDotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyRedDotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrowthRedDotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowRedDotInLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordDailyRedDotChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordGrowthRedDotChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAvailableRewardMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(MissionSystemDataStore*))(Il2CppBase() + 0x32F2F44))(this);
	}
	template <typename T = void> T ClearRedDotData() {
		return ((T (*)(MissionSystemDataStore*))(Il2CppBase() + 0x32F2FF4))(this);
	}
	template <typename T = int32_t> T GetDailyRedDotCount() {
		return ((T (*)(MissionSystemDataStore*))(Il2CppBase() + 0x32F30EC))(this);
	}
	template <typename T = int32_t> T GetGrowthRedDotCount() {
		return ((T (*)(MissionSystemDataStore*))(Il2CppBase() + 0x32F31C0))(this);
	}
	template <typename T = bool> T IsShowRedDotInLobby() {
		return ((T (*)(MissionSystemDataStore*))(Il2CppBase() + 0x32F3294))(this);
	}
	template <typename T = void> T RecordDailyRedDotChange(uintptr_t mission) {
		return ((T (*)(MissionSystemDataStore*, uintptr_t))(Il2CppBase() + 0x32F3724))(this, mission);
	}
	template <typename T = void> T RecordGrowthRedDotChange(uintptr_t mission) {
		return ((T (*)(MissionSystemDataStore*, uintptr_t))(Il2CppBase() + 0x32F390C))(this, mission);
	}
	template <typename T = bool> T IsAvailableRewardMission(uintptr_t missionState) {
		return ((T (*)(MissionSystemDataStore*, uintptr_t))(Il2CppBase() + 0x32F3668))(this, missionState);
	}

};

}
