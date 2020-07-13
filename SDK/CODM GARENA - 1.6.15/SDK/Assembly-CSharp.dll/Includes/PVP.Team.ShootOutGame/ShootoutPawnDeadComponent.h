#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootoutPawnDeadComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootoutPawnDeadComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGoliathSelfExplodeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T PlayGoliathSelfExplodeEffect() {
		return ((T (*)(ShootoutPawnDeadComponent*))(Il2CppBase() + 0x34C986C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayGoliathSelfExplodeEffect() {
		return ((T (*)(ShootoutPawnDeadComponent*))(Il2CppBase() + 0x34C9DB0))(this);
	}

};

}
