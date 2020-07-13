#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkZombieBomber
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkZombieBomber"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAliveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(NetworkZombieBomber*, uintptr_t))(Il2CppBase() + 0x3EC09F8))(this, info);
	}
	template <typename T = void> T PlayExplosionAnim() {
		return ((T (*)(NetworkZombieBomber*))(Il2CppBase() + 0x3EC0C60))(this);
	}
	template <typename T = void> T PlayAliveState() {
		return ((T (*)(NetworkZombieBomber*))(Il2CppBase() + 0x3EC0D74))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(NetworkZombieBomber*, bool))(Il2CppBase() + 0x3EC1030))(this, isHeadShot);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(NetworkZombieBomber*, uintptr_t))(Il2CppBase() + 0x3EC1174))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAliveState() {
		return ((T (*)(NetworkZombieBomber*))(Il2CppBase() + 0x3EC1178))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(NetworkZombieBomber*, bool))(Il2CppBase() + 0x3EC117C))(this, P0);
	}

};

}
