#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorSpeed"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorSpeed*))(Il2CppBase() + 0x4FB4980))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorSpeed*))(Il2CppBase() + 0x4FB4994))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimatorSpeed*))(Il2CppBase() + 0x4FB4C00))(this);
	}
	template <typename T = void> T DoPlaybackSpeed() {
		return ((T (*)(SetAnimatorSpeed*))(Il2CppBase() + 0x4FB4B0C))(this);
	}

};

}
