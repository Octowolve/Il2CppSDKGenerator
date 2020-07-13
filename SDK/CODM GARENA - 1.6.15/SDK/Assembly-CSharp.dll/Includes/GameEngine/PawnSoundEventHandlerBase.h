#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnSoundEventHandlerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnSoundEventHandlerBase"));
	}

	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mSoundEmitter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBoltBackAndReleaseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRaiseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenCoverSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPressSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlantOKSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStabSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPutDownSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackCancelSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackBoltBackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackInsertSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T SetOwner(uintptr_t pOwner) {
		return ((T (*)(PawnSoundEventHandlerBase*, uintptr_t))(Il2CppBase() + 0x273C974))(this, pOwner);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAudioList() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273CA9C))(this);
	}
	template <typename T = void> T PlayClipOutSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CB44))(this, iWeaponID);
	}
	template <typename T = void> T PlayClipInSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CBE4))(this, iWeaponID);
	}
	template <typename T = void> T PlayBoltBackAndReleaseSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CC84))(this, iWeaponID);
	}
	template <typename T = void> T PlayRaiseSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CD24))(this, iWeaponID);
	}
	template <typename T = void> T PlayPrepareSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CDC4))(this, iWeaponID);
	}
	template <typename T = void> T PlayOpenCoverSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CE64))(this, iWeaponID);
	}
	template <typename T = void> T PlayPressSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CF04))(this, iWeaponID);
	}
	template <typename T = void> T PlayPlantOKSound(int32_t iWeaponID) {
		return ((T (*)(PawnSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x273CFA4))(this, iWeaponID);
	}
	template <typename T = void> T PlayFirstAttackSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D044))(this);
	}
	template <typename T = void> T PlaySecondAttackSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D0DC))(this);
	}
	template <typename T = void> T PlayStabSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D174))(this);
	}
	template <typename T = void> T PlayPutDownSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D20C))(this);
	}
	template <typename T = void> T PlaySecondaryAttackSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D2A4))(this);
	}
	template <typename T = void> T PlaySecondaryAttackPrepareSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D33C))(this);
	}
	template <typename T = void> T PlaySecondaryAttackCancelSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D3D4))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipInSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D46C))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipOutSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D504))(this);
	}
	template <typename T = void> T PlaySecondaryAttackBoltBackSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D59C))(this);
	}
	template <typename T = void> T PlaySecondaryAttackInsertSound() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D634))(this);
	}
	template <typename T = void> T _PlayOneShot(Il2CppString* whichSound) {
		return ((T (*)(PawnSoundEventHandlerBase*, Il2CppString*))(Il2CppBase() + 0x273D6CC))(this, whichSound);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetAudioList() {
		return ((T (*)(PawnSoundEventHandlerBase*))(Il2CppBase() + 0x273D9C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy__PlayOneShot(Il2CppString* P0) {
		return ((T (*)(PawnSoundEventHandlerBase*, Il2CppString*))(Il2CppBase() + 0x273D9CC))(this, P0);
	}

};

}
