#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RootMotionStateBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RootMotionStateBehavior"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T NotifyRootMotionEnd(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(RootMotionStateBehavior*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E036AC))(this, animator, stateInfo);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(RootMotionStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1E038C8))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateUpdate(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(RootMotionStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1E03AC8))(this, P0, P1, P2);
	}

};

}
