#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadMemberData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadMemberData"));
	}

	template <typename T = uintptr_t> T& InventoryDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LoadOutIdx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bLocked() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Role() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MainWeapon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ViceWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& MainWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ViceWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bReplaceViceToMain() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Perk1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Perk2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Perk3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Lethal() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Tactical() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CarryingZombieItems() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& CurrentAvatarSquadType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSquadMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadOutSIItemBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadOutSIWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadOutSIRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCarryingZombieItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadOutData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCareerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLoadOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_bLocked() {
		return ((T (*)(SquadMemberData*))(Il2CppBase() + 0x3943894))(this);
	}
	template <typename T = void> T set_bLocked(bool value) {
		return ((T (*)(SquadMemberData*, bool))(Il2CppBase() + 0x394389C))(this, value);
	}
	template <typename T = void> T SetSquadMemberData(uintptr_t squadType, int32_t loadOutIndex, uintptr_t info, uintptr_t oppoInventoryData) {
		return ((T (*)(SquadMemberData*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39350C8))(this, squadType, loadOutIndex, info, oppoInventoryData);
	}
	template <typename T = void> T SetLoadOutSIItemBase(uintptr_t loadOutItem, uintptr_t itemType, uintptr_t info, uintptr_t inventory) {
		return ((T (*)(SquadMemberData*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3943C18))(this, loadOutItem, itemType, info, inventory);
	}
	template <typename T = void> T SetLoadOutSIWeapon(uintptr_t loadOutWeapon, uintptr_t itemType, uintptr_t info, uintptr_t inventory) {
		return ((T (*)(SquadMemberData*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3944460))(this, loadOutWeapon, itemType, info, inventory);
	}
	template <typename T = void> T SetLoadOutSIRole(uintptr_t loadOutRole, uintptr_t itemType, uintptr_t info, uintptr_t inventory) {
		return ((T (*)(SquadMemberData*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3944C7C))(this, loadOutRole, itemType, info, inventory);
	}
	template <typename T = void> T CheckCarryingZombieItem(uintptr_t role, uintptr_t weapon, uintptr_t item) {
		return ((T (*)(SquadMemberData*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3943EA4))(this, role, weapon, item);
	}
	template <typename T = void> T SetLoadOutData(uintptr_t info, uintptr_t inventory) {
		return ((T (*)(SquadMemberData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39438A4))(this, info, inventory);
	}
	template <typename T = uintptr_t> static T GetCareerType(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3945480))(0, id);
	}
	template <typename T = void> T CheckPerk() {
		return ((T (*)(SquadMemberData*))(Il2CppBase() + 0x394520C))(this);
	}
	template <typename T = void> T ChangeLoadOut(uintptr_t info, uintptr_t oppoInventoryData) {
		return ((T (*)(SquadMemberData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x394554C))(this, info, oppoInventoryData);
	}
	template <typename T = bool> T CheckPlayerInfo(uintptr_t playerInfo) {
		return ((T (*)(SquadMemberData*, uintptr_t))(Il2CppBase() + 0x394566C))(this, playerInfo);
	}

};

}
