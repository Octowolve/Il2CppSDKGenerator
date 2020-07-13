#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationRandomNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationRandomNode"));
	}

	template <typename T = Il2CppString*> T& ParamName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RandomCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateMachineEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnStateMachineEnter(uintptr_t animator, int32_t stateMachinePathHash) {
		return ((T (*)(AnimationRandomNode*, uintptr_t, int32_t))(Il2CppBase() + 0x22B5194))(this, animator, stateMachinePathHash);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateMachineEnter(uintptr_t P0, int32_t P1) {
		return ((T (*)(AnimationRandomNode*, uintptr_t, int32_t))(Il2CppBase() + 0x22B52E8))(this, P0, P1);
	}

};

}
