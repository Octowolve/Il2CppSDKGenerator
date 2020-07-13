#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEWeaponSkillHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEWeaponSkillHud"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mSkillSlotType() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SkillBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SkillDisactiveInfor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SkillActiveInfor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& NumberPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SkillMask() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SkillIcon() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& mSkillActor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mCurSkillSlotType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& mWeaponSkillComponent() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mSkillComponentManager() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSlotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeProjectileCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406DE70))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406DE78))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406DF1C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406DF24))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406DF30))(this);
	}
	template <typename T = bool> T OnGamepadUseSkill() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406E074))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406E4B8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406E654))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PVEWeaponSkillHud*, float))(Il2CppBase() + 0x406E79C))(this, dt);
	}
	template <typename T = void> T SetSlotType(uintptr_t type) {
		return ((T (*)(PVEWeaponSkillHud*, uintptr_t))(Il2CppBase() + 0x406D148))(this, type);
	}
	template <typename T = void> T ChangeSkill(uint32_t actor, uintptr_t slot, Il2CppString* hudName, uintptr_t useType) {
		return ((T (*)(PVEWeaponSkillHud*, uint32_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x406D8B8))(this, actor, slot, hudName, useType);
	}
	template <typename T = void> T ChangeProjectileCount(int32_t count) {
		return ((T (*)(PVEWeaponSkillHud*, int32_t))(Il2CppBase() + 0x406DC6C))(this, count);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406E858))(this);
	}
	template <typename T = void> T OnSkillUseBtn() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406E11C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406EC14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406EC1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406EC24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEWeaponSkillHud*))(Il2CppBase() + 0x406EC2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVEWeaponSkillHud*, float))(Il2CppBase() + 0x406EC34))(this, P0);
	}

};

}
