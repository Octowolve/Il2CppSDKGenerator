#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneRankingMultiTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneRankingMultiTaskController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRankType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityItemLocdDescript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetRankType() {
		return ((T (*)(MileStoneRankingMultiTaskController*))(Il2CppBase() + 0x41E2780))(this);
	}
	template <typename T = Il2CppString*> T GetActivityItemLocdDescript() {
		return ((T (*)(MileStoneRankingMultiTaskController*))(Il2CppBase() + 0x41E289C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetRankType() {
		return ((T (*)(MileStoneRankingMultiTaskController*))(Il2CppBase() + 0x41E2954))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetActivityItemLocdDescript() {
		return ((T (*)(MileStoneRankingMultiTaskController*))(Il2CppBase() + 0x41E295C))(this);
	}

};

}
