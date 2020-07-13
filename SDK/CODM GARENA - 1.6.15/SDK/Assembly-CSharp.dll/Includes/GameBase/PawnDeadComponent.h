#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnDeadComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnDeadComponent"));
	}

	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_InDeadFalling() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_FallingToPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_DeadFallingSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DieEffectList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_LoadingAssetIds() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_killingConfig() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& UnProcessDeadFallingMinDistanceSqure() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_InPlayDeadAnim() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_DeadAnimName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_PlayTPDeadAnimFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_BeginPlayDeadAnimTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsBurnDead() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& DeadBodyState() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> static T& UseNewStopPlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFixLasdDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTickEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnRevived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPawnDeadFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeadHitDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectRandomAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBurnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordDeadBodyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginPlayTPDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalStopPlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeadPlayLimitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalPlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayDeadAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalPlayRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGoliathSelfExplodeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDeadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnDeadComponent*, uintptr_t))(Il2CppBase() + 0x16A4220))(this, pawn);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A433C))(this);
	}
	template <typename T = void> T CheckFixLasdDeadAnim() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A4A34))(this);
	}
	template <typename T = void> T UpdateTickEnable() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A4C98))(this);
	}
	template <typename T = void> T set_InDeadFalling(bool value) {
		return ((T (*)(PawnDeadComponent*, bool))(Il2CppBase() + 0x16A4334))(this, value);
	}
	template <typename T = void> T set_InPlayDeadAnim(bool value) {
		return ((T (*)(PawnDeadComponent*, bool))(Il2CppBase() + 0x16A4D78))(this, value);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnDeadComponent*, float))(Il2CppBase() + 0x16A4D80))(this, deltaTime);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A5098))(this);
	}
	template <typename T = void> T OnReSpawn() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A5170))(this);
	}
	template <typename T = void> T OnPawnRevived() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x1667494))(this);
	}
	template <typename T = void> T TickPawnDeadFalling(float deltaTime) {
		return ((T (*)(PawnDeadComponent*, float))(Il2CppBase() + 0x16A4E90))(this, deltaTime);
	}
	template <typename T = void> T OnPawnDead() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x165D8A4))(this);
	}
	template <typename T = unsigned char> T GetDeadHitDirection() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A53C8))(this);
	}
	template <typename T = void> T SelectRandomAnim(Il2CppArray<uintptr_t>* animArray, uintptr_t animName) {
		return ((T (*)(PawnDeadComponent*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x16A59A0))(this, animArray, animName);
	}
	template <typename T = bool> T IsBurnDead() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A5ADC))(this);
	}
	template <typename T = Il2CppString*> T GetLastDeadAnim() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A5C6C))(this);
	}
	template <typename T = void> T StopPlayDeadAnim() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x167B698))(this);
	}
	template <typename T = Il2CppString*> T GetDefaultDeadAnim() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A5DBC))(this);
	}
	template <typename T = void> T RecordDeadBodyState() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x165D308))(this);
	}
	template <typename T = void> T BeginPlayTPDeadAnim(bool isHeadShot) {
		return ((T (*)(PawnDeadComponent*, bool))(Il2CppBase() + 0x16A5F64))(this, isHeadShot);
	}
	template <typename T = void> T InternalStopPlayDeadAnim() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A4424))(this);
	}
	template <typename T = float> T GetDeadPlayLimitTime() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A6DE0))(this);
	}
	template <typename T = void> T InternalPlayDeadAnim(float deltaTime) {
		return ((T (*)(PawnDeadComponent*, float))(Il2CppBase() + 0x16A6EB4))(this, deltaTime);
	}
	template <typename T = bool> T ShouldPlayDeadAnim() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A7570))(this);
	}
	template <typename T = void> T InternalPlayRagdoll() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A743C))(this);
	}
	template <typename T = bool> T CheckPlayRagdoll() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A7734))(this);
	}
	template <typename T = void> T PlayGoliathSelfExplodeEffect() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A793C))(this);
	}
	template <typename T = bool> T IsSameCamp(uint32_t playerID, uintptr_t camp) {
		return ((T (*)(PawnDeadComponent*, uint32_t, uintptr_t))(Il2CppBase() + 0x16A80EC))(this, playerID, camp);
	}
	template <typename T = void> T PlayDeadEffect() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A83E4))(this);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A92F8))(this);
	}
	template <typename T = void> T PlayEffect(int32_t killEffectId, Il2CppString* boneName) {
		return ((T (*)(PawnDeadComponent*, int32_t, Il2CppString*))(Il2CppBase() + 0x16A7E88))(this, killEffectId, boneName);
	}
	template <typename T = void> T OnEffectLoaded(int32_t assetId, uintptr_t obj) {
		return ((T (*)(PawnDeadComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x16A9608))(this, assetId, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnDeadComponent*, uintptr_t))(Il2CppBase() + 0x16A9E90))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A9E98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PawnDeadComponent*, float))(Il2CppBase() + 0x16A9EA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A9EA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawn() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A9EB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginDestroy() {
		return ((T (*)(PawnDeadComponent*))(Il2CppBase() + 0x16A9EB8))(this);
	}

};

}
