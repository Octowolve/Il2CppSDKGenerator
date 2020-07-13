#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BaseVehicleAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BaseVehicleAudioComponent"));
	}

	template <typename T = Il2CppString*> T& AudioHorn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& AudioStopHorn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& AudioCrash() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& AudioEngine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AudioEngine1P() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& RTPCRelativeSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& RTPCRelativeRpm() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& RTPCGear() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& AudioEngineStop() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& AudioEngineStop1P() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& IntoWater() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& bAudioStart() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& lockedAlarmOnEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& lockedAlarmOffEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weaponRotateEvents() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& stopWeaponRotateEvents() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& bigGunRotateEvent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& stopBigGunRotateEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& CrashHardRTPC() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& CrashMaterialSwitch() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ownerVehicle() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_isEngineOn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& isSoundBankLoaded() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& isWeaponRotateSoundPlayings() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& currentWeaponAngles() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& isPlay1PSound() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& soundVisualTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSoundBankLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadSoundBankComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEngineSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIntoWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExploSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLockSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponRotateSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponRotateSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh1PSoundState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_audioPlayer() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372B094))(this);
	}
	template <typename T = void> T StartAudio() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372B23C))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t vehicle) {
		return ((T (*)(BaseVehicleAudioComponent*, uintptr_t))(Il2CppBase() + 0x372B44C))(this, vehicle);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(BaseVehicleAudioComponent*, float))(Il2CppBase() + 0x372B4F4))(this, deltaTime);
	}
	template <typename T = void> T ResetSoundBankLoaded() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372C220))(this);
	}
	template <typename T = void> T OnLoadSoundBankComplete() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372C2C4))(this);
	}
	template <typename T = void> T PlayEngineSound(bool isEngineOn) {
		return ((T (*)(BaseVehicleAudioComponent*, bool))(Il2CppBase() + 0x372C380))(this, isEngineOn);
	}
	template <typename T = void> T PlayHorn(bool bPlay) {
		return ((T (*)(BaseVehicleAudioComponent*, bool))(Il2CppBase() + 0x372C7B8))(this, bPlay);
	}
	template <typename T = void> T PlayCollisionEnter(bool bSlight, Il2CppVector3 collisionPoint, uintptr_t targetCollision) {
		return ((T (*)(BaseVehicleAudioComponent*, bool, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x372C960))(this, bSlight, collisionPoint, targetCollision);
	}
	template <typename T = void> T PlayHitPawn(uintptr_t pawn) {
		return ((T (*)(BaseVehicleAudioComponent*, uintptr_t))(Il2CppBase() + 0x372CFEC))(this, pawn);
	}
	template <typename T = void> T PlayIntoWater(Il2CppVector3 collisionPoint) {
		return ((T (*)(BaseVehicleAudioComponent*, Il2CppVector3))(Il2CppBase() + 0x372D2E8))(this, collisionPoint);
	}
	template <typename T = void> T PlayExploSound(Il2CppVector3 collisionPoint) {
		return ((T (*)(BaseVehicleAudioComponent*, Il2CppVector3))(Il2CppBase() + 0x372D40C))(this, collisionPoint);
	}
	template <typename T = void> T StopVoice() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372D4C8))(this);
	}
	template <typename T = void> T PlayLockSound(bool locked) {
		return ((T (*)(BaseVehicleAudioComponent*, bool))(Il2CppBase() + 0x372D610))(this, locked);
	}
	template <typename T = void> T RefreshWeaponRotateSound() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372BB8C))(this);
	}
	template <typename T = void> T PlayWeaponRotateSound(bool isPlay, int32_t weaponIdx) {
		return ((T (*)(BaseVehicleAudioComponent*, bool, int32_t))(Il2CppBase() + 0x372D7B8))(this, isPlay, weaponIdx);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372DCC8))(this);
	}
	template <typename T = bool> T Is1P() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372C5F8))(this);
	}
	template <typename T = void> T Refresh1PSoundState() {
		return ((T (*)(BaseVehicleAudioComponent*))(Il2CppBase() + 0x372DD6C))(this);
	}

};

}
