#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SplineMoveAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SplineMoveAction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& splineMoveList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& moveControlParam() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& teleportOnFinish() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SplineMoveAction*))(Il2CppBase() + 0x5031824))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SplineMoveAction*))(Il2CppBase() + 0x50318C4))(this);
	}
	template <typename T = void> T MoveAlongPath(uintptr_t localPawn, uintptr_t targetSplineMove) {
		return ((T (*)(SplineMoveAction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5031C8C))(this, localPawn, targetSplineMove);
	}
	template <typename T = uintptr_t> T FollowPath(uintptr_t localPawn) {
		return ((T (*)(SplineMoveAction*, uintptr_t))(Il2CppBase() + 0x5031BE0))(this, localPawn);
	}

};

}
