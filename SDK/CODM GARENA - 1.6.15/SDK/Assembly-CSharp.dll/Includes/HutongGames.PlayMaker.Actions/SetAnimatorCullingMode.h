#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorCullingMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorCullingMode"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& alwaysAnimate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorCullingMode*))(Il2CppBase() + 0x4FB2368))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorCullingMode*))(Il2CppBase() + 0x4FB2374))(this);
	}
	template <typename T = void> T SetCullingMode() {
		return ((T (*)(SetAnimatorCullingMode*))(Il2CppBase() + 0x4FB24DC))(this);
	}

};

}
