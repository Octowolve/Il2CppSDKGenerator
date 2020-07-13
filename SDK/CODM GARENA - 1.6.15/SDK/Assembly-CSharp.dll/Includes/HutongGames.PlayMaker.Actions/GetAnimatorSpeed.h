#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorSpeed"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorSpeed*))(Il2CppBase() + 0x50848CC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorSpeed*))(Il2CppBase() + 0x50848F4))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorSpeed*))(Il2CppBase() + 0x5084B60))(this);
	}
	template <typename T = void> T GetPlaybackSpeed() {
		return ((T (*)(GetAnimatorSpeed*))(Il2CppBase() + 0x5084A6C))(this);
	}

};

}
