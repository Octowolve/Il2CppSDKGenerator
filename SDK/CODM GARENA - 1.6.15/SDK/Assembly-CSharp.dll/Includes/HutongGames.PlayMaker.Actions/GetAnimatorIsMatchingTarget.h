#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorIsMatchingTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorIsMatchingTarget"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isMatchingActive() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& matchingActivatedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& matchingDeactivedEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorIsMatchingTarget*))(Il2CppBase() + 0x5058CAC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorIsMatchingTarget*))(Il2CppBase() + 0x5058CC8))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorIsMatchingTarget*))(Il2CppBase() + 0x5058F6C))(this);
	}
	template <typename T = void> T DoCheckIsMatchingActive() {
		return ((T (*)(GetAnimatorIsMatchingTarget*))(Il2CppBase() + 0x5058E40))(this);
	}

};

}
