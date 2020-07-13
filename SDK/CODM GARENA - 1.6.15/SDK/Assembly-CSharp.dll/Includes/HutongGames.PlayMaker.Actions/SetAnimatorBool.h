#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorBool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorBool"));
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
		return ((T (*)(SetAnimatorBool*))(Il2CppBase() + 0x4FB2098))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorBool*))(Il2CppBase() + 0x4FB20C0))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(SetAnimatorBool*))(Il2CppBase() + 0x4FB235C))(this);
	}
	template <typename T = void> T SetParameter() {
		return ((T (*)(SetAnimatorBool*))(Il2CppBase() + 0x4FB2260))(this);
	}

};

}
