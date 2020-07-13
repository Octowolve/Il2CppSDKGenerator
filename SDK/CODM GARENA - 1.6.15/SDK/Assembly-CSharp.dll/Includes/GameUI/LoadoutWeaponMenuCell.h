#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponMenuCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponMenuCell"));
	}

	template <typename T = uintptr_t> T& NoneState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LockState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DisableState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ConflictState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ItemQualitySprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ItemRotateTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ItemSkinName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SelectedObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ReddotObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& AttachPreFlagObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AttachNextFlagObj() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& MenuType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& CanClick() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& CacheShowItemId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppQuaternion> T& WEAPON_ROTATION() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppQuaternion> T& THROW_WEAPON_ROTATION() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkinName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T T_OnCellClick(uintptr_t MenuType) {
		return ((T (*)(LoadoutWeaponMenuCell*, uintptr_t))(Il2CppBase() + 0x1F6BD08))(this, MenuType);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutWeaponMenuCell*))(Il2CppBase() + 0x1F6BFB8))(this);
	}
	template <typename T = void> T OnCellClick(uintptr_t obj) {
		return ((T (*)(LoadoutWeaponMenuCell*, uintptr_t))(Il2CppBase() + 0x1F6C0E8))(this, obj);
	}
	template <typename T = void> T SetItemData(uint32_t itemId, bool isUseRareQuality) {
		return ((T (*)(LoadoutWeaponMenuCell*, uint32_t, bool))(Il2CppBase() + 0x1F1CD2C))(this, itemId, isUseRareQuality);
	}
	template <typename T = void> T SetSkinName(uint32_t itemId) {
		return ((T (*)(LoadoutWeaponMenuCell*, uint32_t))(Il2CppBase() + 0x1F6C534))(this, itemId);
	}
	template <typename T = void> T CheckRotation(int32_t id) {
		return ((T (*)(LoadoutWeaponMenuCell*, int32_t))(Il2CppBase() + 0x1F6C680))(this, id);
	}
	template <typename T = void> T ResetAttachment(uint32_t itemId, uintptr_t itemType) {
		return ((T (*)(LoadoutWeaponMenuCell*, uint32_t, uintptr_t))(Il2CppBase() + 0x1F6C298))(this, itemId, itemType);
	}
	template <typename T = void> static T T_OnCellClickm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F6C978))(0);
	}

};

}
