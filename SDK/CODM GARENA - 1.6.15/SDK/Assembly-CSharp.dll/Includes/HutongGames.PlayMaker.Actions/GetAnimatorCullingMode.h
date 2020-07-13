#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorCullingMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorCullingMode"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& alwaysAnimate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& alwaysAnimateEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& basedOnRenderersEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorCullingMode*))(Il2CppBase() + 0x50556F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorCullingMode*))(Il2CppBase() + 0x5055700))(this);
	}
	template <typename T = void> T DoCheckCulling() {
		return ((T (*)(GetAnimatorCullingMode*))(Il2CppBase() + 0x5055868))(this);
	}

};

}
