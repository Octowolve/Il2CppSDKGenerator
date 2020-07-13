#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSkillComponent"));
	}

	template <typename T = uintptr_t> T& iWeapon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& WeaponActorID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitiativeSkillSLot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHUDSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillUseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MergeSkillStrengthenConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_SkillComponentValid() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A820BC))(this);
	}
	template <typename T = uintptr_t> T get_CurWeaponSkillConfig() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A820C4))(this);
	}
	template <typename T = void> T InitSkillComponent(uint32_t actorID, int32_t skillID, int32_t level, uintptr_t pawn) {
		return ((T (*)(WeaponSkillComponent*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3A82160))(this, actorID, skillID, level, pawn);
	}
	template <typename T = bool> T CanUseSkill() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A8238C))(this);
	}
	template <typename T = int32_t> T GetInitiativeSkillSLot() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A82740))(this);
	}
	template <typename T = Il2CppString*> T GetHUDSpriteName() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A82B28))(this);
	}
	template <typename T = int32_t> T GetSkillUseType() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A82C70))(this);
	}
	template <typename T = uintptr_t> T GetSkillEffect(int32_t index, bool isCeate) {
		return ((T (*)(WeaponSkillComponent*, int32_t, bool))(Il2CppBase() + 0x3A82D68))(this, index, isCeate);
	}
	template <typename T = void> T StartSkill(unsigned char recoverFlag) {
		return ((T (*)(WeaponSkillComponent*, unsigned char))(Il2CppBase() + 0x3A83204))(this, recoverFlag);
	}
	template <typename T = void> T EndSkill() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A836C0))(this);
	}
	template <typename T = void> T MergeSkillStrengthenConfig() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83AA0))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83CD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitSkillComponent(uint32_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(WeaponSkillComponent*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3A83D80))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T xLuaBaseProxy_CanUseSkill() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83DA4))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetInitiativeSkillSLot() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83DAC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetHUDSpriteName() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83DB4))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetSkillUseType() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83DBC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSkillEffect(int32_t P0, bool P1) {
		return ((T (*)(WeaponSkillComponent*, int32_t, bool))(Il2CppBase() + 0x3A83DC4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartSkill(unsigned char P0) {
		return ((T (*)(WeaponSkillComponent*, unsigned char))(Il2CppBase() + 0x3A83DCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndSkill() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRecycle() {
		return ((T (*)(WeaponSkillComponent*))(Il2CppBase() + 0x3A83DDC))(this);
	}

};

}
