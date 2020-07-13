#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillManagerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillManagerBase"));
	}

	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& SkillDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ActiveSkillMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveSkillType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveSkillId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllSkills() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddActiveSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSpecialSkillState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllSkillState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanStartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetActiveSkillType(int32_t skillTypeId) {
		return ((T (*)(SkillManagerBase*, int32_t))(Il2CppBase() + 0x308AD78))(this, skillTypeId);
	}
	template <typename T = int32_t> T GetActiveSkillId(uintptr_t skillType) {
		return ((T (*)(SkillManagerBase*, uintptr_t))(Il2CppBase() + 0x308B060))(this, skillType);
	}
	template <typename T = uintptr_t> T GetSkill(int32_t skillId) {
		return ((T (*)(SkillManagerBase*, int32_t))(Il2CppBase() + 0x308B2CC))(this, skillId);
	}
	template <typename T = void> T Init(uint32_t playerId, bool bInitialSkill) {
		return ((T (*)(SkillManagerBase*, uint32_t, bool))(Il2CppBase() + 0x308B3D4))(this, playerId, bInitialSkill);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(SkillManagerBase*))(Il2CppBase() + 0x308B494))(this);
	}
	template <typename T = void> T StartSkill(int32_t skillTypeId) {
		return ((T (*)(SkillManagerBase*, int32_t))(Il2CppBase() + 0x308AEFC))(this, skillTypeId);
	}
	template <typename T = void> T StopSkill(int32_t skillTypeId) {
		return ((T (*)(SkillManagerBase*, int32_t))(Il2CppBase() + 0x308B52C))(this, skillTypeId);
	}
	template <typename T = void> T StopAllSkills() {
		return ((T (*)(SkillManagerBase*))(Il2CppBase() + 0x308B5CC))(this);
	}
	template <typename T = uintptr_t> T AddActiveSkill(int32_t skillTypeId, bool bInitialSkill) {
		return ((T (*)(SkillManagerBase*, int32_t, bool))(Il2CppBase() + 0x308AFA0))(this, skillTypeId, bInitialSkill);
	}
	template <typename T = void> T RemoveSkill(uintptr_t skill) {
		return ((T (*)(SkillManagerBase*, uintptr_t))(Il2CppBase() + 0x308B7D8))(this, skill);
	}
	template <typename T = void> T RemoveAllSkill() {
		return ((T (*)(SkillManagerBase*))(Il2CppBase() + 0x308B8E4))(this);
	}
	template <typename T = void> T ResetSpecialSkillState(uintptr_t specialItem) {
		return ((T (*)(SkillManagerBase*, uintptr_t))(Il2CppBase() + 0x308BB1C))(this, specialItem);
	}
	template <typename T = void> T ResetAllSkillState() {
		return ((T (*)(SkillManagerBase*))(Il2CppBase() + 0x308BF54))(this);
	}
	template <typename T = bool> T CanStartSkill(int32_t skillTypeId) {
		return ((T (*)(SkillManagerBase*, int32_t))(Il2CppBase() + 0x308C358))(this, skillTypeId);
	}
	template <typename T = uintptr_t> T GetOwnerPawn() {
		return ((T (*)(SkillManagerBase*))(Il2CppBase() + 0x308C47C))(this);
	}

};

}
