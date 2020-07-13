#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorIKGoal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorIKGoal"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& iKGoal() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& goal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& rotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& positionWeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& rotationWeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorIKGoal*))(Il2CppBase() + 0x4FB2C58))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(SetAnimatorIKGoal*))(Il2CppBase() + 0x4FB2D90))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorIKGoal*))(Il2CppBase() + 0x4FB2DC4))(this);
	}
	template <typename T = void> T DoAnimatorIK(int32_t layerIndex) {
		return ((T (*)(SetAnimatorIKGoal*, int32_t))(Il2CppBase() + 0x4FB2FA8))(this, layerIndex);
	}
	template <typename T = void> T DoSetIKGoal() {
		return ((T (*)(SetAnimatorIKGoal*))(Il2CppBase() + 0x4FB2FD4))(this);
	}

};

}
