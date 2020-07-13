#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorCurrentTransitionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorCurrentTransitionInfo"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& nameHash() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& userNameHash() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& normalizedTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorCurrentTransitionInfo*))(Il2CppBase() + 0x50566F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorCurrentTransitionInfo*))(Il2CppBase() + 0x5056714))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorCurrentTransitionInfo*))(Il2CppBase() + 0x5056AEC))(this);
	}
	template <typename T = void> T GetTransitionInfo() {
		return ((T (*)(GetAnimatorCurrentTransitionInfo*))(Il2CppBase() + 0x505688C))(this);
	}

};

}
