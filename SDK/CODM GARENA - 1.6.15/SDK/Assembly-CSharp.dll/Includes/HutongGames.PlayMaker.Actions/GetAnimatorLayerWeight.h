#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorLayerWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorLayerWeight"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& layerWeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorLayerWeight*))(Il2CppBase() + 0x50599F8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorLayerWeight*))(Il2CppBase() + 0x5059A14))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorLayerWeight*))(Il2CppBase() + 0x5059C9C))(this);
	}
	template <typename T = void> T GetLayerWeight() {
		return ((T (*)(GetAnimatorLayerWeight*))(Il2CppBase() + 0x5059B8C))(this);
	}

};

}
