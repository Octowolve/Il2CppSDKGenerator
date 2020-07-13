#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class TeamGamePlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "TeamGamePlayerPawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(TeamGamePlayerPawn*, uintptr_t))(Il2CppBase() + 0x3D81858))(this, info);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(TeamGamePlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x3D827C0))(this, isHeadShot, damageType);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(TeamGamePlayerPawn*, uintptr_t))(Il2CppBase() + 0x3D8A340))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(TeamGamePlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x3D8A348))(this, P0, P1);
	}

};

}
