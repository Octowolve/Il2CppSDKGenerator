#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponentManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponentManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_SkillComponentDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& m_WeaponToSkillsDic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_WaitRemoveSkillList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_WeaponToEffectDataDic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWeaponSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableWeaponSkills() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkillStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCurWeaponInitiativeSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkillEffectData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T OnRoundStart() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x3081150))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x30814D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x3081574))(this);
	}
	template <typename T = uintptr_t> T CreateSkillComponent(uint32_t actorID, int32_t skillID, int32_t level, uintptr_t pawn) {
		return ((T (*)(SkillComponentManager*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3081618))(this, actorID, skillID, level, pawn);
	}
	template <typename T = void> T AddWeaponSkillComponent(uint32_t actorID, int32_t skillID, int32_t level, uintptr_t pawn, uintptr_t weapon, int32_t weaponActorID, bool silentSync) {
		return ((T (*)(SkillComponentManager*, uint32_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3081790))(this, actorID, skillID, level, pawn, weapon, weaponActorID, silentSync);
	}
	template <typename T = bool> T AddSkillComponent(uint32_t actorID, int32_t skillID, int32_t level, uintptr_t pawn) {
		return ((T (*)(SkillComponentManager*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3081AD4))(this, actorID, skillID, level, pawn);
	}
	template <typename T = void> T DisableWeaponSkills(int32_t weaponActorID) {
		return ((T (*)(SkillComponentManager*, int32_t))(Il2CppBase() + 0x3081D40))(this, weaponActorID);
	}
	template <typename T = void> T RemoveSkillComponent(uint32_t actorID) {
		return ((T (*)(SkillComponentManager*, uint32_t))(Il2CppBase() + 0x3082094))(this, actorID);
	}
	template <typename T = void> T DisableSkillComponent(uint32_t actorID) {
		return ((T (*)(SkillComponentManager*, uint32_t))(Il2CppBase() + 0x3081F70))(this, actorID);
	}
	template <typename T = uintptr_t> T GetSkillComponent(uint32_t actorID) {
		return ((T (*)(SkillComponentManager*, uint32_t))(Il2CppBase() + 0x3081C38))(this, actorID);
	}
	template <typename T = bool> T UseSkill(uint32_t actorID, int32_t index, int32_t length, Il2CppArray<uintptr_t>* ctx) {
		return ((T (*)(SkillComponentManager*, uint32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30824A4))(this, actorID, index, length, ctx);
	}
	template <typename T = void> T TriggerSkill(uint32_t actorID, int32_t index, uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx, unsigned char recoverFlag) {
		return ((T (*)(SkillComponentManager*, uint32_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x3082634))(this, actorID, index, optype, extraCtx, recoverFlag);
	}
	template <typename T = void> T UpdateSkillStat(uint32_t actorID, int32_t duration, int32_t leftTime, uintptr_t skillStat) {
		return ((T (*)(SkillComponentManager*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3082808))(this, actorID, duration, leftTime, skillStat);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SkillComponentManager*, float))(Il2CppBase() + 0x30829D8))(this, DeltaTime);
	}
	template <typename T = void> T ChangeCurWeaponInitiativeSkill() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x3082EC0))(this);
	}
	template <typename T = void> T ClearAllSkillComponent() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x30811F4))(this);
	}
	template <typename T = uintptr_t> T GetWeaponSkillEffectData(int32_t weaponID) {
		return ((T (*)(SkillComponentManager*, int32_t))(Il2CppBase() + 0x30837FC))(this, weaponID);
	}
	template <typename T = void> T OnChangeSkill(uintptr_t skill) {
		return ((T (*)(SkillComponentManager*, uintptr_t))(Il2CppBase() + 0x3083344))(this, skill);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x308391C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x3083924))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SkillComponentManager*))(Il2CppBase() + 0x308392C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SkillComponentManager*, float))(Il2CppBase() + 0x3083934))(this, P0);
	}

};

}
