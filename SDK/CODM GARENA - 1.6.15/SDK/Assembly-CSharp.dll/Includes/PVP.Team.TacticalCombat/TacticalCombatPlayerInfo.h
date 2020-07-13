#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatPlayerInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnPlayerStateChanged(uintptr_t oldState) {
		return ((T (*)(TacticalCombatPlayerInfo*, uintptr_t))(Il2CppBase() + 0x3D811B8))(this, oldState);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(TacticalCombatPlayerInfo*, uintptr_t))(Il2CppBase() + 0x3D8148C))(this, P0);
	}

};

}
