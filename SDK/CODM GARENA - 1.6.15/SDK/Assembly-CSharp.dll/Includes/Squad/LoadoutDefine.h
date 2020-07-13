#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class LoadoutDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "LoadoutDefine"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_LOADOUT_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_LOCID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_SUB_LOCID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_LOCID_PVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_LOCID_PVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_LOCID_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_LOCID_INDIVIDUATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& LOADOUT_TITLE_LOCID_INVENTORY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& OPEN_ITEM_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& SUITE_NAME_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& SUITE_NAME_BORDER_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& SUITE_ACTIVE_TITLE_SELECT_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& SUITE_ACTIVE_TITLE_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& SUITE_ACTIVE_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& SUITE_ACTIVE_BORDER_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& SUITE_INACTIVE_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& SUITE_INACTIVE_BORDER_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& SUITE_INACTIVE_TITLE_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& SUITE_INACTIVE_BLACK_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& SUITE_BUFF_EXPIRED_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = float> static T& MAGNIFY_HIDE_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = Il2CppVector3> T& POSITION_MedicalStation() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppQuaternion> T& ROTATION_MedicalStation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& POSITION_TrapMaster() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppQuaternion> T& ROTATION_TrapMaster() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& POSITION_InvisibleMan() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppQuaternion> T& ROTATION_InvisibleMan() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& POSITION_SmokeBomber() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppQuaternion> T& ROTATION_SmokeBomber() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRarityTabList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mLethalTabList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTacticalTabList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mVechicleStyleTabList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponSortTabList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponTypeMainTabList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponTypeViceTabList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponTypeAllTabList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mBrWeaponTypeAllTabList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mAttachTypeWithoutOpticTabList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mBrMeleeTypeAllTabList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowDecompose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrChipAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrChipAvatarType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProfessionChipOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeItemId2SkinType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleStyleDymicByHave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponTypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x431D758))(0);
	}
	template <typename T = bool> static T GetShowDecompose() {
		return ((T (*)(void *))(Il2CppBase() + 0x431D86C))(0);
	}
	template <typename T = uintptr_t> T GetBrChipAssetID(int32_t chipId, int32_t chipSkinId) {
		return ((T (*)(LoadoutDefine*, int32_t, int32_t))(Il2CppBase() + 0x431D934))(this, chipId, chipSkinId);
	}
	template <typename T = uintptr_t> T GetBrChipAvatarType(int32_t chipId) {
		return ((T (*)(LoadoutDefine*, int32_t))(Il2CppBase() + 0x431DB3C))(this, chipId);
	}
	template <typename T = void> T GetProfessionChipOffset(uint64_t weaponId, uint32_t chipId, uintptr_t* pos, uintptr_t* rot, uintptr_t* scale) {
		return ((T (*)(LoadoutDefine*, uint64_t, uint32_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x431DC88))(this, weaponId, chipId, pos, rot, scale);
	}
	template <typename T = uintptr_t> T ChangeItemId2SkinType(uint32_t itemId) {
		return ((T (*)(LoadoutDefine*, uint32_t))(Il2CppBase() + 0x431DF80))(this, itemId);
	}
	template <typename T = Il2CppString*> T GetTabName(Il2CppList<uintptr_t>* tempList, uintptr_t type) {
		return ((T (*)(LoadoutDefine*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x431E084))(this, tempList, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RarityTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x431E284))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LethalTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x431E648))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TacticalTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x431E988))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_VechicleStyleTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x431EDC0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T VehicleStyleDymicByHave(Il2CppList<int32_t>* param) {
		return ((T (*)(LoadoutDefine*, Il2CppList<int32_t>*))(Il2CppBase() + 0x431F710))(this, param);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponSortTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x431FA3C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponTypeMainTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x431FD7C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponTypeViceTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x4320138))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponTypeAllTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x43203FC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BRWeaponTypeAllTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x432092C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AttachTypeWithoutOpticTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x4320DE0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BrMeleeTypeAllTabList() {
		return ((T (*)(LoadoutDefine*))(Il2CppBase() + 0x4321218))(this);
	}
	template <typename T = Il2CppString*> static T GetWeaponTypeName(uintptr_t weaponType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43214DC))(0, weaponType);
	}

};

}
