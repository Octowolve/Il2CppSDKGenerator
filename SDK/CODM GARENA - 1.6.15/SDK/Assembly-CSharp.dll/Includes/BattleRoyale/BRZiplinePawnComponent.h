#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplinePawnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplinePawnComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_StartWeaponId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InVolumeList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_InVolume() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_UsingZipline() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_UsingSegmentData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_BtnHideTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_BtnHideCheckPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_NextUseTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_ExitByBtn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_LastShowBtn() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& m_IsPositive() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = float> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_MaxVelocity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_ExitAcce() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_ExitDownV() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& m_MoveTarget() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& m_MoveForward() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_FireLockTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_RotaTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_RotaNeedTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& m_StartForawrd() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& m_TargetForawrd() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_CurrentModel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CurrentItem() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_LastUsingSegmentIdx() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& m_ZiplinePos() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& m_LastPosition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& FX_SOCKET_3P() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_ShowEffect() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllVolumeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UesZipline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitZipLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBtnHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAccidentExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSimulateZiplineUid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSimulateZiplineUid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStartSimulate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearZiplineUid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEntryStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEntrySlip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSlipTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEntryExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetLocalPlayerPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartAutoRota() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAutoRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawnPsition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetPawnPsition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountItemPositionOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DettachModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TmpFix1PGetWeaoponAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimOnSwitchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockFireTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndLockFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceResetAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStartSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}

	template <typename T = float> T get_StartWeaponId() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670CB0))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670CB8))(this);
	}
	template <typename T = bool> T get_LastShowBtn() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670CC0))(this);
	}
	template <typename T = void> T set_LastShowBtn(bool value) {
		return ((T (*)(BRZiplinePawnComponent*, bool))(Il2CppBase() + 0x266C2AC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Forward() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670CC8))(this);
	}
	template <typename T = void> T set_Forward(Il2CppVector3 value) {
		return ((T (*)(BRZiplinePawnComponent*, Il2CppVector3))(Il2CppBase() + 0x2670D10))(this, value);
	}
	template <typename T = uintptr_t> T get_ZiplineMgr() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670DD8))(this);
	}
	template <typename T = uintptr_t> T get_Socket() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670E24))(this);
	}
	template <typename T = bool> T get_IsWaiting() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670F60))(this);
	}
	template <typename T = bool> T get_IsUsing() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x266E314))(this);
	}
	template <typename T = bool> T get_IsSliping() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670F74))(this);
	}
	template <typename T = bool> T get_IsCanUseZipline() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x266D3F4))(this);
	}
	template <typename T = uint32_t> T get_UsingUid() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2670F8C))(this);
	}
	template <typename T = uintptr_t> T get_MoveState() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267107C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2671090))(this, pawn);
	}
	template <typename T = void> T OnEnterVolume(uintptr_t volume, bool needAdd) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t, bool))(Il2CppBase() + 0x267119C))(this, volume, needAdd);
	}
	template <typename T = void> T OnExitVolume(uintptr_t volume) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2671438))(this, volume);
	}
	template <typename T = void> T ClearAllVolumeInfo() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267169C))(this);
	}
	template <typename T = bool> T UesZipline() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x266DD90))(this);
	}
	template <typename T = bool> T ExitZipLine() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x266DF40))(this);
	}
	template <typename T = void> T ForceExit() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26726A4))(this);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2672B14))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2673068))(this);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267310C))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26731B0))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2673264))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2673318))(this, deltaTime);
	}
	template <typename T = void> T OnSyncPosition(Il2CppVector3 pos) {
		return ((T (*)(BRZiplinePawnComponent*, Il2CppVector3))(Il2CppBase() + 0x2673C50))(this, pos);
	}
	template <typename T = void> T CheckBtn() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267345C))(this);
	}
	template <typename T = void> T CheckBtnShow() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2674200))(this);
	}
	template <typename T = void> T CheckBtnHide() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267402C))(this);
	}
	template <typename T = void> T ClearState() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2671A18))(this);
	}
	template <typename T = void> T SetBtnState(bool isShow) {
		return ((T (*)(BRZiplinePawnComponent*, bool))(Il2CppBase() + 0x2671AF4))(this, isShow);
	}
	template <typename T = bool> T CheckAccidentExit() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2673750))(this);
	}
	template <typename T = void> T CheckSimulateZiplineUid() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26738E0))(this);
	}
	template <typename T = void> T UseSimulateZiplineUid() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2674348))(this);
	}
	template <typename T = void> T SimulateStart(uintptr_t moveData) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2674714))(this, moveData);
	}
	template <typename T = void> T TryStartSimulate() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26745F8))(this);
	}
	template <typename T = void> T SimulateTick(uintptr_t moveData) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2674840))(this, moveData);
	}
	template <typename T = void> T SimulateEnd(uintptr_t moveData) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2674A10))(this, moveData);
	}
	template <typename T = void> T ClearZiplineUid() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2674E48))(this);
	}
	template <typename T = void> T ProcessPhysics(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2673AD4))(this, deltaTime);
	}
	template <typename T = void> T OnEntryStart() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267218C))(this);
	}
	template <typename T = void> T OnStartTick(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2674FB8))(this, deltaTime);
	}
	template <typename T = void> T OnEntrySlip() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2676F8C))(this);
	}
	template <typename T = void> T OnSlipTick(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2675098))(this, deltaTime);
	}
	template <typename T = void> T OnEntryExit() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2672458))(this);
	}
	template <typename T = void> T OnExitTick(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x267520C))(this, deltaTime);
	}
	template <typename T = void> T OnExitEnd(bool isForce) {
		return ((T (*)(BRZiplinePawnComponent*, bool))(Il2CppBase() + 0x2672814))(this, isForce);
	}
	template <typename T = void> T DoFalling() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26779E4))(this);
	}
	template <typename T = void> T TrySetLocalPlayerPhysicsState(uintptr_t phyState) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2676CDC))(this, phyState);
	}
	template <typename T = void> T OnStartAutoRota() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26769E0))(this);
	}
	template <typename T = void> T UpdateAutoRotation(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2675C5C))(this, deltaTime);
	}
	template <typename T = void> T SetPawnPsition() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2675804))(this);
	}
	template <typename T = void> T SetPawnPsition_1(Il2CppVector3 pos) {
		return ((T (*)(BRZiplinePawnComponent*, Il2CppVector3))(Il2CppBase() + 0x2677AE8))(this, pos);
	}
	template <typename T = void> T OnStartMove() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26764A4))(this);
	}
	template <typename T = float> T GetBaseVelocity() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2677C2C))(this);
	}
	template <typename T = bool> T CheckForward(Il2CppVector3 moveTarget) {
		return ((T (*)(BRZiplinePawnComponent*, Il2CppVector3))(Il2CppBase() + 0x2677D90))(this, moveTarget);
	}
	template <typename T = bool> T MoveStep(uintptr_t moveDis) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2676DC0))(this, moveDis);
	}
	template <typename T = void> T ExitStep(float moveDis, float dpwnDis) {
		return ((T (*)(BRZiplinePawnComponent*, float, float))(Il2CppBase() + 0x2677750))(this, moveDis, dpwnDis);
	}
	template <typename T = bool> T IsNeedExit() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x267703C))(this);
	}
	template <typename T = bool> T AutoSetTarget(bool moveToNext) {
		return ((T (*)(BRZiplinePawnComponent*, bool))(Il2CppBase() + 0x2673E04))(this, moveToNext);
	}
	template <typename T = void> T UpdatePawnVelocity() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2675B00))(this);
	}
	template <typename T = void> T DebugPosition(float deltaTime) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2678018))(this, deltaTime);
	}
	template <typename T = void> T AttachModel() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26762F4))(this);
	}
	template <typename T = void> T OnModelReady(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRZiplinePawnComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x26782D4))(this, assetId, arg);
	}
	template <typename T = void> T UpdateModel() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2675350))(this);
	}
	template <typename T = Il2CppVector3> T CountItemPositionOffset(Il2CppVector3 oriPos) {
		return ((T (*)(BRZiplinePawnComponent*, Il2CppVector3))(Il2CppBase() + 0x26785B4))(this, oriPos);
	}
	template <typename T = void> T SetItemAngle() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2678928))(this);
	}
	template <typename T = void> T DettachModel() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2677880))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2675E04))(this);
	}
	template <typename T = void> T TmpFix1PGetWeaoponAni(uintptr_t weapon) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x2678EBC))(this, weapon);
	}
	template <typename T = void> T PlayAnimOnSwitchEnd() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2672BB8))(this);
	}
	template <typename T = void> T LockFireTick() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2673540))(this);
	}
	template <typename T = void> T OnEndLockFire() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26775CC))(this);
	}
	template <typename T = void> T ForceResetAnimation() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2674BE4))(this);
	}
	template <typename T = void> T StopAnim() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2677220))(this);
	}
	template <typename T = void> T PlayStartSound() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26767D8))(this);
	}
	template <typename T = void> T PlayStopSound(bool isForce) {
		return ((T (*)(BRZiplinePawnComponent*, bool))(Il2CppBase() + 0x2671CA0))(this, isForce);
	}
	template <typename T = void> T UpdateEffect() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2675594))(this);
	}
	template <typename T = void> T HideEffect() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x2671810))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRZiplinePawnComponent*, uintptr_t))(Il2CppBase() + 0x26790D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26790D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26790E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26790E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingStart() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26790F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(BRZiplinePawnComponent*))(Il2CppBase() + 0x26790F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRZiplinePawnComponent*, float))(Il2CppBase() + 0x2679100))(this, P0);
	}

};

}
