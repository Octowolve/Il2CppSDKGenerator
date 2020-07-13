#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SpectatingHUDBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SpectatingHUD_BR"));
	}

	template <typename T = uintptr_t> T& GrenadeIcon() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BRMedicIcon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& BRMedicIcon_Inactive() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& BRMedicNumLabel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& VestIcon() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VestArray() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& UltIcon() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& UltBG() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& UltEnergySprite() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& UltLevelupEffect() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& PackageButton() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& AmmoCountLabel() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CarriedAmmoCountLabel() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BagIcon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BagTenSlot() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BagTenSlotArray() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& BagFiveSlot() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BagFiveSlotArry() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& HPContent() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& TeamIndexLabel() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& TeamIndexColor() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& TeamIndexColor2() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& UltEnergyLayer() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& UltEnergyLayerLabel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& TeamIndexColorAlpha() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& kBrightColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kDarkColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& kBrightSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDarkSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanSwitchSpectatingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObSkillLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHideEffectObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWhenObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMedic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x3097138))(this);
	}
	template <typename T = bool> T IsCanSwitchSpectatingMode() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x3097148))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x30973DC))(this);
	}
	template <typename T = void> T OnGameHUDStateChanged() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x30975C0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x30977C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x3097A38))(this);
	}
	template <typename T = bool> T OnGamepadPressed() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x3097C54))(this);
	}
	template <typename T = void> T OpenPackage() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x3097D2C))(this);
	}
	template <typename T = void> T OnObSkillLevelUp(uintptr_t msg) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t))(Il2CppBase() + 0x3097FB8))(this, msg);
	}
	template <typename T = void> T DelayHideEffectObj() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309811C))(this);
	}
	template <typename T = void> T RefreshHP() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x3098238))(this);
	}
	template <typename T = void> T SetBloodBar(float scale, bool threeStyle) {
		return ((T (*)(SpectatingHUDBR*, float, bool))(Il2CppBase() + 0x3098428))(this, scale, threeStyle);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SpectatingHUDBR*, float))(Il2CppBase() + 0x3098588))(this, dt);
	}
	template <typename T = void> T UpdateWhenObserve(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3098798))(this, playerInfo, mgr);
	}
	template <typename T = void> T UpdateMedic(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3098C78))(this, playerInfo, mgr);
	}
	template <typename T = void> T UpdateGrenade(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30991EC))(this, playerInfo, mgr);
	}
	template <typename T = void> T UpdateUltInfo(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30994BC))(this, playerInfo, mgr);
	}
	template <typename T = void> T UpdateAmmoCount(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30999DC))(this, playerInfo, mgr);
	}
	template <typename T = void> T UpdateVestInfo(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3099B70))(this, playerInfo, mgr);
	}
	template <typename T = void> T SetVest(int32_t count, Il2CppString* spriteName) {
		return ((T (*)(SpectatingHUDBR*, int32_t, Il2CppString*))(Il2CppBase() + 0x3099FD4))(this, count, spriteName);
	}
	template <typename T = void> T ChangeSprite(uintptr_t binding, bool reveal) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, bool))(Il2CppBase() + 0x309A248))(this, binding, reveal);
	}
	template <typename T = void> T UpdateBagInfo(uintptr_t playerInfo, uintptr_t mgr) {
		return ((T (*)(SpectatingHUDBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3099D5C))(this, playerInfo, mgr);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanSwitchSpectatingMode() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309A578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309A57C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDStateChanged() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309A580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309A588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309A58C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshHP() {
		return ((T (*)(SpectatingHUDBR*))(Il2CppBase() + 0x309A590))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatingHUDBR*, float))(Il2CppBase() + 0x309A594))(this, P0);
	}

};

}
