#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class InitAIState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "InitAIState"));
	}

	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& OwnerLogicalActor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NavAgent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(InitAIState*))(Il2CppBase() + 0x4F09100))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(InitAIState*))(Il2CppBase() + 0x4F09104))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(InitAIState*))(Il2CppBase() + 0x4F09360))(this);
	}

};

}
