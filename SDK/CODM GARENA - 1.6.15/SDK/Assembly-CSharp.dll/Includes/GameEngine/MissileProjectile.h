#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MissileProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MissileProjectile"));
	}

	template <typename T = Il2CppVector3> T& m_Position() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_Param() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppQuaternion> T& m_BaseRotation() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppQuaternion> T& m_Rotation() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& m_IsLocalCotrolled() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& m_IsInDeadReplayOrSpectating() {
		return *(T*)((uintptr_t)this + 0x165);
	}
	template <typename T = float> static T& m_CameraOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& m_SpawnTime() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& m_ExplosionTargetTime() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& m_ExplodeAtTargetTime() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = bool> T& m_EnableControl() {
		return *(T*)((uintptr_t)this + 0x175);
	}
	template <typename T = float> T& m_EndControllTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> static T& m_EndControllTimeDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppVector3> T& m_InitPosition() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> static T& m_HellfireRadarIcon_Own() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_HellfireRadarIcon_Enemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_AirstrikeRadarIcon_Own() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_AirstrikeRadarIcon_Enemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySpawnSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetControllableType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Launch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncMissileState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateExplosionTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnExplosionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExplodeVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreRadarEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeSince() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709EC4))(this);
	}
	template <typename T = Il2CppQuaternion> T get_Rotation() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709ED8))(this);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709EE8))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709EF0))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709EF8))(this);
	}
	template <typename T = uintptr_t> T get_FlyInfo() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709F00))(this);
	}
	template <typename T = uint32_t> T get_ClientFlyTime() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x2709F74))(this);
	}
	template <typename T = bool> T get_EnableControl() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270A0FC))(this);
	}
	template <typename T = void> T Initialize(uintptr_t param, uintptr_t flyInfo, uintptr_t camp, uint32_t playerID, int32_t actorId, int32_t projectileID) {
		return ((T (*)(MissileProjectile*, uintptr_t, uintptr_t, uintptr_t, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x270A104))(this, param, flyInfo, camp, playerID, actorId, projectileID);
	}
	template <typename T = void> T PlaySpawnSound() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270AB1C))(this);
	}
	template <typename T = uintptr_t> T GetControllableType() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270B3CC))(this);
	}
	template <typename T = void> T CalcCamera(float delatTime, uintptr_t out_CamLoc, uintptr_t out_CamRot) {
		return ((T (*)(MissileProjectile*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x270B46C))(this, delatTime, out_CamLoc, out_CamRot);
	}
	template <typename T = void> T UpdateRotation(Il2CppVector3 deltaEulerAngles) {
		return ((T (*)(MissileProjectile*, Il2CppVector3))(Il2CppBase() + 0x270B5D4))(this, deltaEulerAngles);
	}
	template <typename T = void> T Launch() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270B954))(this);
	}
	template <typename T = void> T OnSyncMissileState(Il2CppVector3 postion, Il2CppVector3 velocity, uintptr_t state, uint32_t flyTimeElapse) {
		return ((T (*)(MissileProjectile*, Il2CppVector3, Il2CppVector3, uintptr_t, uint32_t))(Il2CppBase() + 0x270BC00))(this, postion, velocity, state, flyTimeElapse);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MissileProjectile*, float))(Il2CppBase() + 0x270C2B8))(this, deltaTime);
	}
	template <typename T = bool> T SimulateTick(float deltaTime) {
		return ((T (*)(MissileProjectile*, float))(Il2CppBase() + 0x270C7F0))(this, deltaTime);
	}
	template <typename T = void> T UpdateExplosionTime() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270A9FC))(this);
	}
	template <typename T = void> T CheckEnableControl() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270C6C4))(this);
	}
	template <typename T = uintptr_t> T GetCurrentHit() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270C10C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270CDC8))(this);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270CE70))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270CF20))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270D1B0))(this);
	}
	template <typename T = void> T SpawnFlightEffect() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270A744))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 explodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(MissileProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x270D440))(this, explodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T SpawnExplosionEffect(Il2CppVector3 explodeLocation) {
		return ((T (*)(MissileProjectile*, Il2CppVector3))(Il2CppBase() + 0x270E0B0))(this, explodeLocation);
	}
	template <typename T = bool> T IsExplodeVisible(Il2CppVector3 pos) {
		return ((T (*)(MissileProjectile*, Il2CppVector3))(Il2CppBase() + 0x270E3CC))(this, pos);
	}
	template <typename T = Il2CppString*> T GetRadarIcon() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270E544))(this);
	}
	template <typename T = bool> T ShowInRadar() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270E794))(this);
	}
	template <typename T = bool> T IgnoreRadarEdge() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270E84C))(this);
	}
	template <typename T = bool> static T get_CanPauseGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x270E8F8))(0);
	}
	template <typename T = float> static T get_CurrentTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x270A8E8))(0);
	}
	template <typename T = float> static T TimeSince(float startTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2709FA0))(0, startTime);
	}
	template <typename T = void> T SpawnFlightEffectm__0(uintptr_t effect) {
		return ((T (*)(MissileProjectile*, uintptr_t))(Il2CppBase() + 0x270EA0C))(this, effect);
	}
	template <typename T = void> T SpawnExplosionEffectm__1(uintptr_t effect) {
		return ((T (*)(MissileProjectile*, uintptr_t))(Il2CppBase() + 0x270EC24))(this, effect);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MissileProjectile*, float))(Il2CppBase() + 0x270ED84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270ED8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270ED94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270ED9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(MissileProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x270EDA4))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_IsExplodeVisible(Il2CppVector3 P0) {
		return ((T (*)(MissileProjectile*, Il2CppVector3))(Il2CppBase() + 0x270EDD0))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetRadarIcon() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270EDF0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowInRadar() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270EDF8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IgnoreRadarEdge() {
		return ((T (*)(MissileProjectile*))(Il2CppBase() + 0x270EE00))(this);
	}

};

}
