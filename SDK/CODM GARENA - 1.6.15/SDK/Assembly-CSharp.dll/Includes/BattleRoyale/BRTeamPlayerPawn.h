#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamPlayerPawn"));
	}

	template <typename T = uintptr_t> T& m_TeammateIndicator() {
		return *(T*)((uintptr_t)this + 0xEE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InfoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTeammateIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceTickSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryAddTeamateIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpArmFXAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAirCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkydivingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateSkyFlyStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2632494))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2632590))(this);
	}
	template <typename T = uintptr_t> T InfoType() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2632658))(this);
	}
	template <typename T = bool> T ShowTeammateIndicator() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2632754))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x26329F0))(this, info);
	}
	template <typename T = bool> T ForceTickSimulate() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2632E6C))(this);
	}
	template <typename T = void> T OnReSpawnPlayer() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633100))(this);
	}
	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x26331E4))(this);
	}
	template <typename T = void> T InitMesh(uintptr_t model) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2633294))(this, model);
	}
	template <typename T = void> T TryAddTeamateIndicator() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2632B3C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633350))(this);
	}
	template <typename T = int32_t> T GetUpArmFXAssetID(bool isLeftArm) {
		return ((T (*)(BRTeamPlayerPawn*, bool))(Il2CppBase() + 0x26334B4))(this, isLeftArm);
	}
	template <typename T = void> T OnStartAirCraft() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633644))(this);
	}
	template <typename T = void> T SimulateSkydivingStart(uintptr_t moveData) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x26337A8))(this, moveData);
	}
	template <typename T = void> T SimulateSkyFlyStart(uintptr_t moveData) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2633944))(this, moveData);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(BRTeamPlayerPawn*, bool))(Il2CppBase() + 0x2633AE0))(this, isHidden);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BAC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_InfoType() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2633BBC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ForceTickSimulate() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawnPlayer() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitMesh(uintptr_t P0) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2633BDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BE4))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetUpArmFXAssetID(bool P0) {
		return ((T (*)(BRTeamPlayerPawn*, bool))(Il2CppBase() + 0x2633BEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartAirCraft() {
		return ((T (*)(BRTeamPlayerPawn*))(Il2CppBase() + 0x2633BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSkydivingStart(uintptr_t P0) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2633BFC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateSkyFlyStart(uintptr_t P0) {
		return ((T (*)(BRTeamPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2633C78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(BRTeamPlayerPawn*, bool))(Il2CppBase() + 0x2633CF4))(this, P0);
	}

};

}
