#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_InventoryDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_pendingChangeSelectSquadId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_pendingSetModeMapSquad() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_pendingSetMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_pendingSetMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cachedSquadDevCharacterList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_cacheGameType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_cacheLoadOut() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_cacheUnequioItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_cacheSquadInfo() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& bNeedPopNavigationWhenResponse() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_CacheUnlockPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockSquadPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanWeaponAttachChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CanWeaponAttachChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanWeaponAttachSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRoleSkillChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_SquadMode() {
		return ((T (*)(SquadSystemAssist*))(Il2CppBase() + 0x3947580))(this);
	}
	template <typename T = void> T set_SquadMode(uintptr_t value) {
		return ((T (*)(SquadSystemAssist*, uintptr_t))(Il2CppBase() + 0x3947588))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T GetUnlockSquadPos() {
		return ((T (*)(SquadSystemAssist*))(Il2CppBase() + 0x3947590))(this);
	}
	template <typename T = bool> static T CanWeaponAttachChange(uint32_t weaponId, uintptr_t type) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x3947660))(0, weaponId, type);
	}
	template <typename T = bool> static T CanWeaponAttachChange_1(uintptr_t csv, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39477C8))(0, csv, type);
	}
	template <typename T = bool> static T CanWeaponAttachSkin(uint32_t weaponId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3947900))(0, weaponId);
	}
	template <typename T = bool> static T CanRoleSkillChange(uint32_t RoleId, int32_t type) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x3947A68))(0, RoleId, type);
	}

};

}
