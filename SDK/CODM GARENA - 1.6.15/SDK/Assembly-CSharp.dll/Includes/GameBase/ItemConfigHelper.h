#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ItemConfigHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ItemConfigHelper"));
	}

	template <typename T = Il2CppString*> static T& Gold_Icon_Sprite_Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CodPoint_Icon_Sprite_Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& BattlePassExpId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint64_t> static T& TPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& SPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& FPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SECONDS_PER_DAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& SECONDS_PER_HOUR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& SECONDS_PER_MINUTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& HOURS_PER_DAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& MINUTES_PER_HOUR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrencyItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientGoldItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientDiamondItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientExpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildCoinItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPowderItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPCoinItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVECoinItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInventoryType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStackableItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCompositeChipByItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIDNameField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorDescText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorDescTextWithColorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemTypeDescText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTreasureBoxTitleBgSpriteFromQuality_West() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTreasureBoxBgSpriteFromQuality_West() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemTopBGSpriteFromQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRaritySpriteNameFromColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarLineFromColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCardAttachmentQualityColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBBCodeColorPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorQualityProbabilityString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponTypeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnlyUseInPVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnlyUseInPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnlyUseInBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToEquipmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsViceWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToGrenadeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToAttachmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStringSecondToInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStringSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStringXX_XX_XX_JustForLadderForbid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTacticalSignTipsSpriteNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTacticalSignTipsSpriteNamesForMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupItemSignTipsSpriteNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignPlayerIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrencyIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsEightDays() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDateTimeByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFormatString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}

	template <typename T = bool> static T IsCurrencyItem(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F0F0E0))(0, itemId);
	}
	template <typename T = uintptr_t> static T GetClientGoldItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F270))(0);
	}
	template <typename T = uintptr_t> static T GetClientDiamondItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F38C))(0);
	}
	template <typename T = uintptr_t> static T GetClientExpItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F4A8))(0);
	}
	template <typename T = uintptr_t> static T GetGuildCoinItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F5C4))(0);
	}
	template <typename T = uintptr_t> static T GetPowderItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F6E0))(0);
	}
	template <typename T = uintptr_t> static T GetPVPCoinItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F7FC))(0);
	}
	template <typename T = uintptr_t> static T GetPVECoinItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0F918))(0);
	}
	template <typename T = uintptr_t> static T GetInventoryType(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F0FA34))(0, id);
	}
	template <typename T = bool> static T IsStackableItem(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F0FDC4))(0, type);
	}
	template <typename T = bool> static T IsCompositeChipByItemId(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F0FEB4))(0, id);
	}
	template <typename T = int32_t> static T GetIDNameField(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F0FFB8))(0, ID);
	}
	template <typename T = Il2CppString*> static T GetColorDescText(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F100DC))(0, ColorID);
	}
	template <typename T = Il2CppString*> static T GetColorDescTextWithColorCode(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F1025C))(0, ColorID);
	}
	template <typename T = Il2CppString*> static T GetItemTypeDescText(uintptr_t type, uintptr_t grenadeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F1054C))(0, type, grenadeType);
	}
	template <typename T = Il2CppString*> static T GetTreasureBoxTitleBgSpriteFromQuality_West(int32_t ColorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F107FC))(0, ColorId);
	}
	template <typename T = Il2CppString*> static T GetTreasureBoxBgSpriteFromQuality_West(int32_t ColorId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F10980))(0, ColorId);
	}
	template <typename T = Il2CppString*> static T GetItemTopBGSpriteFromQuality(uintptr_t quality) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F10AFC))(0, quality);
	}
	template <typename T = Il2CppString*> static T GetRaritySpriteNameFromColor(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F10CC4))(0, ColorID);
	}
	template <typename T = Il2CppString*> static T GetAvatarLineFromColor(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F10DE4))(0, ColorID);
	}
	template <typename T = uintptr_t> static T GetColorValue(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F10F58))(0, ColorID);
	}
	template <typename T = uintptr_t> static T GetCardAttachmentQualityColor(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F1113C))(0, ColorID);
	}
	template <typename T = Il2CppString*> static T GetBBCodeColorPrefix(int32_t ColorID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F103D8))(0, ColorID);
	}
	template <typename T = Il2CppString*> static T GetColorQualityProbabilityString(uint32_t num) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x1F11324))(0, num);
	}
	template <typename T = Il2CppString*> static T GetWeaponTypeString(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F1152C))(0, type);
	}
	template <typename T = bool> static T IsOnlyUseInPVP(uint64_t itemId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F1171C))(0, itemId);
	}
	template <typename T = bool> static T IsOnlyUseInPVE(uint64_t itemId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11838))(0, itemId);
	}
	template <typename T = bool> static T IsOnlyUseInBR(uint64_t itemId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11950))(0, itemId);
	}
	template <typename T = uintptr_t> static T ChangeToEquipmentType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11A6C))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToWeaponType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11B68))(0, clientID);
	}
	template <typename T = bool> static T IsViceWeapon(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11C70))(0, clientID);
	}
	template <typename T = bool> static T IsMainWeapon(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11D90))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToGrenadeType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11EB8))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToAttachmentType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F11FC0))(0, clientID);
	}
	template <typename T = Il2CppString*> static T GetTimeString(int32_t leftTime, uintptr_t unit) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1F120C8))(0, leftTime, unit);
	}
	template <typename T = Il2CppString*> static T GetTimeStringSecondToInt(int32_t ExpireTime) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F13624))(0, ExpireTime);
	}
	template <typename T = Il2CppString*> static T GetTimeStringSecond(int32_t leftTime) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F12278))(0, leftTime);
	}
	template <typename T = Il2CppString*> static T GetTimeStringXX_XX_XX_JustForLadderForbid(int32_t leftTimeSecond) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F13C94))(0, leftTimeSecond);
	}
	template <typename T = void> static T GetTacticalSignTipsSpriteNames(uintptr_t Type, Il2CppArray<uintptr_t>** IconNames, Il2CppArray<uintptr_t>** IconBGNames, Il2CppArray<uintptr_t>** BeamNames) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x1F14074))(0, Type, IconNames, IconBGNames, BeamNames);
	}
	template <typename T = void> static T GetTacticalSignTipsSpriteNamesForMP(uintptr_t Type, Il2CppArray<uintptr_t>** IconNames, Il2CppArray<uintptr_t>** IconBGNames, Il2CppArray<uintptr_t>** BeamNames) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x1F15E6C))(0, Type, IconNames, IconBGNames, BeamNames);
	}
	template <typename T = void> static T GetPickupItemSignTipsSpriteNames(int32_t ItemLevel, Il2CppArray<uintptr_t>** IconNames, Il2CppArray<uintptr_t>** IconBGNames, Il2CppArray<uintptr_t>** BeamNames) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x1F17024))(0, ItemLevel, IconNames, IconBGNames, BeamNames);
	}
	template <typename T = Il2CppString*> static T GetSignPlayerIconName(int32_t IndexInTeam) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F185B4))(0, IndexInTeam);
	}
	template <typename T = Il2CppString*> static T GetCurrencyIconName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F18724))(0, type);
	}
	template <typename T = bool> static T GetIsEightDays(uint64_t DT) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F189C4))(0, DT);
	}
	template <typename T = uintptr_t> static T GetDateTimeByTime(uint64_t DT) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x1F18E2C))(0, DT);
	}
	template <typename T = Il2CppString*> static T GetStringByTime(int32_t leftTime) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F1901C))(0, leftTime);
	}
	template <typename T = Il2CppString*> static T GetFormatString(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1F193A0))(0, num);
	}

};

}
