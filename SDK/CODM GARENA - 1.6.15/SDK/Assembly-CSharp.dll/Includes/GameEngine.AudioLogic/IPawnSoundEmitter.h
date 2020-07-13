#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class IPawnSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "IPawnSoundEmitter"));
	}


	template <typename T = bool> T get_IsFireing() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PawnData() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SpatialComponent() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsFirstPersonView() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_RoomHandle() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T InitAudio(uintptr_t pPwanSoundData) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, pPwanSoundData);
	}
	template <typename T = void> T InitAudioComponent() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DeInitAudio() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PlayerReset() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetViewType(uintptr_t viewType) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, viewType);
	}
	template <typename T = void> T SwitchRole() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Add1PFootstepAuditionRange(float fValue) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fValue);
	}
	template <typename T = void> T AddPawnStepSoundRange(float fValue) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fValue);
	}
	template <typename T = void> T Add1PFootstepVolume(float fValue) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fValue);
	}
	template <typename T = void> T SetPawnStepSoundRatio(float fValue) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fValue);
	}
	template <typename T = void> T UpdatePawnStepSound() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetPawnSwimmingSoundRatio(float fValue) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fValue);
	}
	template <typename T = void> T UpdatePawnSwimmingSound() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetBulletCountRatio(float fValue) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fValue);
	}
	template <typename T = void> T OnKill(bool isHeadShot, uintptr_t pDeadPawn, int32_t iItemID) {
		return ((T (*)(IPawnSoundEmitter*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, isHeadShot, pDeadPawn, iItemID);
	}
	template <typename T = void> T OnLocalPlayKillEnemyWithHeadShot() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnLPAimingAtTarget(uintptr_t pTarget, bool isAimint) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, pTarget, isAimint);
	}
	template <typename T = void> T Play1PStepSound(Il2CppString* strEventName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = void> T Play3PStepSound(Il2CppString* strEventName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = void> T Play1PSprintSound() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PlayAimingStepSound() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PlayLadderSound() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PlayIndividuationSound(Il2CppString* strEventName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = void> T NotifyGrenadeNearby(Il2CppString* ProjectileType) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, ProjectileType);
	}
	template <typename T = void> T OnHPChange() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PlayHurtSound(uintptr_t damageInfo) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, damageInfo);
	}
	template <typename T = void> T Die(bool isHeadShot) {
		return ((T (*)(IPawnSoundEmitter*, bool))(Il2CppBase() + 0x0))(this, isHeadShot);
	}
	template <typename T = void> T PlayDying(uintptr_t damageType) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, damageType);
	}
	template <typename T = void> T PlayFireVoice(uintptr_t pType) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, pType);
	}
	template <typename T = void> T PlayWeaponSound(Il2CppString* strWeaponSound) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strWeaponSound);
	}
	template <typename T = void> T PerformPhysics() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StartCrouching(bool FromPron) {
		return ((T (*)(IPawnSoundEmitter*, bool))(Il2CppBase() + 0x0))(this, FromPron);
	}
	template <typename T = void> T StopCrouching() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StartProning() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StopProning() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PlaySound(Il2CppString* strEventName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = void> T SetSwitch(Il2CppString* strSwitchGroupName, Il2CppString* strValueName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, strSwitchGroupName, strValueName);
	}
	template <typename T = void> T StopAll() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnEnterVolume(uintptr_t pRegion) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, pRegion);
	}
	template <typename T = void> T OnLeaveVolume(uintptr_t pRegion) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, pRegion);
	}
	template <typename T = void> T NotifyWeaponZoom(bool bZoom) {
		return ((T (*)(IPawnSoundEmitter*, bool))(Il2CppBase() + 0x0))(this, bZoom);
	}
	template <typename T = void> T PlayLadderStepSound(Il2CppString* eventName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, eventName);
	}
	template <typename T = void> T PlayVox(Il2CppString* str) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, str);
	}
	template <typename T = void> T PlayVox_1(uintptr_t eWhichVox) {
		return ((T (*)(IPawnSoundEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, eWhichVox);
	}
	template <typename T = void> T OnClimbUp() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClimbOver() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T NotifyWeaponBeginFire(Il2CppString* strEventName) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x0))(this, strEventName);
	}
	template <typename T = void> T NotifyWeaponStopFire() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetObstructionLevel(float fLevel) {
		return ((T (*)(IPawnSoundEmitter*, float))(Il2CppBase() + 0x0))(this, fLevel);
	}
	template <typename T = float> T GetObstructionLevel() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsAnySoundPlaying() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateParameter(Il2CppString* strRTPCName, float fValue) {
		return ((T (*)(IPawnSoundEmitter*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, strRTPCName, fValue);
	}
	template <typename T = void> T TickSeperately() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAuxSend(int32_t iIndex, Il2CppString* strAuxBus, float fControlVol) {
		return ((T (*)(IPawnSoundEmitter*, int32_t, Il2CppString*, float))(Il2CppBase() + 0x0))(this, iIndex, strAuxBus, fControlVol);
	}
	template <typename T = void> T WriteDebugLogs() {
		return ((T (*)(IPawnSoundEmitter*))(Il2CppBase() + 0x0))(this);
	}

};

}
