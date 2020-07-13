#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FollowingPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FollowingPawn"));
	}

	template <typename T = uintptr_t> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& TargetPawn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& NavAgent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FollowingPawn*))(Il2CppBase() + 0x50519F8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FollowingPawn*))(Il2CppBase() + 0x50519FC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FollowingPawn*))(Il2CppBase() + 0x5051B18))(this);
	}

};

}
