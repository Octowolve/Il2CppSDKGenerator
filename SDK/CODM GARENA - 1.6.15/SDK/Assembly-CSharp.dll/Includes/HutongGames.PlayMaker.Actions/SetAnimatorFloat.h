#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorFloat"));
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
	template <typename T = uintptr_t> T& dampTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _paramID() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorFloat*))(Il2CppBase() + 0x4FB2848))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorFloat*))(Il2CppBase() + 0x4FB2918))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(SetAnimatorFloat*))(Il2CppBase() + 0x4FB2C4C))(this);
	}
	template <typename T = void> T SetParameter() {
		return ((T (*)(SetAnimatorFloat*))(Il2CppBase() + 0x4FB2AB8))(this);
	}

};

}
