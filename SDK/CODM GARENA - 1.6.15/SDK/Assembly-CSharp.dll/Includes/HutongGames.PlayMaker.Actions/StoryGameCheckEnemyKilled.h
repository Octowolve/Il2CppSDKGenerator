#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameCheckEnemyKilled
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameCheckEnemyKilled"));
	}

	template <typename T = uintptr_t> T& m_IncludeNoEnemySpawned() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_KilledEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_RangeDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameCheckEnemyKilled*))(Il2CppBase() + 0x50348D0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameCheckEnemyKilled*))(Il2CppBase() + 0x50348D4))(this);
	}
	template <typename T = int32_t> static T GetAliveAIPawnCount(float range) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x5034964))(0, range);
	}

};

}
