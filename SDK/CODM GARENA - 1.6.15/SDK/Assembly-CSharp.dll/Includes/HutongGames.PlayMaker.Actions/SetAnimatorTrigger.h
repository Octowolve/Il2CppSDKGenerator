#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorTrigger"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorTrigger*))(Il2CppBase() + 0x4FB514C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorTrigger*))(Il2CppBase() + 0x4FB5158))(this);
	}
	template <typename T = void> T SetTrigger() {
		return ((T (*)(SetAnimatorTrigger*))(Il2CppBase() + 0x4FB52C0))(this);
	}

};

}
