#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassDefine"));
	}

	template <typename T = int32_t> static T& iRefreshAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& iRefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& iRefreshSeason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& iRefreshAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& iRefreshDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& isRefreshTireUpLimitNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& MAX_DAILY_TASK_CAN_DO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& LEVEL_UP_SPECIAL_DIVISOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& RefreshComicRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& LEVEL_UP_FLOW_CELL_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& LEVEL_UP_BIG_FLOW_CELL_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& LEVEL_UP_MAXLEVEL_FLOW_CELL_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& LEVEL_AWARD_ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrencyIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = Il2CppString*> static T GetCurrencyIcon(uintptr_t pType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32761EC))(0, pType);
	}

};

}
