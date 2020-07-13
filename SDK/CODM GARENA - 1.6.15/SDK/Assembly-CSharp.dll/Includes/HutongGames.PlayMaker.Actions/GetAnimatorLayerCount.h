#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorLayerCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorLayerCount"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& layerCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorLayerCount*))(Il2CppBase() + 0x5059248))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorLayerCount*))(Il2CppBase() + 0x5059254))(this);
	}
	template <typename T = void> T DoGetLayerCount() {
		return ((T (*)(GetAnimatorLayerCount*))(Il2CppBase() + 0x50593BC))(this);
	}

};

}
