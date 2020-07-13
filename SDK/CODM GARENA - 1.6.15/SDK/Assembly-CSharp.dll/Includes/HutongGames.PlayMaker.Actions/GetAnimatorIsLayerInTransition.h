#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorIsLayerInTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorIsLayerInTransition"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& isInTransition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& isInTransitionEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& isNotInTransitionEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorIsLayerInTransition*))(Il2CppBase() + 0x50589A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorIsLayerInTransition*))(Il2CppBase() + 0x50589C4))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorIsLayerInTransition*))(Il2CppBase() + 0x5058CA0))(this);
	}
	template <typename T = void> T DoCheckIsInTransition() {
		return ((T (*)(GetAnimatorIsLayerInTransition*))(Il2CppBase() + 0x5058B3C))(this);
	}

};

}
