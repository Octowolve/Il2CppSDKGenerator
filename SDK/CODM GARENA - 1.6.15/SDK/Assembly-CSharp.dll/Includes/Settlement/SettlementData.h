#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Parts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LadderRank() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SeasonHistoryHighestLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsPVP() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CanBeShared() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& IsScoreUp() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& IsSettlementUp() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& IsInSeasonBreak() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsKeyMode() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& IsScoreNotDrop() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = int32_t> T& CurrShowRank() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& LadderPercent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
