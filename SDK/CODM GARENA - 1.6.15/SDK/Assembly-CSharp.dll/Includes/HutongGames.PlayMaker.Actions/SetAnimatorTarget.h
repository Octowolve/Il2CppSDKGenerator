#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorTarget"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& avatarTarget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& targetNormalizedTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorTarget*))(Il2CppBase() + 0x4FB4E7C))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(SetAnimatorTarget*))(Il2CppBase() + 0x4FB4E98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorTarget*))(Il2CppBase() + 0x4FB4ECC))(this);
	}
	template <typename T = void> T DoAnimatorMove() {
		return ((T (*)(SetAnimatorTarget*))(Il2CppBase() + 0x4FB5140))(this);
	}
	template <typename T = void> T SetTarget() {
		return ((T (*)(SetAnimatorTarget*))(Il2CppBase() + 0x4FB5044))(this);
	}

};

}
