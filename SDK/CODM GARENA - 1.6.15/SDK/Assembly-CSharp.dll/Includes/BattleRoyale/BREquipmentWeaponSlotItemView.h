#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentWeaponSlotItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentWeaponSlotItemView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect_Weapon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NewGuideText_Weapon() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_SlotItem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NewGuideText_SlotItem() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& AmmoTypeLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& AmmoTypeSprite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CarriedAmmoCountLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& EquippedLabelGo() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PictureOff() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& GoldBG() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefaultUIName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponAmmoTypeLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGoldBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFoucs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffectPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T RefreshUIFull() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F2EDC))(this);
	}
	template <typename T = Il2CppString*> T DefaultUIName() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F3410))(this);
	}
	template <typename T = void> T RefreshPicture() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F3558))(this);
	}
	template <typename T = void> T RefreshWeaponAmmoTypeLabel() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F2FA8))(this);
	}
	template <typename T = void> T RefreshWeaponAmmoCount() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18DE208))(this);
	}
	template <typename T = void> T RefreshWeaponCarriedAmmoCount() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18DE73C))(this);
	}
	template <typename T = void> T RefreshEquipped() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18DEC4C))(this);
	}
	template <typename T = void> T RefreshGoldBG() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F329C))(this);
	}
	template <typename T = void> T SetFoucs(bool show) {
		return ((T (*)(BREquipmentWeaponSlotItemView*, bool))(Il2CppBase() + 0x18F3E8C))(this, show);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F3F3C))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BREquipmentWeaponSlotItemView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x18F3FD4))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = void> T ChangeEffectPos(float x, float y, float z) {
		return ((T (*)(BREquipmentWeaponSlotItemView*, float, float, float))(Il2CppBase() + 0x18F4268))(this, x, y, z);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BREquipmentWeaponSlotItemView*, uintptr_t))(Il2CppBase() + 0x18F4374))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshUIFull() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F4578))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_DefaultUIName() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F457C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshPicture() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F4580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetFoucs(bool P0) {
		return ((T (*)(BREquipmentWeaponSlotItemView*, bool))(Il2CppBase() + 0x18F4584))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BREquipmentWeaponSlotItemView*))(Il2CppBase() + 0x18F4588))(this);
	}

};

}
