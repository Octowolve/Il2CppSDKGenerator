#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorApplyRootMotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorApplyRootMotion"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& applyRootMotion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorApplyRootMotion*))(Il2CppBase() + 0x4FB176C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorApplyRootMotion*))(Il2CppBase() + 0x4FB1778))(this);
	}
	template <typename T = void> T DoApplyRootMotion() {
		return ((T (*)(SetAnimatorApplyRootMotion*))(Il2CppBase() + 0x4FB18E0))(this);
	}

};

}
