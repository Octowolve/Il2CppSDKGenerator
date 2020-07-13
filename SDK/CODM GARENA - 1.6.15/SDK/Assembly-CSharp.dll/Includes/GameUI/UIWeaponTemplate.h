#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIWeaponTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIWeaponTemplate"));
	}

	template <typename T = uintptr_t> T& WeaponNameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponIconSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WeaponQualitySprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& WeaponQualityBgSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ScoreLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LockObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ReddotObj() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& NewFlagObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SelectedObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& EquipedObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& EquipedLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ShowedObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& LevelObj() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& TipLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& UnlockEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& AttachDisableObj() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& AttachPreFlagObj() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& AttachNextFlagObj() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetWeaponData(uint32_t itemId, bool showSuit) {
		return ((T (*)(UIWeaponTemplate*, uint32_t, bool))(Il2CppBase() + 0x2A233C0))(this, itemId, showSuit);
	}
	template <typename T = void> T SetWeaponData_1(uintptr_t csv, bool showSuit) {
		return ((T (*)(UIWeaponTemplate*, uintptr_t, bool))(Il2CppBase() + 0x2A234E0))(this, csv, showSuit);
	}
	template <typename T = void> T SetLockTip(Il2CppString* tip, int32_t level) {
		return ((T (*)(UIWeaponTemplate*, Il2CppString*, int32_t))(Il2CppBase() + 0x2A23EB8))(this, tip, level);
	}
	template <typename T = void> T SetTime(uintptr_t itemData) {
		return ((T (*)(UIWeaponTemplate*, uintptr_t))(Il2CppBase() + 0x2A2408C))(this, itemData);
	}
	template <typename T = void> T ResetAttachment(uint32_t itemId, uintptr_t itemType) {
		return ((T (*)(UIWeaponTemplate*, uint32_t, uintptr_t))(Il2CppBase() + 0x2A23BD8))(this, itemId, itemType);
	}

};

}
