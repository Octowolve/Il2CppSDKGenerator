#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSoundEventHandlerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSoundEventHandlerBase"));
	}

	template <typename T = bool> T& CallbackWhenAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_PawnSoundEmitter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FireSound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& FireSound_Compressor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& WeaponIdleSound() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& WeaponStopSound() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& WeaponUsingLoopSound() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& StepSoundRangeOverride() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& FireingVoicePrefix() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SecondaryFireSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRaiseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPutDownSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStabSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBoltBackAndReleaseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenCoverSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPressSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlantOKSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackCancelSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackBoltBackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackInsertSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayWeaponSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = bool> T get_CallbackWhenAction() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BB830))(this);
	}
	template <typename T = void> T set_CallbackWhenAction(bool value) {
		return ((T (*)(WeaponSoundEventHandlerBase*, bool))(Il2CppBase() + 0x33BB838))(this, value);
	}
	template <typename T = uintptr_t> T get_mPawnSoundEmitter() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BB840))(this);
	}
	template <typename T = void> T set_mPawnSoundEmitter(uintptr_t value) {
		return ((T (*)(WeaponSoundEventHandlerBase*, uintptr_t))(Il2CppBase() + 0x33BB9CC))(this, value);
	}
	template <typename T = void> T SetOwner(uintptr_t pOwner) {
		return ((T (*)(WeaponSoundEventHandlerBase*, uintptr_t))(Il2CppBase() + 0x33BB9D4))(this, pOwner);
	}
	template <typename T = void> T PlayRaiseSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BBB50))(this, iWeaponID);
	}
	template <typename T = void> T PlayPutDownSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BBBF0))(this);
	}
	template <typename T = void> T PlayFirstAttackSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BBC88))(this);
	}
	template <typename T = void> T PlaySecondAttackSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BBD20))(this);
	}
	template <typename T = void> T PlayStabSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BBDB8))(this);
	}
	template <typename T = void> T PlayClipOutSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BBE50))(this, iWeaponID);
	}
	template <typename T = void> T HideItem() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BBEF0))(this);
	}
	template <typename T = void> T OnFinishItem(Il2CppString* soundName) {
		return ((T (*)(WeaponSoundEventHandlerBase*, Il2CppString*))(Il2CppBase() + 0x33BBF88))(this, soundName);
	}
	template <typename T = void> T PlayClipInSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BC028))(this, iWeaponID);
	}
	template <typename T = void> T PlayBoltBackAndReleaseSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BC0C8))(this, iWeaponID);
	}
	template <typename T = void> T PlayPrepareSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BC168))(this, iWeaponID);
	}
	template <typename T = void> T PlayOpenCoverSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BC208))(this, iWeaponID);
	}
	template <typename T = void> T PlayPressSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BC2A8))(this, iWeaponID);
	}
	template <typename T = void> T PlayPlantOKSound(int32_t iWeaponID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, int32_t))(Il2CppBase() + 0x33BC348))(this, iWeaponID);
	}
	template <typename T = void> T PlaySecondaryAttackSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC3E8))(this);
	}
	template <typename T = void> T PlaySecondaryAttackPrepareSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC480))(this);
	}
	template <typename T = void> T PlaySecondaryAttackCancelSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC518))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipInSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC5B0))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipOutSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC648))(this);
	}
	template <typename T = void> T PlaySecondaryAttackBoltBackSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC6E0))(this);
	}
	template <typename T = void> T PlaySecondaryAttackInsertSound() {
		return ((T (*)(WeaponSoundEventHandlerBase*))(Il2CppBase() + 0x33BC778))(this);
	}
	template <typename T = void> T _PlayWeaponSound(Il2CppString* strSoundID) {
		return ((T (*)(WeaponSoundEventHandlerBase*, Il2CppString*))(Il2CppBase() + 0x33BC810))(this, strSoundID);
	}

};

}
