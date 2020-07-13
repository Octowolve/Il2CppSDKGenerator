#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameCheckEnemyCountInChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameCheckEnemyCountInChecker"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_SpawnerCheckerList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_CompareType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_StoreALivePawnsCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_CompareValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_TrueEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_FalseEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& CheckEveryTick() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CheckerList() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameCheckEnemyCountInChecker*))(Il2CppBase() + 0x5034530))(this);
	}
	template <typename T = void> T CheckPawnCount() {
		return ((T (*)(StoryGameCheckEnemyCountInChecker*))(Il2CppBase() + 0x5034680))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameCheckEnemyCountInChecker*))(Il2CppBase() + 0x5034870))(this);
	}

};

}
