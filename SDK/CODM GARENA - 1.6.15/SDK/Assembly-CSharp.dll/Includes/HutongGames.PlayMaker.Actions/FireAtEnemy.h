#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FireAtEnemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FireAtEnemy"));
	}

	template <typename T = uintptr_t> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FireAtEnemy*))(Il2CppBase() + 0x504F364))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FireAtEnemy*))(Il2CppBase() + 0x504F368))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FireAtEnemy*))(Il2CppBase() + 0x504F45C))(this);
	}
	template <typename T = bool> T FireWeapon() {
		return ((T (*)(FireAtEnemy*))(Il2CppBase() + 0x504F980))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(FireAtEnemy*))(Il2CppBase() + 0x504FAAC))(this);
	}

};

}
