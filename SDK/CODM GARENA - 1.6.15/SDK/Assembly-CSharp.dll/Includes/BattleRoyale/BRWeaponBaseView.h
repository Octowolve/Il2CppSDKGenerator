#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRWeaponBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRWeaponBaseView"));
	}

	template <typename T = uintptr_t> T& WeaponSlotType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FocusGo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AmmoCountLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& AmmoCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& CarriedAmmoCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Picture() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WeaponBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& AttachmengEffectGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AttachmengEffectBG() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& AttachmengEffectSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& InactiveLabelGo() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& FireModeTipsLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& FireModeChangeBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& FireModeRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& CloseAttachmentEffectCoroutine() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_LowAmmoColor() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_LastWeaponColor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenWeaponView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentWeaponIconColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAttachmentAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAttachmentEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAttachmentEffectEnumerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAttachmentEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C53C))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(BRWeaponBaseView*, uintptr_t))(Il2CppBase() + 0x265C544))(this, value);
	}
	template <typename T = uintptr_t> T get_CloseAttachmentEffectCoroutine() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C54C))(this);
	}
	template <typename T = void> T set_CloseAttachmentEffectCoroutine(uintptr_t value) {
		return ((T (*)(BRWeaponBaseView*, uintptr_t))(Il2CppBase() + 0x265C554))(this, value);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C55C))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C564))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C608))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C614))(this);
	}
	template <typename T = void> T TweenWeaponView() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C624))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(BRWeaponBaseView*, uintptr_t))(Il2CppBase() + 0x265B5B4))(this, data);
	}
	template <typename T = void> T RefreshUIFull() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265C820))(this);
	}
	template <typename T = void> T RefreshWeaponAmmoCount() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265CC50))(this);
	}
	template <typename T = void> T RefreshWeaponCarriedAmmoCount() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265B9A0))(this);
	}
	template <typename T = void> T SetCurrentWeaponIconColor(uintptr_t color) {
		return ((T (*)(BRWeaponBaseView*, uintptr_t))(Il2CppBase() + 0x265D270))(this, color);
	}
	template <typename T = void> T RefreshEquipped() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265B7D8))(this);
	}
	template <typename T = void> T SetWeaponUI(bool isActive) {
		return ((T (*)(BRWeaponBaseView*, bool))(Il2CppBase() + 0x265D40C))(this, isActive);
	}
	template <typename T = void> T ShowAttachmentAdd(int32_t itemId, int32_t weaponPosId) {
		return ((T (*)(BRWeaponBaseView*, int32_t, int32_t))(Il2CppBase() + 0x265BE40))(this, itemId, weaponPosId);
	}
	template <typename T = void> T OpenAttachmentEffect(Il2CppString* attachmentSpriteName, Il2CppString* bgColor) {
		return ((T (*)(BRWeaponBaseView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x265D4D4))(this, attachmentSpriteName, bgColor);
	}
	template <typename T = uintptr_t> T CloseAttachmentEffectEnumerator() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265D650))(this);
	}
	template <typename T = void> T CloseAttachmentEffect() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265D1A8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265D738))(this);
	}
	template <typename T = void> T Tick(float _) {
		return ((T (*)(BRWeaponBaseView*, float))(Il2CppBase() + 0x265D740))(this, _);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRWeaponBaseView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x265D7FC))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRWeaponBaseView*, uintptr_t))(Il2CppBase() + 0x265DA70))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRWeaponBaseView*))(Il2CppBase() + 0x265DBAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRWeaponBaseView*, float))(Il2CppBase() + 0x265DBB4))(this, P0);
	}

};

}
