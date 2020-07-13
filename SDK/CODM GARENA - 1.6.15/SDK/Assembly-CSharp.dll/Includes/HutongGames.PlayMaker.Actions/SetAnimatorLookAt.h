#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorLookAt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorLookAt"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& bodyWeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& headWeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& eyesWeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& clampWeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorLookAt*))(Il2CppBase() + 0x4FB3C0C))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(SetAnimatorLookAt*))(Il2CppBase() + 0x4FB3D3C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorLookAt*))(Il2CppBase() + 0x4FB3D70))(this);
	}
	template <typename T = void> T DoAnimatorIK(int32_t layerIndex) {
		return ((T (*)(SetAnimatorLookAt*, int32_t))(Il2CppBase() + 0x4FB3F54))(this, layerIndex);
	}
	template <typename T = void> T DoSetLookAt() {
		return ((T (*)(SetAnimatorLookAt*))(Il2CppBase() + 0x4FB3F80))(this);
	}

};

}
