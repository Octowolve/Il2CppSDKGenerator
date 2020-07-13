#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class SPGameInfoTutorialFinal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "SPGameInfo_TutorialFinal"));
	}

	template <typename T = bool> T& Aim() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& AimAccurate() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = int32_t> T& TargetStreakScore() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& InitialStreakScore() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& MissileExploreStreakScore() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& m_CurrentStreakScore() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& BanReammo() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& WaitingForReammo() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = uintptr_t> T& MissileState() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& TutorialMissileMissTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& TutorialMissileMissTime_MaxTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppVector3> T& m_CacheExpectMissileExplodePoint() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& ShowingSettlement() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& KillAccSum() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& KillInShortTimeAccSum() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& KillLastRecordTime() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& KillTimeLimit() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& LongShotDistance() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultStartSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScoreStreakDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMissileHitStreakScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMissileMissStreakScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVPGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayKillFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFirstBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWithoutDyingKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWithinAShortTimeKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHeadShotKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLongShotKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMissileKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_CanUseULTSkill() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B07840))(this);
	}
	template <typename T = bool> T get_CanPauseGame() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B07848))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B07850))(this);
	}
	template <typename T = bool> T get_OnlyShowMainWeapon() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B078F8))(this);
	}
	template <typename T = void> T GetDefaultStartSpot(uintptr_t pos, uintptr_t rot) {
		return ((T (*)(SPGameInfoTutorialFinal*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B07900))(this, pos, rot);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B07A80))(this);
	}
	template <typename T = void> T InitScoreStreakDataList() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B07D0C))(this);
	}
	template <typename T = int32_t> T get_CurrentStreakScore() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08118))(this);
	}
	template <typename T = void> T set_CurrentStreakScore(int32_t value) {
		return ((T (*)(SPGameInfoTutorialFinal*, int32_t))(Il2CppBase() + 0x4B07F40))(this, value);
	}
	template <typename T = void> T SetMissileHitStreakScore() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08120))(this);
	}
	template <typename T = void> T SetMissileMissStreakScore() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B0827C))(this);
	}
	template <typename T = bool> T get_BanReammo() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B0832C))(this);
	}
	template <typename T = void> T set_BanReammo(bool value) {
		return ((T (*)(SPGameInfoTutorialFinal*, bool))(Il2CppBase() + 0x4B025D4))(this, value);
	}
	template <typename T = bool> T get_WaitingForReammo() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08334))(this);
	}
	template <typename T = void> T set_WaitingForReammo(bool value) {
		return ((T (*)(SPGameInfoTutorialFinal*, bool))(Il2CppBase() + 0x4B0833C))(this, value);
	}
	template <typename T = uintptr_t> T get_MissileState() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08344))(this);
	}
	template <typename T = void> T set_MissileState(uintptr_t value) {
		return ((T (*)(SPGameInfoTutorialFinal*, uintptr_t))(Il2CppBase() + 0x4B0834C))(this, value);
	}
	template <typename T = int32_t> T get_TutorialMissileMissTime() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08354))(this);
	}
	template <typename T = void> T set_TutorialMissileMissTime(int32_t value) {
		return ((T (*)(SPGameInfoTutorialFinal*, int32_t))(Il2CppBase() + 0x4B0835C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_ExpectMissileExplodePoint() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08364))(this);
	}
	template <typename T = bool> T get_ShowingSettlement() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B084F0))(this);
	}
	template <typename T = void> T set_ShowingSettlement(bool value) {
		return ((T (*)(SPGameInfoTutorialFinal*, bool))(Il2CppBase() + 0x4B084F8))(this, value);
	}
	template <typename T = bool> T IsPVPGame() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08500))(this);
	}
	template <typename T = void> T PlayKillFeedback(bool bHeadshot, Il2CppVector3 pos) {
		return ((T (*)(SPGameInfoTutorialFinal*, bool, Il2CppVector3))(Il2CppBase() + 0x4B085A0))(this, bHeadshot, pos);
	}
	template <typename T = void> T PlayFeedBack(int32_t id) {
		return ((T (*)(SPGameInfoTutorialFinal*, int32_t))(Il2CppBase() + 0x4B08B40))(this, id);
	}
	template <typename T = void> T PlayFirstBlood() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08830))(this);
	}
	template <typename T = void> T PlayWithoutDyingKill() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B088D8))(this);
	}
	template <typename T = void> T PlayWithinAShortTimeKill() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B089A4))(this);
	}
	template <typename T = void> T PlayHeadShotKill() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08F38))(this);
	}
	template <typename T = void> T PlayLongShotKill() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08A98))(this);
	}
	template <typename T = void> T PlayMissileKill() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B081D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08FE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GetDefaultStartSpot(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SPGameInfoTutorialFinal*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B08FE8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08FF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitScoreStreakDataList() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B08FF8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPVPGame() {
		return ((T (*)(SPGameInfoTutorialFinal*))(Il2CppBase() + 0x4B09000))(this);
	}

};

}
