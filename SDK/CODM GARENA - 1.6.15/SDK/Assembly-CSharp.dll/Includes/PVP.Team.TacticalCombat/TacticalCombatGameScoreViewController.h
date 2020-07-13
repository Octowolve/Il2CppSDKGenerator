#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCarryBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D1F0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D294))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D3A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D4C8))(this);
	}
	template <typename T = void> T OnNotifyCarryBomb(uintptr_t msg) {
		return ((T (*)(TacticalCombatGameScoreViewController*, uintptr_t))(Il2CppBase() + 0x3D7D584))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D6FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D70C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalCombatGameScoreViewController*))(Il2CppBase() + 0x3D7D714))(this);
	}

};

}
