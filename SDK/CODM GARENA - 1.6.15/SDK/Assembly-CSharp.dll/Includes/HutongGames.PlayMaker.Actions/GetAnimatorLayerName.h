#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorLayerName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorLayerName"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& layerName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorLayerName*))(Il2CppBase() + 0x50594B8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorLayerName*))(Il2CppBase() + 0x50594CC))(this);
	}
	template <typename T = void> T DoGetLayerName() {
		return ((T (*)(GetAnimatorLayerName*))(Il2CppBase() + 0x5059634))(this);
	}

};

}
