#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorGravityWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorGravityWeight"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& gravityWeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorGravityWeight*))(Il2CppBase() + 0x50579CC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorGravityWeight*))(Il2CppBase() + 0x50579E4))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorGravityWeight*))(Il2CppBase() + 0x5057C50))(this);
	}
	template <typename T = void> T DoGetGravityWeight() {
		return ((T (*)(GetAnimatorGravityWeight*))(Il2CppBase() + 0x5057B5C))(this);
	}

};

}
