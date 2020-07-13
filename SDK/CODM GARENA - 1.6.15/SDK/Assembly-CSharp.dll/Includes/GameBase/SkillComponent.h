#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponent"));
	}

	template <typename T = bool> T& m_SkillActive() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_SkillComponentValid() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = int32_t> static T& USE_SKILL_FLAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& MAX_SKILL_EFFECT_EVENT_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_AssetSkillDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_SkillEffectDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_WaitRemoveSkillEffectList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_SkillConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurSkillID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CurLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_SkillStat() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_EffectsActive() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSkillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSkillOrEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkillStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitiativeSkillSLot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHUDSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillUseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSkillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_SkillComponentValid() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11278))(this);
	}
	template <typename T = uintptr_t> T get_SkillConfig() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11280))(this);
	}
	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11288))(this);
	}
	template <typename T = int32_t> T get_CurSkillID() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11290))(this);
	}
	template <typename T = int32_t> T get_CurLevel() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11298))(this);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E112A0))(this);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E112A8))(this);
	}
	template <typename T = int32_t> T get_LeftTime() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E112B0))(this);
	}
	template <typename T = uintptr_t> T get_SkillStat() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E112B8))(this);
	}
	template <typename T = bool> T get_EffectsActive() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E112C0))(this);
	}
	template <typename T = void> T InitSkillComponent(uint32_t actorID, int32_t skillID, int32_t level, uintptr_t pawn) {
		return ((T (*)(SkillComponent*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2E112C8))(this, actorID, skillID, level, pawn);
	}
	template <typename T = bool> T UseSkillOrEffect(int32_t index) {
		return ((T (*)(SkillComponent*, int32_t))(Il2CppBase() + 0x2E113A8))(this, index);
	}
	template <typename T = bool> T UseSkill(int32_t index, int32_t length, Il2CppArray<uintptr_t>* ctx) {
		return ((T (*)(SkillComponent*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E11458))(this, index, length, ctx);
	}
	template <typename T = bool> T CanUseSkill() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E115BC))(this);
	}
	template <typename T = void> T TriggerSkill(int32_t index, uintptr_t optype, Il2CppArray<uintptr_t>* extraCtx, unsigned char recoverFlag) {
		return ((T (*)(SkillComponent*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x2E1165C))(this, index, optype, extraCtx, recoverFlag);
	}
	template <typename T = void> T UpdateSkillStat(uint32_t actorID, int32_t duration, int32_t leftTime, uintptr_t skillStat) {
		return ((T (*)(SkillComponent*, uint32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2E11858))(this, actorID, duration, leftTime, skillStat);
	}
	template <typename T = void> T StartSkill(unsigned char recoverFlag) {
		return ((T (*)(SkillComponent*, unsigned char))(Il2CppBase() + 0x2E1192C))(this, recoverFlag);
	}
	template <typename T = void> T EndSkill() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E119D8))(this);
	}
	template <typename T = int32_t> T GetInitiativeSkillSLot() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11A7C))(this);
	}
	template <typename T = Il2CppString*> T GetHUDSpriteName() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11B1C))(this);
	}
	template <typename T = int32_t> T GetSkillUseType() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E11C0C))(this);
	}
	template <typename T = uintptr_t> T GetSkillEffect(int32_t index, bool isCeate) {
		return ((T (*)(SkillComponent*, int32_t, bool))(Il2CppBase() + 0x2E11CAC))(this, index, isCeate);
	}
	template <typename T = void> T RemoveSkillEffect(int32_t index) {
		return ((T (*)(SkillComponent*, int32_t))(Il2CppBase() + 0x2E11EA0))(this, index);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SkillComponent*, float))(Il2CppBase() + 0x2E12084))(this, DeltaTime);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E126C8))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(SkillComponent*, bool))(Il2CppBase() + 0x2E126D0))(this, value);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E126D8))(this);
	}
	template <typename T = void> T SetEffectsActive(bool active) {
		return ((T (*)(SkillComponent*, bool))(Il2CppBase() + 0x2E12918))(this, active);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SkillComponent*))(Il2CppBase() + 0x2E12B68))(this);
	}

};

}
