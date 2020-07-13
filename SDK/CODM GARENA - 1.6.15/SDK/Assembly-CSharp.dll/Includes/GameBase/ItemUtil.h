#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ItemUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ItemUtil"));
	}

	template <typename T = uintptr_t> static T& QUALITY_COLOR_WHITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& QUALITY_COLOR_GREEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& QUALITY_COLOR_BULE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& QUALITY_COLOR_PURPLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& QUALITY_COLOR_GOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppString*> static T& QUALITY_SPRITE_NAME_WHITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& QUALITY_SPRITE_NAME_GREEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppString*> static T& QUALITY_SPRITE_NAME_BULE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppString*> static T& QUALITY_SPRITE_NAME_PURPLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppString*> static T& QUALITY_SPRITE_NAME_GOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppString*> static T& QUALITY_SPRITE_NAME_AWAKEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemID2WeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorByQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorTagByQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundByQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEGameChallengeCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemRotationByItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIndividuationPaint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = bool> static T ItemID2WeaponPart(int32_t itemID, uintptr_t* weaponPartName, uintptr_t* ConfigFileName) {
		return ((T (*)(void *, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2E1497C))(0, itemID, weaponPartName, ConfigFileName);
	}
	template <typename T = uintptr_t> static T GetColorByQuality(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2E14B4C))(0, type);
	}
	template <typename T = Il2CppString*> static T GetColorTagByQuality(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2E14DAC))(0, type);
	}
	template <typename T = Il2CppString*> static T GetBackgroundByQuality(uintptr_t itemData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2E15124))(0, itemData);
	}
	template <typename T = void> static T SetItemName(uintptr_t lbl, uintptr_t item) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E1546C))(0, lbl, item);
	}
	template <typename T = bool> static T IsPVEGameChallengeCard(uint64_t propID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2E15640))(0, propID);
	}
	template <typename T = float> static T GetItemRotationByItemType(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2E15828))(0, itemId);
	}
	template <typename T = bool> static T IsIndividuationAnim(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2E15968))(0, id);
	}
	template <typename T = bool> static T IsIndividuationPaint(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2E15A6C))(0, id);
	}

};

}
