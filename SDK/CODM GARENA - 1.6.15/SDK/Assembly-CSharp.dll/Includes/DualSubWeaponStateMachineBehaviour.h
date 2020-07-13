#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DualSubWeaponStateMachineBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DualSubWeaponStateMachineBehaviour"));
	}

	template <typename T = Il2CppString*> T& LeftHandFlag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& LeftHandFlagWhenEnter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& LeftHandFlagWhenExit() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& SetWeightToZeroWhenExit() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(DualSubWeaponStateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x417B994))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(DualSubWeaponStateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x417BABC))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(DualSubWeaponStateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x417BC18))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(DualSubWeaponStateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x417BC88))(this, P0, P1, P2);
	}

};

}
