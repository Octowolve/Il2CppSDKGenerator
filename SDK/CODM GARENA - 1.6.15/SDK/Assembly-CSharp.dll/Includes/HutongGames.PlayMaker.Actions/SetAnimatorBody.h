#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorBody
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorBody"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorBody*))(Il2CppBase() + 0x4FB19DC))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(SetAnimatorBody*))(Il2CppBase() + 0x4FB1AE8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorBody*))(Il2CppBase() + 0x4FB1B1C))(this);
	}
	template <typename T = void> T DoAnimatorIK(int32_t layerIndex) {
		return ((T (*)(SetAnimatorBody*, int32_t))(Il2CppBase() + 0x4FB1D00))(this, layerIndex);
	}
	template <typename T = void> T DoSetBody() {
		return ((T (*)(SetAnimatorBody*))(Il2CppBase() + 0x4FB1D2C))(this);
	}

};

}
