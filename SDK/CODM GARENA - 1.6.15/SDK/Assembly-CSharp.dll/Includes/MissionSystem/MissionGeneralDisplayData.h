#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class MissionGeneralDisplayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "MissionGeneralDisplayData"));
	}

	template <typename T = uint64_t> T& m_ActivityId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActivityClaimableMissionList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActivityUnfinishMissionList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActivityClaimedMissionList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleNewMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectAllFinishMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint64_t> T get_ActivityId() {
		return ((T (*)(MissionGeneralDisplayData*))(Il2CppBase() + 0x32F2AA8))(this);
	}
	template <typename T = void> T set_ActivityId(uint64_t value) {
		return ((T (*)(MissionGeneralDisplayData*, uint64_t))(Il2CppBase() + 0x32F2544))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllAvaliableRewardMission() {
		return ((T (*)(MissionGeneralDisplayData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T InsertMissionToList(uintptr_t newMission) {
		return ((T (*)(MissionGeneralDisplayData*, uintptr_t))(Il2CppBase() + 0x0))(this, newMission);
	}
	template <typename T = void> T SortMissionList() {
		return ((T (*)(MissionGeneralDisplayData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T HandleNewMission(uintptr_t newMission) {
		return ((T (*)(MissionGeneralDisplayData*, uintptr_t))(Il2CppBase() + 0x32F2AB0))(this, newMission);
	}
	template <typename T = void> T SelectAllFinishMission(uintptr_t resultList, uintptr_t sourceList) {
		return ((T (*)(MissionGeneralDisplayData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32F2B80))(this, resultList, sourceList);
	}

};

}
