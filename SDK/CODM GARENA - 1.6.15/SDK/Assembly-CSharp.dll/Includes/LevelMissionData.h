#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelMissionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelMissionData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllLevelMissionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllAvaliableRewardMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertMissionToList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortMissionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_LevelMissionUnfinishMissionList() {
		return ((T (*)(LevelMissionData*))(Il2CppBase() + 0x32F27E0))(this);
	}
	template <typename T = void> T set_LevelMissionUnfinishMissionList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LevelMissionData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x32F27D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LevelMissionClaimableMissionList() {
		return ((T (*)(LevelMissionData*))(Il2CppBase() + 0x32F27E8))(this);
	}
	template <typename T = void> T set_LevelMissionClaimableMissionList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LevelMissionData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x32F27C8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LevelMissionClaimedMissionList() {
		return ((T (*)(LevelMissionData*))(Il2CppBase() + 0x32F27F0))(this);
	}
	template <typename T = void> T set_LevelMissionClaimedMissionList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LevelMissionData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x32F27D0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllLevelMissionList() {
		return ((T (*)(LevelMissionData*))(Il2CppBase() + 0x32F1FA4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllAvaliableRewardMission() {
		return ((T (*)(LevelMissionData*))(Il2CppBase() + 0x32F27F8))(this);
	}
	template <typename T = void> T InsertMissionToList(uintptr_t newMission) {
		return ((T (*)(LevelMissionData*, uintptr_t))(Il2CppBase() + 0x32F2898))(this, newMission);
	}
	template <typename T = void> T SortMissionList() {
		return ((T (*)(LevelMissionData*))(Il2CppBase() + 0x32F2A10))(this);
	}

};

}
