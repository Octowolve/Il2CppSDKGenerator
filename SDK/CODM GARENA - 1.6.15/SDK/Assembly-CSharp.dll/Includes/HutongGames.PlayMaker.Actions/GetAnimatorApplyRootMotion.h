#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorApplyRootMotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorApplyRootMotion"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rootMotionApplied() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rootMotionIsAppliedEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rootMotionIsNotAppliedEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorApplyRootMotion*))(Il2CppBase() + 0x5054A50))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorApplyRootMotion*))(Il2CppBase() + 0x5054A60))(this);
	}
	template <typename T = void> T GetApplyMotionRoot() {
		return ((T (*)(GetAnimatorApplyRootMotion*))(Il2CppBase() + 0x5054BC8))(this);
	}

};

}
