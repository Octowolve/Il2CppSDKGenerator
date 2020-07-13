#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorStabilizeFeet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorStabilizeFeet"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stabilizeFeet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorStabilizeFeet*))(Il2CppBase() + 0x4FB4C0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorStabilizeFeet*))(Il2CppBase() + 0x4FB4C18))(this);
	}
	template <typename T = void> T DoStabilizeFeet() {
		return ((T (*)(SetAnimatorStabilizeFeet*))(Il2CppBase() + 0x4FB4D80))(this);
	}

};

}
