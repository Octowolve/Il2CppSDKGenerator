#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorLayerWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorLayerWeight"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& layerWeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorLayerWeight*))(Il2CppBase() + 0x4FB3960))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorLayerWeight*))(Il2CppBase() + 0x4FB3978))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimatorLayerWeight*))(Il2CppBase() + 0x4FB3C00))(this);
	}
	template <typename T = void> T DoLayerWeight() {
		return ((T (*)(SetAnimatorLayerWeight*))(Il2CppBase() + 0x4FB3AF0))(this);
	}

};

}
