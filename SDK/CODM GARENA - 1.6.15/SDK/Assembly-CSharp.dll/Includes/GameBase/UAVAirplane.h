#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UAVAirplane
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UAVAirplane"));
	}

	template <typename T = int16_t> T& m_AirplaneID() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = uintptr_t> T& m_PropertySet() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = float> T& m_AliveTime() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = float> T& m_LeftAliveTime() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = float> T& m_LastTickTime() {
		return *(T*)((uintptr_t)this + 0xBDC);
	}
	template <typename T = uintptr_t> T& m_CSVData() {
		return *(T*)((uintptr_t)this + 0xBE0);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = float> T& m_DiffFlyTime() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> T& m_ActorRoot() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = int32_t> T& m_DeathEffectID() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = bool> T& m_IsTeamPlayerAirplane() {
		return *(T*)((uintptr_t)this + 0xBF4);
	}
	template <typename T = bool> static T& IsUseDefaultSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerInWarningDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D103C))(this);
	}
	template <typename T = uintptr_t> T get_PropertySet() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D104C))(this);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D1054))(this);
	}
	template <typename T = uintptr_t> T get_FireColliderShape() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D105C))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D1064))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D106C))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D1074))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UAVAirplane*, float))(Il2CppBase() + 0x27D11D8))(this, deltaTime);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(UAVAirplane*, uintptr_t))(Il2CppBase() + 0x27D164C))(this, info);
	}
	template <typename T = void> T SwitchRole(uintptr_t viewType, bool needToResetPose) {
		return ((T (*)(UAVAirplane*, uintptr_t, bool))(Il2CppBase() + 0x27D1C00))(this, viewType, needToResetPose);
	}
	template <typename T = void> T Die(uintptr_t byType) {
		return ((T (*)(UAVAirplane*, uintptr_t))(Il2CppBase() + 0x27D1D6C))(this, byType);
	}
	template <typename T = void> T Die_1(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(UAVAirplane*, bool, uintptr_t))(Il2CppBase() + 0x27D20A8))(this, isHeadShot, damageType);
	}
	template <typename T = bool> T IsLocalPlayerInWarningDistance() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D2230))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(UAVAirplane*, uintptr_t))(Il2CppBase() + 0x27D2590))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D26B8))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(UAVAirplane*, bool))(Il2CppBase() + 0x27D27D8))(this, isHeadShot);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D292C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UAVAirplane*, float))(Il2CppBase() + 0x27D2934))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(UAVAirplane*, uintptr_t))(Il2CppBase() + 0x27D293C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchRole(uintptr_t P0, bool P1) {
		return ((T (*)(UAVAirplane*, uintptr_t, bool))(Il2CppBase() + 0x27D2944))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(UAVAirplane*, bool, uintptr_t))(Il2CppBase() + 0x27D294C))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(UAVAirplane*, uintptr_t))(Il2CppBase() + 0x27D2954))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(UAVAirplane*))(Il2CppBase() + 0x27D295C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(UAVAirplane*, bool))(Il2CppBase() + 0x27D2964))(this, P0);
	}

};

}
