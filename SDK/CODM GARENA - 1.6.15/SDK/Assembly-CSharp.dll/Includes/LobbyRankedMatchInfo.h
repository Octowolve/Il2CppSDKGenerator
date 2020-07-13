#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyRankedMatchInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyRankedMatchInfo"));
	}

	template <typename T = uint64_t> T& mActivityId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& mStartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& mEndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRankBuffValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRankRestriction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotDropType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uint64_t> T get_ActivityId() {
		return ((T (*)(LobbyRankedMatchInfo*))(Il2CppBase() + 0x4335F38))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(LobbyRankedMatchInfo*))(Il2CppBase() + 0x4335D40))(this);
	}
	template <typename T = uint64_t> T get_StartTime() {
		return ((T (*)(LobbyRankedMatchInfo*))(Il2CppBase() + 0x4335D48))(this);
	}
	template <typename T = uint64_t> T get_EndTime() {
		return ((T (*)(LobbyRankedMatchInfo*))(Il2CppBase() + 0x4335D50))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, uint64_t startTime, uint64_t endTime, uint64_t activityId) {
		return ((T (*)(LobbyRankedMatchInfo*, uintptr_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x434011C))(this, data, startTime, endTime, activityId);
	}
	template <typename T = bool> T IsRankBuffValid(double serverTime) {
		return ((T (*)(LobbyRankedMatchInfo*, double))(Il2CppBase() + 0x4340218))(this, serverTime);
	}
	template <typename T = bool> T IsRankRestriction() {
		return ((T (*)(LobbyRankedMatchInfo*))(Il2CppBase() + 0x434031C))(this);
	}
	template <typename T = bool> T IsNotDropType() {
		return ((T (*)(LobbyRankedMatchInfo*))(Il2CppBase() + 0x434068C))(this);
	}

};

}
