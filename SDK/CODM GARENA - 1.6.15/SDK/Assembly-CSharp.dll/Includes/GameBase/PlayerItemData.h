#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayerItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayerItemData"));
	}

	template <typename T = int32_t> static T& MainTypeSegmentBeginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MainTypeSegmentEndPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& SubType1SegmentBeginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& SubType1SegmentEndPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& SubType2SegmentBeginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& SubType2SegmentEndPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& SubType3SegmentBeginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& SubType3SegmentEndPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& LevelSegmentBeginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& LevelSegmentEndPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& SegmentsTotalLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uint64_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& m_ItemGID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_Exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ConsumeType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_ExpireTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_Durablity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_EquipedState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& m_BagID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsNewItem() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsPrepareSystemNewItem() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& m_PropSkillInfo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_iEquipPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MainType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ItemMainType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_SubType1() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_SubType2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_SubType3() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_Level() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ItemData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ItemResData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipStateByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPrepareSystemItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBeenEquiped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEquipmentItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeEquiped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCommonItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSubType1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSubType2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSubType3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTypesValidity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainHandWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOffHandWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemExpired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubType1FromItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSegmentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextLevelPlayerItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrevLevelPlayerItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemEquipmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemTypeFromItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemMainType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSubType1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSubType2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSubType3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemMainTypeFromShortID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSubType1FromShortID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSubType2FromShortID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSubType3FromShortID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsEquipmentItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsMainType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSubType1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSubType2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsSubType3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUpGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckTypesValidity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = uintptr_t> static T GetEquipStateByType(int32_t subType1) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16E2B40))(0, subType1);
	}
	template <typename T = uint64_t> T get_ItemID() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C28))(this);
	}
	template <typename T = void> T set_ItemID(uint64_t value) {
		return ((T (*)(PlayerItemData*, uint64_t))(Il2CppBase() + 0x16E2C30))(this, value);
	}
	template <typename T = uint64_t> T get_ItemGID() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C40))(this);
	}
	template <typename T = void> T set_ItemGID(uint64_t value) {
		return ((T (*)(PlayerItemData*, uint64_t))(Il2CppBase() + 0x16E2C48))(this, value);
	}
	template <typename T = uint32_t> T get_Count() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C58))(this);
	}
	template <typename T = void> T set_Count(uint32_t value) {
		return ((T (*)(PlayerItemData*, uint32_t))(Il2CppBase() + 0x16E2C60))(this, value);
	}
	template <typename T = uint32_t> T get_Exp() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C68))(this);
	}
	template <typename T = void> T set_Exp(uint32_t value) {
		return ((T (*)(PlayerItemData*, uint32_t))(Il2CppBase() + 0x16E2C70))(this, value);
	}
	template <typename T = uintptr_t> T get_ConsumeType() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C78))(this);
	}
	template <typename T = void> T set_ConsumeType(uintptr_t value) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E2C80))(this, value);
	}
	template <typename T = uint32_t> T get_ExpireTime() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C88))(this);
	}
	template <typename T = void> T set_ExpireTime(uint32_t value) {
		return ((T (*)(PlayerItemData*, uint32_t))(Il2CppBase() + 0x16E2C90))(this, value);
	}
	template <typename T = int32_t> T get_Durablity() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2C98))(this);
	}
	template <typename T = void> T set_Durablity(int32_t value) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E2CA0))(this, value);
	}
	template <typename T = uintptr_t> T get_EquipedState() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2CA8))(this);
	}
	template <typename T = void> T set_EquipedState(uintptr_t value) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E2CB0))(this, value);
	}
	template <typename T = uint64_t> T get_BagID() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2CB8))(this);
	}
	template <typename T = void> T set_BagID(uint64_t value) {
		return ((T (*)(PlayerItemData*, uint64_t))(Il2CppBase() + 0x16E2CC0))(this, value);
	}
	template <typename T = bool> T get_IsNewItem() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2CD0))(this);
	}
	template <typename T = void> T set_IsNewItem(bool value) {
		return ((T (*)(PlayerItemData*, bool))(Il2CppBase() + 0x16E2CD8))(this, value);
	}
	template <typename T = bool> T get_IsPrepareSystemNewItem() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2CE0))(this);
	}
	template <typename T = void> T set_IsPrepareSystemNewItem(bool value) {
		return ((T (*)(PlayerItemData*, bool))(Il2CppBase() + 0x16E2CE8))(this, value);
	}
	template <typename T = uintptr_t> T get_PropSkillInfo() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2CF0))(this);
	}
	template <typename T = void> T set_PropSkillInfo(uintptr_t value) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E2CF8))(this, value);
	}
	template <typename T = int32_t> T get_EquipPosition() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2D00))(this);
	}
	template <typename T = void> T set_EquipPosition(int32_t value) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E2D08))(this, value);
	}
	template <typename T = bool> T IsPrepareSystemItem() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2D10))(this);
	}
	template <typename T = uintptr_t> T get_MainType() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2DF0))(this);
	}
	template <typename T = void> T set_MainType(uintptr_t value) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E2DF8))(this, value);
	}
	template <typename T = uintptr_t> T get_ItemMainType() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2E00))(this);
	}
	template <typename T = void> T set_ItemMainType(uintptr_t value) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E2E08))(this, value);
	}
	template <typename T = int32_t> T get_SubType1() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2E10))(this);
	}
	template <typename T = void> T set_SubType1(int32_t value) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E2E18))(this, value);
	}
	template <typename T = int32_t> T get_SubType2() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2E20))(this);
	}
	template <typename T = void> T set_SubType2(int32_t value) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E2E28))(this, value);
	}
	template <typename T = int32_t> T get_SubType3() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2E30))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2E38))(this);
	}
	template <typename T = uintptr_t> T get_ItemResData() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E2E40))(this);
	}
	template <typename T = void> T SetPlayerItemData(uintptr_t data) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E2F54))(this, data);
	}
	template <typename T = bool> T HasBeenEquiped() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E3030))(this);
	}
	template <typename T = bool> T IsEquipmentItem() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E3108))(this);
	}
	template <typename T = bool> T CanBeEquiped() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E31E0))(this);
	}
	template <typename T = bool> T IsCommonItem() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E32CC))(this);
	}
	template <typename T = bool> T IsMainType(uintptr_t mainType) {
		return ((T (*)(PlayerItemData*, uintptr_t))(Il2CppBase() + 0x16E33AC))(this, mainType);
	}
	template <typename T = bool> T IsSubType1(int32_t subType1) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E3490))(this, subType1);
	}
	template <typename T = bool> T IsSubType2(int32_t subType2) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E3574))(this, subType2);
	}
	template <typename T = bool> T IsSubType3(int32_t subType3) {
		return ((T (*)(PlayerItemData*, int32_t))(Il2CppBase() + 0x16E3658))(this, subType3);
	}
	template <typename T = bool> T CheckTypesValidity(uintptr_t mainType, int32_t subType1, int32_t subType2, int32_t subType3) {
		return ((T (*)(PlayerItemData*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x16E373C))(this, mainType, subType1, subType2, subType3);
	}
	template <typename T = bool> T IsMainHandWeapon() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E38CC))(this);
	}
	template <typename T = bool> T IsOffHandWeapon() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E39BC))(this);
	}
	template <typename T = bool> T IsMeleeWeapon() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E3AA8))(this);
	}
	template <typename T = bool> T IsItemExpired() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E3B94))(this);
	}
	template <typename T = bool> static T IsMeleeWeapon_1(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E3D9C))(0, itemID);
	}
	template <typename T = int32_t> static T GetSubType1FromItemID(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E4150))(0, itemID);
	}
	template <typename T = int32_t> static T GetSegmentValue(uint64_t itemID, int32_t beginPos, int32_t endPos) {
		return ((T (*)(void *, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x16E3F18))(0, itemID, beginPos, endPos);
	}
	template <typename T = void> T ParseItemID() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E286C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E4284))(this);
	}
	template <typename T = uintptr_t> T GetNextLevelPlayerItemData() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E434C))(this);
	}
	template <typename T = uintptr_t> T GetPrevLevelPlayerItemData() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E44F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E469C))(this);
	}
	template <typename T = uintptr_t> static T GetItemEquipmentType(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E4A38))(0, itemID);
	}
	template <typename T = uintptr_t> static T GetItemTypeFromItemID(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E4E30))(0, itemID);
	}
	template <typename T = int32_t> static T GetItemLevel(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E5038))(0, itemID);
	}
	template <typename T = int32_t> static T GetItemMainType(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E516C))(0, itemID);
	}
	template <typename T = int32_t> static T GetItemSubType1(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E529C))(0, itemID);
	}
	template <typename T = int32_t> static T GetItemSubType2(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E53D0))(0, itemID);
	}
	template <typename T = int32_t> static T GetItemSubType3(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E5504))(0, itemID);
	}
	template <typename T = int32_t> static T GetItemMainTypeFromShortID(int32_t shortID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16E5638))(0, shortID);
	}
	template <typename T = int32_t> static T GetItemSubType1FromShortID(int32_t shortID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16E5744))(0, shortID);
	}
	template <typename T = int32_t> static T GetItemSubType2FromShortID(int32_t shortID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16E5850))(0, shortID);
	}
	template <typename T = int32_t> static T GetItemSubType3FromShortID(int32_t shortID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16E595C))(0, shortID);
	}
	template <typename T = bool> static T IsEquipmentItem_1(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E4C78))(0, itemID);
	}
	template <typename T = bool> static T IsMainType_1(uint64_t itemID, uintptr_t mainType) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x16E5A68))(0, itemID, mainType);
	}
	template <typename T = bool> static T IsSubType1_1(uint64_t itemID, int32_t subType1) {
		return ((T (*)(void *, uint64_t, int32_t))(Il2CppBase() + 0x16E5B8C))(0, itemID, subType1);
	}
	template <typename T = bool> static T IsSubType2_1(uint64_t itemID, int32_t subType2) {
		return ((T (*)(void *, uint64_t, int32_t))(Il2CppBase() + 0x16E5CB0))(0, itemID, subType2);
	}
	template <typename T = bool> static T IsSubType3_1(uint64_t itemID, int32_t subType3) {
		return ((T (*)(void *, uint64_t, int32_t))(Il2CppBase() + 0x16E5DD4))(0, itemID, subType3);
	}
	template <typename T = bool> static T CanUpGrade(uint64_t itemID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x16E5EF8))(0, itemID);
	}
	template <typename T = bool> static T CheckTypesValidity_1(uint64_t itemID, uintptr_t mainType, int32_t subType1, int32_t subType2, int32_t subType3) {
		return ((T (*)(void *, uint64_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x16E6060))(0, itemID, mainType, subType1, subType2, subType3);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(PlayerItemData*))(Il2CppBase() + 0x16E651C))(this);
	}

};

}
