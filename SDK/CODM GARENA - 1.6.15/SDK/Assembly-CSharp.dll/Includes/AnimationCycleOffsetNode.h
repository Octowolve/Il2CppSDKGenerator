#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationCycleOffsetNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationCycleOffsetNode"));
	}

	template <typename T = Il2CppString*> T& ParamName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(AnimationCycleOffsetNode*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x22B4804))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(AnimationCycleOffsetNode*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x22B49B0))(this, P0, P1, P2);
	}

};

}
