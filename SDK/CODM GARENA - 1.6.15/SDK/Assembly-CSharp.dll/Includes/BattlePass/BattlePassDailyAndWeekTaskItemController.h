#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassDailyAndWeekTaskItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassDailyAndWeekTaskItemController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassDailyAndWeekTaskItemController*))(Il2CppBase() + 0x328661C))(this);
	}
	template <typename T = bool> T IsDailyTask(int32_t index) {
		return ((T (*)(BattlePassDailyAndWeekTaskItemController*, int32_t))(Il2CppBase() + 0x32866C0))(this, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassDailyAndWeekTaskItemController*))(Il2CppBase() + 0x3286770))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDailyTask(int32_t P0) {
		return ((T (*)(BattlePassDailyAndWeekTaskItemController*, int32_t))(Il2CppBase() + 0x3286778))(this, P0);
	}

};

}
