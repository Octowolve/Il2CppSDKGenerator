#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorRoot"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rootPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& rootRotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bodyGameObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorRoot*))(Il2CppBase() + 0x5084494))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorRoot*))(Il2CppBase() + 0x50844B8))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorRoot*))(Il2CppBase() + 0x50848C0))(this);
	}
	template <typename T = void> T DoGetBodyPosition() {
		return ((T (*)(GetAnimatorRoot*))(Il2CppBase() + 0x50846AC))(this);
	}

};

}
