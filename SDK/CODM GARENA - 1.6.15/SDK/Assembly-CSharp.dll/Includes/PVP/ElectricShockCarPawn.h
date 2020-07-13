#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ElectricShockCarPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ElectricShockCarPawn"));
	}

	template <typename T = Il2CppString*> static T& Socket_ElectricLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Socket_ElectricEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Prepare_Electric_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AttackPlayerInfoList() {
		return *(T*)((uintptr_t)this + 0xAB8);
	}
	template <typename T = uintptr_t> T& m_CarElectricShockComponment() {
		return *(T*)((uintptr_t)this + 0xABC);
	}
	template <typename T = uintptr_t> T& m_ElectricLineEffectRootTrans() {
		return *(T*)((uintptr_t)this + 0xAC0);
	}
	template <typename T = uintptr_t> T& m_ElectricLineTrans() {
		return *(T*)((uintptr_t)this + 0xAC4);
	}
	template <typename T = Il2CppVector3> T& m_ElectricLineLocalPos() {
		return *(T*)((uintptr_t)this + 0xAC8);
	}
	template <typename T = Il2CppVector3> T& m_ElectricCarPos() {
		return *(T*)((uintptr_t)this + 0xAD4);
	}
	template <typename T = float> T& m_ElectricLineAngleY() {
		return *(T*)((uintptr_t)this + 0xAE0);
	}
	template <typename T = Il2CppVector3> T& n_LineEffectOrignPos() {
		return *(T*)((uintptr_t)this + 0xAE4);
	}
	template <typename T = Il2CppQuaternion> T& m_LineEffectOrignRotation() {
		return *(T*)((uintptr_t)this + 0xAF0);
	}
	template <typename T = float> T& m_MoveAnimSpeedConfigValue() {
		return *(T*)((uintptr_t)this + 0xB00);
	}
	template <typename T = bool> T& DebugDoForceCrossUpdateAnim() {
		return *(T*)((uintptr_t)this + 0xB04);
	}
	template <typename T = int32_t> T& m_CurDeadParam() {
		return *(T*)((uintptr_t)this + 0xB08);
	}
	template <typename T = bool> T& UseRandomDeadAnim() {
		return *(T*)((uintptr_t)this + 0xB0C);
	}
	template <typename T = Il2CppString*> T& m_DieAnimation() {
		return *(T*)((uintptr_t)this + 0xB10);
	}
	template <typename T = float> T& targetDistance() {
		return *(T*)((uintptr_t)this + 0xB14);
	}
	template <typename T = float> T& carDistance() {
		return *(T*)((uintptr_t)this + 0xB18);
	}
	template <typename T = Il2CppVector3> T& newPos() {
		return *(T*)((uintptr_t)this + 0xB1C);
	}
	template <typename T = Il2CppVector3> T& dir() {
		return *(T*)((uintptr_t)this + 0xB28);
	}
	template <typename T = bool> T& isCarRotate() {
		return *(T*)((uintptr_t)this + 0xB34);
	}
	template <typename T = uintptr_t> T& m_RenderEffectAssetID() {
		return *(T*)((uintptr_t)this + 0xB38);
	}
	template <typename T = Il2CppVector3> T& focalPointDir() {
		return *(T*)((uintptr_t)this + 0xB3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCalBoundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewTeammateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TacticalRadarViewEnemySprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedToShowEnemySpriteOnRadar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigAnimComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReconnectInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddReconnectAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddReconnectAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawnProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigActorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustElectricRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove2Target() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMove2Target() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSetTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSetTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAttackPlayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitElectricLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLineRenderEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAttackAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPawnBodyPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAttackTargetPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAttackPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAttackPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CarElectricShock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSoundEmitterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBloodEffectAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanShowOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustDesiredRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedNormalMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecvMovePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttackPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}

	template <typename T = uintptr_t> T get_DefaultPhysState() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x346FF28))(this);
	}
	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x346FF30))(this);
	}
	template <typename T = bool> T get_IsAvatarLoadSync() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x346FF38))(this);
	}
	template <typename T = bool> T get_CanLockedByRPG() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x346FF40))(this);
	}
	template <typename T = Il2CppVector3> T get_CenterOffset() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x346FF48))(this);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x346FF84))(this);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewTeammateSprite(uintptr_t eTacticalPawnState) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3470024))(this, eTacticalPawnState);
	}
	template <typename T = Il2CppString*> T TacticalRadarViewEnemySprite() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34700E4))(this);
	}
	template <typename T = bool> T NeedToShowEnemySpriteOnRadar() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x347019C))(this);
	}
	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x347023C))(this);
	}
	template <typename T = int32_t> T get_CurDeadParam() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470268))(this);
	}
	template <typename T = void> T set_CurDeadParam(int32_t value) {
		return ((T (*)(ElectricShockCarPawn*, int32_t))(Il2CppBase() + 0x3470270))(this, value);
	}
	template <typename T = Il2CppString*> T get_DieAnimation() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470278))(this);
	}
	template <typename T = void> T set_DieAnimation(Il2CppString* value) {
		return ((T (*)(ElectricShockCarPawn*, Il2CppString*))(Il2CppBase() + 0x3470280))(this, value);
	}
	template <typename T = void> T ConfigAnimComponent() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470288))(this);
	}
	template <typename T = void> T CreateLogicalComponents() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470358))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470400))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34704A8))(this);
	}
	template <typename T = void> T InitRenderer() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x347056C))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x34709EC))(this, info);
	}
	template <typename T = void> T InitReconnectInfo() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3471AF4))(this);
	}
	template <typename T = void> T AddReconnectAttack(uint32_t targetPlayerID) {
		return ((T (*)(ElectricShockCarPawn*, uint32_t))(Il2CppBase() + 0x34724A8))(this, targetPlayerID);
	}
	template <typename T = void> T AddReconnectAttack_1(uintptr_t tempPawn) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3471F00))(this, tempPawn);
	}
	template <typename T = void> T InitPawnProperty(uintptr_t info) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3472FE8))(this, info);
	}
	template <typename T = void> T InitBehaviors(uintptr_t info) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x34732BC))(this, info);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x347392C))(this);
	}
	template <typename T = void> T ConfigActorRoot() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34739D4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3473A94))(this, deltaTime);
	}
	template <typename T = void> T AdjustElectricRotation() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3473C44))(this);
	}
	template <typename T = void> T InitIndicator() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x347162C))(this);
	}
	template <typename T = void> T RemoveIndicator() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34749D8))(this);
	}
	template <typename T = void> T StartIdle() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3474B78))(this);
	}
	template <typename T = void> T EndIdle() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3474C10))(this);
	}
	template <typename T = void> T StartCharge() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3474CA8))(this);
	}
	template <typename T = void> T EndCharge() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3474F20))(this);
	}
	template <typename T = void> T StartMove2Target() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3475198))(this);
	}
	template <typename T = void> T EndMove2Target() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3475230))(this);
	}
	template <typename T = void> T StartSetTargetPos(Il2CppVector3 targetPos) {
		return ((T (*)(ElectricShockCarPawn*, Il2CppVector3))(Il2CppBase() + 0x34752C8))(this, targetPos);
	}
	template <typename T = void> T EndSetTargetPos(Il2CppVector3 targetPos) {
		return ((T (*)(ElectricShockCarPawn*, Il2CppVector3))(Il2CppBase() + 0x34754F0))(this, targetPos);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(ElectricShockCarPawn*, bool))(Il2CppBase() + 0x34755C0))(this, isHidden);
	}
	template <typename T = void> T InitAttackPlayInfo() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470E64))(this);
	}
	template <typename T = void> T InitElectricLine() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3470F64))(this);
	}
	template <typename T = uintptr_t> T CreateLineRenderEffect() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34757B8))(this);
	}
	template <typename T = void> T PlayAttackAnim(uint32_t targetPlayerID) {
		return ((T (*)(ElectricShockCarPawn*, uint32_t))(Il2CppBase() + 0x3472D50))(this, targetPlayerID);
	}
	template <typename T = void> T StopAttackAnim(uint32_t targetPlayerID) {
		return ((T (*)(ElectricShockCarPawn*, uint32_t))(Il2CppBase() + 0x3475CD4))(this, targetPlayerID);
	}
	template <typename T = void> T UpdateEffect(uintptr_t info, Il2CppVector3 dstPos) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3474514))(this, info, dstPos);
	}
	template <typename T = void> T RemoveEffect(uintptr_t effect) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x34761B4))(this, effect);
	}
	template <typename T = Il2CppVector3> T GetTargetPawnBodyPoint(uintptr_t pawn) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x34742A4))(this, pawn);
	}
	template <typename T = uint32_t> T CheckAttackTargetPlayerID(uint32_t playerID) {
		return ((T (*)(ElectricShockCarPawn*, uint32_t))(Il2CppBase() + 0x347596C))(this, playerID);
	}
	template <typename T = uintptr_t> T AddAttackPlayerInfo(uint32_t playerID) {
		return ((T (*)(ElectricShockCarPawn*, uint32_t))(Il2CppBase() + 0x3475AC4))(this, playerID);
	}
	template <typename T = uintptr_t> T GetAttackPlayerInfo(uint32_t playerID) {
		return ((T (*)(ElectricShockCarPawn*, uint32_t))(Il2CppBase() + 0x3472650))(this, playerID);
	}
	template <typename T = void> T RemoveAttackPlayerInfo(uintptr_t info) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3475EFC))(this, info);
	}
	template <typename T = void> T CarElectricShock(bool shock) {
		return ((T (*)(ElectricShockCarPawn*, bool))(Il2CppBase() + 0x34753D0))(this, shock);
	}
	template <typename T = uintptr_t> T GetHitGroup(uintptr_t hitObject) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x34764FC))(this, hitObject);
	}
	template <typename T = bool> T get_ShouldCheckDetailCollider() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34765A4))(this);
	}
	template <typename T = uintptr_t> T GetSoundEmitterType() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34765AC))(this);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34766A8))(this);
	}
	template <typename T = void> T PlayHitEffect(uintptr_t hitMotionDir, uintptr_t damageType) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34767A4))(this, hitMotionDir, damageType);
	}
	template <typename T = int32_t> T GetBloodEffectAsset(uintptr_t info) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3476874))(this, info);
	}
	template <typename T = void> T Die(uintptr_t byType) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3476920))(this, byType);
	}
	template <typename T = void> T PlayAudio(Il2CppString* eventName) {
		return ((T (*)(ElectricShockCarPawn*, Il2CppString*))(Il2CppBase() + 0x3470CF8))(this, eventName);
	}
	template <typename T = void> T Die_1(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(ElectricShockCarPawn*, bool, uintptr_t))(Il2CppBase() + 0x3476C3C))(this, isHeadShot, damageType);
	}
	template <typename T = void> T DelayDie() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3476D5C))(this);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(ElectricShockCarPawn*, bool))(Il2CppBase() + 0x3476F38))(this, isHeadShot);
	}
	template <typename T = void> T DestroyPawn() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3477004))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34770AC))(this);
	}
	template <typename T = void> T AddOcclusionEffect_1(uintptr_t assetID) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3477204))(this, assetID);
	}
	template <typename T = void> T RemoveOcclusionEffect() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3477330))(this);
	}
	template <typename T = bool> T CanShowOcclusionEffect(uintptr_t assetID) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3477440))(this, assetID);
	}
	template <typename T = void> T RefreshOcclusionEffect() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3477708))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_1P() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34777DC))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x34779DC))(this);
	}
	template <typename T = void> T UpdateRotation(float deltaTime) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3477A90))(this, deltaTime);
	}
	template <typename T = void> T AdjustToGround(float deltaTime) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3477CF8))(this, deltaTime);
	}
	template <typename T = Il2CppQuaternion> T AdjustDesiredRotation(Il2CppVector3 focalDirection) {
		return ((T (*)(ElectricShockCarPawn*, Il2CppVector3))(Il2CppBase() + 0x3477DE8))(this, focalDirection);
	}
	template <typename T = void> T SimulatedNormalMove(float deltaTime) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3477F4C))(this, deltaTime);
	}
	template <typename T = void> T RecvMovePath(uintptr_t moveData) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x34780F0))(this, moveData);
	}
	template <typename T = int32_t> T GetTraceFlag() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478270))(this);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478310))(this);
	}
	template <typename T = void> T ClearAttackPlayerInfo() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478408))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldCalBoundary() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A28))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewTeammateSprite(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478A30))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_TacticalRadarViewEnemySprite() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A38))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedToShowEnemySpriteOnRadar() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigAnimComponent() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLogicalComponents() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478A68))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawnProperty(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478A70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitBehaviors(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478A78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478A80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3478A88))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(ElectricShockCarPawn*, bool))(Il2CppBase() + 0x3478A90))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHitGroup(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478A98))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSoundEmitterType() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478AA0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478AA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHitEffect(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3478AB0))(this, P0, P1);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetBloodEffectAsset(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478AB8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(ElectricShockCarPawn*, bool, uintptr_t))(Il2CppBase() + 0x3478AC0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(ElectricShockCarPawn*, bool))(Il2CppBase() + 0x3478AC8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyPawn() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478AD0))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_1P() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478AD8))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478AE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRotation(float P0) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3478AE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustToGround(float P0) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3478AF0))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_AdjustDesiredRotation(Il2CppVector3 P0) {
		return ((T (*)(ElectricShockCarPawn*, Il2CppVector3))(Il2CppBase() + 0x3478AF8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SimulatedNormalMove(float P0) {
		return ((T (*)(ElectricShockCarPawn*, float))(Il2CppBase() + 0x3478B1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RecvMovePath(uintptr_t P0) {
		return ((T (*)(ElectricShockCarPawn*, uintptr_t))(Il2CppBase() + 0x3478B24))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetTraceFlag() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478B2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginDestroy() {
		return ((T (*)(ElectricShockCarPawn*))(Il2CppBase() + 0x3478B34))(this);
	}

};

}
