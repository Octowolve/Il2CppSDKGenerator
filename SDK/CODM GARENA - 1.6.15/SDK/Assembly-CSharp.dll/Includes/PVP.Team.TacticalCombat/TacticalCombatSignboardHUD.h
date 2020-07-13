#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatSignboardHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatSignboardHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Signboards() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_TCGameInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_TCGame() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_TCGameInfo() {
		return ((T (*)(TacticalCombatSignboardHUD*))(Il2CppBase() + 0x3D8682C))(this);
	}
	template <typename T = uintptr_t> T get_TCGame() {
		return ((T (*)(TacticalCombatSignboardHUD*))(Il2CppBase() + 0x3D86938))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TacticalCombatSignboardHUD*))(Il2CppBase() + 0x3D86A44))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TacticalCombatSignboardHUD*))(Il2CppBase() + 0x3D86D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalCombatSignboardHUD*))(Il2CppBase() + 0x3D8722C))(this);
	}

};

}
