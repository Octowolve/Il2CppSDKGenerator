#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DynamicWeaponSoundEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DynamicWeaponSoundEventHandler"));
	}

	template <typename T = Il2CppString*> T& RaiseSound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& PutdownSound() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& ClipOutAsset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& ClipInAsset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& BoltRelaseBackAsset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackSound() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackPrepareSound() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackCancelSound() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackClipInSound() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackClipOutSound() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackBoltBackSound() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& SecondaryAttackInsertSound() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& FirstAttackSound() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& SecondAttackSound() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& StabSound() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& PrepareSound() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& OpenCoverSound() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& PressSound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& PlantOKSound() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& WeaponBank1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& WeaponBank2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mCurConfig() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& hasLoadedWithDisable() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostUnloadBankInLowMemoryDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StartLoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StartUnLoadBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackCancelSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackBoltBackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackInsertSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStabSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySecondaryAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPrepareSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenCoverSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPressSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlantOKSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOverWallSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayProneSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySwimSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSoundDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRaiseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPutDownSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipOutSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClipInSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBoltBackAndReleaseSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSoundWhenReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ResetAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T ApplyConfig(int32_t iWeaponAssetID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EB51C))(this, iWeaponAssetID);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EBC5C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EBE80))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC27C))(this);
	}
	template <typename T = void> T PostUnloadBankInLowMemoryDevice() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EB6FC))(this);
	}
	template <typename T = void> T _StartLoadBank() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EB878))(this);
	}
	template <typename T = void> T _StartUnLoadBank() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EBF30))(this);
	}
	template <typename T = Il2CppString*> T AdjustSound(Il2CppString* strSound) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51EC32C))(this, strSound);
	}
	template <typename T = bool> T get_IsSwiming() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC44C))(this);
	}
	template <typename T = void> T PlaySecondaryAttackPrepareSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC538))(this);
	}
	template <typename T = void> T PlaySecondaryAttackCancelSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC5EC))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipInSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC6A0))(this);
	}
	template <typename T = void> T PlaySecondaryAttackClipOutSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC754))(this);
	}
	template <typename T = void> T PlaySecondaryAttackBoltBackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EC9F8))(this);
	}
	template <typename T = void> T PlaySecondaryAttackInsertSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51ECAAC))(this);
	}
	template <typename T = void> T PlayFirstAttackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51ECB60))(this);
	}
	template <typename T = void> T PlaySecondAttackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51ECED0))(this);
	}
	template <typename T = void> T PlayStabSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51ED060))(this);
	}
	template <typename T = void> T HideItem() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51ED1A4))(this);
	}
	template <typename T = void> T OnFinishItem(Il2CppString* soundName) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51ED334))(this, soundName);
	}
	template <typename T = void> T PlaySecondaryAttackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51ED3D4))(this);
	}
	template <typename T = void> T PlayPrepareSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51ED488))(this, iWeaponID);
	}
	template <typename T = void> T PlayOpenCoverSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51ED544))(this, iWeaponID);
	}
	template <typename T = void> T PlayPressSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51ED600))(this, iWeaponID);
	}
	template <typename T = void> T PlayPlantOKSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51ED6BC))(this, iWeaponID);
	}
	template <typename T = void> T PlayOverWallSound(Il2CppString* soundName) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51ED778))(this, soundName);
	}
	template <typename T = void> T PlayProneSound(Il2CppString* soundName) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51ED834))(this, soundName);
	}
	template <typename T = void> T PlaySwimSound(Il2CppString* soundParameter) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51ED8F0))(this, soundParameter);
	}
	template <typename T = void> T PlayEventSound(Il2CppString* soundName) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51EDB30))(this, soundName);
	}
	template <typename T = void> T CheckSoundDirection(Il2CppString* soundName, int32_t direction) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*, int32_t))(Il2CppBase() + 0x51EDED4))(this, soundName, direction);
	}
	template <typename T = void> T PlayRaiseSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EE224))(this, iWeaponID);
	}
	template <typename T = void> T PlayPutDownSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE2EC))(this);
	}
	template <typename T = void> T PlayClipOutSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EE3A0))(this, iWeaponID);
	}
	template <typename T = void> T PlayClipInSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EE80C))(this, iWeaponID);
	}
	template <typename T = void> T PlayBoltBackAndReleaseSound(int32_t iWeaponID) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EE8E4))(this, iWeaponID);
	}
	template <typename T = bool> T CheckSoundWhenReplay() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE668))(this);
	}
	template <typename T = void> T _ResetAll() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EB7A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackPrepareSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackCancelSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackClipInSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackClipOutSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackBoltBackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackInsertSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFirstAttackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondAttackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayStabSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EE9FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HideItem() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EEA04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFinishItem(Il2CppString* P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, Il2CppString*))(Il2CppBase() + 0x51EEA0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySecondaryAttackSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EEA14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPrepareSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayOpenCoverSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPressSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPlantOKSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayRaiseSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayPutDownSound() {
		return ((T (*)(DynamicWeaponSoundEventHandler*))(Il2CppBase() + 0x51EEA44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayClipOutSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayClipInSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA54))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayBoltBackAndReleaseSound(int32_t P0) {
		return ((T (*)(DynamicWeaponSoundEventHandler*, int32_t))(Il2CppBase() + 0x51EEA5C))(this, P0);
	}

};

}
