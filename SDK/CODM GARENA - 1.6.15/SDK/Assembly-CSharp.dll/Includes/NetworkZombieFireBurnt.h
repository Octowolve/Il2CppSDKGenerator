#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetworkZombieFireBurnt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetworkZombieFireBurnt"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplodeAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkZombieFireBurnt*, uintptr_t))(Il2CppBase() + 0x43B6DF4))(this, info);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkZombieFireBurnt*))(Il2CppBase() + 0x43B717C))(this);
	}
	template <typename T = void> T PlayExplodeAnim() {
		return ((T (*)(NetworkZombieFireBurnt*))(Il2CppBase() + 0x43B72A0))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkZombieFireBurnt*, bool))(Il2CppBase() + 0x43B73B4))(this, isHeadShot);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkZombieFireBurnt*, uintptr_t))(Il2CppBase() + 0x43B74FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkZombieFireBurnt*))(Il2CppBase() + 0x43B7504))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkZombieFireBurnt*, bool))(Il2CppBase() + 0x43B750C))(this, P0);
	}

};

}
