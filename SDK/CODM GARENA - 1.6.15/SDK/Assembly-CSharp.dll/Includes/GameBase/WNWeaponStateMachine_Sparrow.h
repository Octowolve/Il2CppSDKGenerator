#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponStateMachineSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponStateMachine_Sparrow"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeAllStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayThrowWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeToPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncThrowWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineSparrow*))(Il2CppBase() + 0x49E7870))(this);
	}
	template <typename T = void> T PlayThrowWeaponAnim(int32_t animType, float speed) {
		return ((T (*)(WNWeaponStateMachineSparrow*, int32_t, float))(Il2CppBase() + 0x49E7CA0))(this, animType, speed);
	}
	template <typename T = void> T FadeToPlayAnim(int32_t animType) {
		return ((T (*)(WNWeaponStateMachineSparrow*, int32_t))(Il2CppBase() + 0x49E7DE8))(this, animType);
	}
	template <typename T = void> T SyncThrowWeaponAnim(uintptr_t animType) {
		return ((T (*)(WNWeaponStateMachineSparrow*, uintptr_t))(Il2CppBase() + 0x49E7FB0))(this, animType);
	}
	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WNWeaponStateMachineSparrow*))(Il2CppBase() + 0x49E810C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeAllStates() {
		return ((T (*)(WNWeaponStateMachineSparrow*))(Il2CppBase() + 0x49E823C))(this);
	}

};

}
