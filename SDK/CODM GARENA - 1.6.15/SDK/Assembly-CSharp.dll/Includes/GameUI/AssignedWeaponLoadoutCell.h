#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AssignedWeaponLoadoutCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AssignedWeaponLoadoutCell"));
	}

	template <typename T = uintptr_t> T& QualitySprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& IconSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ItemNameLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NoneState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NormalState() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setCellItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setCellItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T GetItemInfo(int32_t nItemId, bool bWeapon, uintptr_t itemName, uintptr_t qualitySprite, uintptr_t iconSprite, bool bSmallSprite, bool bRole) {
		return ((T (*)(AssignedWeaponLoadoutCell*, int32_t, bool, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x2D63FD8))(this, nItemId, bWeapon, itemName, qualitySprite, iconSprite, bSmallSprite, bRole);
	}
	template <typename T = void> T setCellItemInfo(bool bHas, Il2CppString* itemName, Il2CppString* qualitySpriteName, Il2CppString* iconspriteName) {
		return ((T (*)(AssignedWeaponLoadoutCell*, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D642C4))(this, bHas, itemName, qualitySpriteName, iconspriteName);
	}
	template <typename T = void> T setCellItem(int32_t nItemId, bool bWeapon, bool bSmallSprite, bool bRole) {
		return ((T (*)(AssignedWeaponLoadoutCell*, int32_t, bool, bool, bool))(Il2CppBase() + 0x2D63C8C))(this, nItemId, bWeapon, bSmallSprite, bRole);
	}

};

}
