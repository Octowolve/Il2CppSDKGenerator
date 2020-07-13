#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AProneBoolBlendTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AProneBoolBlendTree"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(AProneBoolBlendTree*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B7F6B4))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex, uintptr_t controller) {
		return ((T (*)(AProneBoolBlendTree*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3B7F800))(this, animator, stateInfo, layerIndex, controller);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(AProneBoolBlendTree*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B7F9E4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateUpdate(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(AProneBoolBlendTree*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3B7FA54))(this, P0, P1, P2, P3);
	}

};

}
