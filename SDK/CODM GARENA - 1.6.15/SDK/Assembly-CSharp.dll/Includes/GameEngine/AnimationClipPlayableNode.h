#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationClipPlayableNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationClipPlayableNode"));
	}

	template <typename T = bool> T& m_HasSetAvailableClilp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t playableHandle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B42AD0))(0, playableHandle);
	}
	template <typename T = bool> T get_HasSetAvailableClip() {
		return ((T (*)(AnimationClipPlayableNode*))(Il2CppBase() + 0x2B42BB4))(this);
	}
	template <typename T = void> T set_HasSetAvailableClip(bool value) {
		return ((T (*)(AnimationClipPlayableNode*, bool))(Il2CppBase() + 0x2B42BBC))(this, value);
	}

};

}
