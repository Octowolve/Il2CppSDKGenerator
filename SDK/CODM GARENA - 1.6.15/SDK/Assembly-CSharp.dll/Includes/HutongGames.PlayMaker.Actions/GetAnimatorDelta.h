#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorDelta
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorDelta"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& deltaPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& deltaRotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorDelta*))(Il2CppBase() + 0x50571C4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorDelta*))(Il2CppBase() + 0x50571E0))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorDelta*))(Il2CppBase() + 0x5057490))(this);
	}
	template <typename T = void> T DoGetDeltaPosition() {
		return ((T (*)(GetAnimatorDelta*))(Il2CppBase() + 0x5057348))(this);
	}

};

}
