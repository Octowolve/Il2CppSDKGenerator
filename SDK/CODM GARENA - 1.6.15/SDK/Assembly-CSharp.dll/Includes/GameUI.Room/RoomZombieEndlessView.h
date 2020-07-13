#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieEndlessView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieEndlessView"));
	}

	template <typename T = uintptr_t> T& LabelRoundNumPassed() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelChallengeRoundScore() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelNumOfRoundWeeklyCompleted() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rewardItems() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& endlessRank() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoDataTipActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ResetScrollView() {
		return ((T (*)(RoomZombieEndlessView*))(Il2CppBase() + 0x213A770))(this);
	}
	template <typename T = void> T SetNoDataTipActive(bool isShow) {
		return ((T (*)(RoomZombieEndlessView*, bool))(Il2CppBase() + 0x213A898))(this, isShow);
	}
	template <typename T = void> T SetReward(Il2CppList<uintptr_t>* list) {
		return ((T (*)(RoomZombieEndlessView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x213A9A4))(this, list);
	}

};

}
