#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class INFGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "INFGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeamPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllPawnUpArmObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T StartMatch() {
		return ((T (*)(INFGame*))(Il2CppBase() + 0x403EF14))(this);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(INFGame*, uintptr_t))(Il2CppBase() + 0x403F04C))(this, viewTarget);
	}
	template <typename T = void> T RefreshTeamPawns() {
		return ((T (*)(INFGame*))(Il2CppBase() + 0x403F1E4))(this);
	}
	template <typename T = void> T RefreshAllPawnUpArmObjs() {
		return ((T (*)(INFGame*))(Il2CppBase() + 0x403F678))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(INFGame*))(Il2CppBase() + 0x403F950))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(INFGame*, uintptr_t))(Il2CppBase() + 0x403F958))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshTeamPawns() {
		return ((T (*)(INFGame*))(Il2CppBase() + 0x403F960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshAllPawnUpArmObjs() {
		return ((T (*)(INFGame*))(Il2CppBase() + 0x403F968))(this);
	}

};

}
