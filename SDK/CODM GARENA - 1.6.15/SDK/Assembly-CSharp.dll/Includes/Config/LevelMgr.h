#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LevelMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LevelMgr"));
	}

	template <typename T = int32_t> static T& DEFAULT_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerExpCSV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNormalExpLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPeakLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPeakMaxConfLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpNeedFormA2B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T GetExpLevelInfo(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x376FEAC))(0, info);
	}
	template <typename T = uintptr_t> static T GetPlayerExpCSV() {
		return ((T (*)(void *))(Il2CppBase() + 0x377033C))(0);
	}
	template <typename T = uintptr_t> static T GetNormalExpLevelInfo(int32_t Rank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3770510))(0, Rank);
	}
	template <typename T = uintptr_t> static T GetPeakLevelInfo(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x37706E0))(0, level);
	}
	template <typename T = int32_t> static T GetPeakMaxConfLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x3770204))(0);
	}
	template <typename T = int32_t> static T GetExpNeedFormA2B(int32_t levelA, int32_t levelB) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x377089C))(0, levelA, levelB);
	}

};

}
