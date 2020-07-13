#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorInt"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& parameter() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _paramID() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorInt*))(Il2CppBase() + 0x4FB3420))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorInt*))(Il2CppBase() + 0x4FB3448))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(SetAnimatorInt*))(Il2CppBase() + 0x4FB36E4))(this);
	}
	template <typename T = void> T SetParameter() {
		return ((T (*)(SetAnimatorInt*))(Il2CppBase() + 0x4FB35E8))(this);
	}

};

}
