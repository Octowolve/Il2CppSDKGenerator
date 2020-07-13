#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic.Components {

class AvatarAnimSHBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic.Components", "AvatarAnimSH_Base"));
	}

	template <typename T = Il2CppDictionary<char, Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*>*> static T& SoundParamCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsAvatarAnimSoundEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = char> static T& SplitCharLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& SplitCharSwungDash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& SplitCharSharp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& MoveSpeedVault() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsEditorDebugPlayEventSound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> static T& IgnoreMoveDirectionCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> static T& FORWARD_SPEED_PARAM_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LATERAL_SPEED_PARAM_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_negativeSpeedVault() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mLast1PAuditionRatio() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mCurrentPawnStepRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mLastPlaySoundTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& kSTEP_SOUND_UPDATE_VAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_fFootStepSoundPlayRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> static T& LengthToPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& mStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kStepSoundWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMetalStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kConcreteStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kSnowStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kDefaultSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kWoodSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kFootStepSoundLadder3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kStepSoundSimulatedTimeSpan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& mLastPawnPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mLastSimStepTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play3PJumpSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringParamWithCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SoundDirectionCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayStepSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IsStaticMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLadderSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySwimSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBoltBackAndReleaseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRaiseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenCoverSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPressSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlantOKSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStabSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPutDownSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackCancelSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackBoltBackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackInsertSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = void> T SetOwner(uintptr_t InPawn) {
		return ((T (*)(AvatarAnimSHBase*, uintptr_t))(Il2CppBase() + 0x3B9754C))(this, InPawn);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B97634))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAudioList() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9779C))(this);
	}
	template <typename T = void> T OnDespawn() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B97904))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B979D8))(this);
	}
	template <typename T = void> T Play3PJumpSound(Il2CppString* soundName) {
		return ((T (*)(AvatarAnimSHBase*, Il2CppString*))(Il2CppBase() + 0x3B97AA0))(this, soundName);
	}
	template <typename T = void> T PlayEventSound(Il2CppString* soundName) {
		return ((T (*)(AvatarAnimSHBase*, Il2CppString*))(Il2CppBase() + 0x3B97B70))(this, soundName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetStringParamWithCache(Il2CppString* soundName, char splitChar) {
		return ((T (*)(AvatarAnimSHBase*, Il2CppString*, char))(Il2CppBase() + 0x3B98130))(this, soundName, splitChar);
	}
	template <typename T = void> T SoundDirectionCheck(Il2CppString* soundName, int32_t direction) {
		return ((T (*)(AvatarAnimSHBase*, Il2CppString*, int32_t))(Il2CppBase() + 0x3B98448))(this, soundName, direction);
	}
	template <typename T = bool> T CanPlaySound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B989F4))(this);
	}
	template <typename T = void> T _PlayStepSound(Il2CppString* stepSound) {
		return ((T (*)(AvatarAnimSHBase*, Il2CppString*))(Il2CppBase() + 0x3B987A4))(this, stepSound);
	}
	template <typename T = bool> T _IsStaticMove() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B98CEC))(this);
	}
	template <typename T = void> T PlayLadderSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B98EBC))(this);
	}
	template <typename T = void> T PlaySwimSound(Il2CppString* soundParameter) {
		return ((T (*)(AvatarAnimSHBase*, Il2CppString*))(Il2CppBase() + 0x3B990D4))(this, soundParameter);
	}
	template <typename T = void> T PlayWeaponSound(uintptr_t weaponSoundType, int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, uintptr_t, int32_t))(Il2CppBase() + 0x3B99300))(this, weaponSoundType, iWeaponID);
	}
	template <typename T = void> T PlayClipOutSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B995E4))(this, iWeaponID);
	}
	template <typename T = void> T PlayClipInSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B996C8))(this, iWeaponID);
	}
	template <typename T = void> T PlayBoltBackAndReleaseSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B997AC))(this, iWeaponID);
	}
	template <typename T = void> T PlayRaiseSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B99890))(this, iWeaponID);
	}
	template <typename T = void> T PlayPrepareSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B99974))(this, iWeaponID);
	}
	template <typename T = void> T PlayOpenCoverSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B99A58))(this, iWeaponID);
	}
	template <typename T = void> T PlayPressSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B99B3C))(this, iWeaponID);
	}
	template <typename T = void> T PlayPlantOKSound(int32_t iWeaponID) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B99C20))(this, iWeaponID);
	}
	template <typename T = void> T PlayFirstAttackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B99D04))(this);
	}
	template <typename T = void> T PlaySecondAttackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B99DE0))(this);
	}
	template <typename T = void> T PlayStabSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B99EBC))(this);
	}
	template <typename T = void> T PlayPutDownSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B99F98))(this);
	}
	template <typename T = void> T PlaySecondaryAttackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A074))(this);
	}
	template <typename T = void> T PlaySecondaryAttackPrepareSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A150))(this);
	}
	template <typename T = void> T PlaySecondaryAttackCancelSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A22C))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipInSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A308))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipOutSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A3E4))(this);
	}
	template <typename T = void> T PlaySecondaryAttackBoltBackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A4C0))(this);
	}
	template <typename T = void> T PlaySecondaryAttackInsertSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A59C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetOwner(uintptr_t P0) {
		return ((T (*)(AvatarAnimSHBase*, uintptr_t))(Il2CppBase() + 0x3B9A790))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetAudioList() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A798))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayClipOutSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayClipInSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayBoltBackAndReleaseSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayRaiseSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPrepareSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayOpenCoverSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPressSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPlantOKSound(int32_t P0) {
		return ((T (*)(AvatarAnimSHBase*, int32_t))(Il2CppBase() + 0x3B9A7D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFirstAttackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A7E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondAttackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A7E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayStabSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A7F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPutDownSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A7F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackPrepareSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A808))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackCancelSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A810))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackClipInSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackClipOutSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackBoltBackSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackInsertSound() {
		return ((T (*)(AvatarAnimSHBase*))(Il2CppBase() + 0x3B9A830))(this);
	}

};

}
