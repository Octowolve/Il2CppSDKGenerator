#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillBase"));
	}

	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OwnerMgr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& CoolDownTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DurationTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& EffectDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsCoolingDown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsActive() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& m_SkillType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_SkillId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Components() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& UnNudgedComponentCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Reusability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& mRemainingTimes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& mInitRemainingTimes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_CoroutineCheckEnd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CoolDownTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_EffectTimer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& FirstPersonEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& FirstPersonEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& FirstPersonEffectSocketName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ThirdPersonEffect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& ThirdPersonEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& ThirdPersonEffectSocketName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemainingTimesChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitRemainingTimesChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start1PEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start3PEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyNudgeFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillNudgeFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNudgeSkillComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NudgeSkillComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCoolingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndCoolingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRemoteEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = uint32_t> T get_PlayerId() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0ED98))(this);
	}
	template <typename T = void> T set_PlayerId(uint32_t value) {
		return ((T (*)(SkillBase*, uint32_t))(Il2CppBase() + 0x2E0EDA0))(this, value);
	}
	template <typename T = bool> T get_IsCoolingDown() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0EDA8))(this);
	}
	template <typename T = void> T set_IsCoolingDown(bool value) {
		return ((T (*)(SkillBase*, bool))(Il2CppBase() + 0x2E0EDB0))(this, value);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0EDB8))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(SkillBase*, bool))(Il2CppBase() + 0x2E0EDC0))(this, value);
	}
	template <typename T = uintptr_t> T get_SkillType() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0EDC8))(this);
	}
	template <typename T = void> T set_SkillType(uintptr_t value) {
		return ((T (*)(SkillBase*, uintptr_t))(Il2CppBase() + 0x2E0EDD0))(this, value);
	}
	template <typename T = int32_t> T get_SkillId() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0EDD8))(this);
	}
	template <typename T = int32_t> T get_RemainingTimes() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0E618))(this);
	}
	template <typename T = void> T set_RemainingTimes(int32_t value) {
		return ((T (*)(SkillBase*, int32_t))(Il2CppBase() + 0x2E0EDE0))(this, value);
	}
	template <typename T = int32_t> T get_InitRemainingTimes() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0E610))(this);
	}
	template <typename T = void> T set_InitRemainingTimes(int32_t value) {
		return ((T (*)(SkillBase*, int32_t))(Il2CppBase() + 0x2E0EDF4))(this, value);
	}
	template <typename T = void> T ConfigProperties() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0E084))(this);
	}
	template <typename T = void> T Init(uintptr_t inOwnerPawn, bool bInitialSkill) {
		return ((T (*)(SkillBase*, uintptr_t, bool))(Il2CppBase() + 0x2E0DF04))(this, inOwnerPawn, bInitialSkill);
	}
	template <typename T = void> T AddComponents(uintptr_t com) {
		return ((T (*)(SkillBase*, uintptr_t))(Il2CppBase() + 0x2E0E378))(this, com);
	}
	template <typename T = void> T OnRemainingTimesChanged() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0EA40))(this);
	}
	template <typename T = void> T OnInitRemainingTimesChanged() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0EADC))(this);
	}
	template <typename T = void> T UpdateUI(int32_t initCount, int32_t pickUpCount, bool isInit) {
		return ((T (*)(SkillBase*, int32_t, int32_t, bool))(Il2CppBase() + 0x2E0EE08))(this, initCount, pickUpCount, isInit);
	}
	template <typename T = uintptr_t> T GetOwnerPawn() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F148))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F294))(this);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F42C))(this);
	}
	template <typename T = void> T OnStopEffect() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F620))(this);
	}
	template <typename T = void> T Start1PEffect() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F6D8))(this);
	}
	template <typename T = void> T Start3PEffect() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F85C))(this);
	}
	template <typename T = bool> T Activate() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0F9E0))(this);
	}
	template <typename T = void> T OnActivate() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0FC38))(this);
	}
	template <typename T = void> T NotifyNudgeFinished(uintptr_t com) {
		return ((T (*)(SkillBase*, uintptr_t))(Il2CppBase() + 0x2E0FDD0))(this, com);
	}
	template <typename T = void> T OnSkillNudgeFinished() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0FE8C))(this);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E103D8))(this);
	}
	template <typename T = uintptr_t> T CheckEnd() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E1000C))(this);
	}
	template <typename T = bool> T CanActivate() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E10480))(this);
	}
	template <typename T = bool> T CanNudgeSkillComponents() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E10540))(this);
	}
	template <typename T = void> T NudgeSkillComponents() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0FB08))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E10690))(this);
	}
	template <typename T = void> T BeginCoolingDown() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E100EC))(this);
	}
	template <typename T = void> T OnEndCoolingDown() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E109A8))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E0E7C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E108D0))(this);
	}
	template <typename T = void> T BeginRemoteEffect() {
		return ((T (*)(SkillBase*))(Il2CppBase() + 0x2E10A50))(this);
	}
	template <typename T = void> T Start1PEffectm__0(uintptr_t FirstPersonEffect) {
		return ((T (*)(SkillBase*, uintptr_t))(Il2CppBase() + 0x2E10B90))(this, FirstPersonEffect);
	}
	template <typename T = void> T Start3PEffectm__1(uintptr_t ThirdPersonEffect) {
		return ((T (*)(SkillBase*, uintptr_t))(Il2CppBase() + 0x2E10D48))(this, ThirdPersonEffect);
	}

};

}
