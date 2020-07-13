#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGame"));
	}

	template <typename T = uintptr_t> T& EnemyAircrftMgr() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = uintptr_t> T& TeammateEffScaleMgr() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelativePawnsForAircraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAddToAircraftRelativePawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPawnEndSkyDiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_EnemyAircrftMgr() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261D640))(this);
	}
	template <typename T = void> T set_EnemyAircrftMgr(uintptr_t value) {
		return ((T (*)(BRTeamGame*, uintptr_t))(Il2CppBase() + 0x261D648))(this, value);
	}
	template <typename T = uintptr_t> T get_TeammateEffScaleMgr() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261D650))(this);
	}
	template <typename T = void> T set_TeammateEffScaleMgr(uintptr_t value) {
		return ((T (*)(BRTeamGame*, uintptr_t))(Il2CppBase() + 0x261D658))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261D660))(this);
	}
	template <typename T = void> T CreateGameComponents() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261D708))(this);
	}
	template <typename T = void> T GetRelativePawnsForAircraft(uintptr_t* relativePawnList) {
		return ((T (*)(BRTeamGame*, uintptr_t*))(Il2CppBase() + 0x261D7F4))(this, relativePawnList);
	}
	template <typename T = bool> T ShouldAddToAircraftRelativePawns(uintptr_t inPlayerInfo) {
		return ((T (*)(BRTeamGame*, uintptr_t))(Il2CppBase() + 0x261DAE0))(this, inPlayerInfo);
	}
	template <typename T = void> T OnLocalPawnEndSkyDiving() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261DBFC))(this);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261DCF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261DE28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateGameComponents() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261DE30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetRelativePawnsForAircraft(uintptr_t* P0) {
		return ((T (*)(BRTeamGame*, uintptr_t*))(Il2CppBase() + 0x261DE38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPawnEndSkyDiving() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261DE40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(BRTeamGame*))(Il2CppBase() + 0x261DE48))(this);
	}

};

}
