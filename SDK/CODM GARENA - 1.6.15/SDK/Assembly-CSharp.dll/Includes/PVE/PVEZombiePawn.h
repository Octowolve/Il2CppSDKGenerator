#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEZombiePawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEZombiePawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsZombie() {
		return ((T (*)(PVEZombiePawn*))(Il2CppBase() + 0x4051E98))(this);
	}
	template <typename T = void> T PreInit() {
		return ((T (*)(PVEZombiePawn*))(Il2CppBase() + 0x4051EA0))(this);
	}
	template <typename T = void> T PlayHitAnim(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(PVEZombiePawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4051F50))(this, hitMotionDir, damageType);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PVEZombiePawn*))(Il2CppBase() + 0x40520B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitAnim(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(PVEZombiePawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40520B8))(this, P0, P1);
	}

};

}
