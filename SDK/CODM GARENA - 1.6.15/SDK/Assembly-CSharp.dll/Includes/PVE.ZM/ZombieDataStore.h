#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZombieDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZombieDataStore"));
	}

	template <typename T = int32_t> static T& PVE_MP_DROPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ZombieMpMapList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ZombieOpenTimeList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_TutorialMp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsReqPveMpRewardList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PveMpRewardList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bAutoFill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mLastLevels() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mLevels() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uint32_t>*>*> T& m_LevelModifierListDic() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_EndlessInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NormalChapterList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HardChapterList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HellChapterList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMpMapList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieMpList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieOpenTimeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTutorialMp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialMp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieMpConfigClassifyByInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInstanceIdValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieMpConfigByInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultInstanceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRewardLimitationRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRewardLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshOpenTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieMpDrops() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLevelModifierListDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveEndlessInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateZombieCompaignInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChapterInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDifficultyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = bool> T get_bAutoFill() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4063B30))(this);
	}
	template <typename T = void> T set_bAutoFill(bool value) {
		return ((T (*)(ZombieDataStore*, bool))(Il2CppBase() + 0x4063B38))(this, value);
	}
	template <typename T = void> T InitMpMapList() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4063B40))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetZombieMpList() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4063C78))(this);
	}
	template <typename T = bool> T IsPVEOpen() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4063D20))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetZombieOpenTimeList() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4063F48))(this);
	}
	template <typename T = uintptr_t> T GetTutorialMp() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4063FE8))(this);
	}
	template <typename T = bool> T IsTutorialMp(int32_t instanceId) {
		return ((T (*)(ZombieDataStore*, int32_t))(Il2CppBase() + 0x4064090))(this, instanceId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetZombieMpConfigClassifyByInstanceId() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4064168))(this);
	}
	template <typename T = bool> T IsInstanceIdValid(int32_t instanceId) {
		return ((T (*)(ZombieDataStore*, int32_t))(Il2CppBase() + 0x40643E8))(this, instanceId);
	}
	template <typename T = bool> T GetGameMode(int32_t instanceId, uintptr_t gameModeId) {
		return ((T (*)(ZombieDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x4064540))(this, instanceId, gameModeId);
	}
	template <typename T = uintptr_t> T GetZombieMpConfigByInstanceId(int32_t instanceId) {
		return ((T (*)(ZombieDataStore*, int32_t))(Il2CppBase() + 0x406485C))(this, instanceId);
	}
	template <typename T = int32_t> T GetDefaultInstanceId() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x40649E8))(this);
	}
	template <typename T = void> T OnGetRewardLimitationRes(uintptr_t res) {
		return ((T (*)(ZombieDataStore*, uintptr_t))(Il2CppBase() + 0x4064B14))(this, res);
	}
	template <typename T = void> T RefreshRewardLimitation(Il2CppList<uintptr_t>* list) {
		return ((T (*)(ZombieDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4064BD8))(this, list);
	}
	template <typename T = void> T RefreshOpenTime(uintptr_t res) {
		return ((T (*)(ZombieDataStore*, uintptr_t))(Il2CppBase() + 0x4064FB0))(this, res);
	}
	template <typename T = uintptr_t> T GetZombieMpDrops(int32_t instanceId) {
		return ((T (*)(ZombieDataStore*, int32_t))(Il2CppBase() + 0x4065198))(this, instanceId);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4065310))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x40653F0))(this);
	}
	template <typename T = void> T SaveLevelModifierListDic(Il2CppList<uintptr_t>* levelList) {
		return ((T (*)(ZombieDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4065494))(this, levelList);
	}
	template <typename T = void> T SaveEndlessInfo(uintptr_t info) {
		return ((T (*)(ZombieDataStore*, uintptr_t))(Il2CppBase() + 0x40656B8))(this, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetLevels() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4065794))(this);
	}
	template <typename T = uintptr_t> T GetLevel(int32_t levelID) {
		return ((T (*)(ZombieDataStore*, int32_t))(Il2CppBase() + 0x4065A34))(this, levelID);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4065B38))(this);
	}
	template <typename T = void> T UpdateZombieCompaignInfo(uintptr_t res) {
		return ((T (*)(ZombieDataStore*, uintptr_t))(Il2CppBase() + 0x4065BE8))(this, res);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChapterInfo(int32_t difficultyLevel) {
		return ((T (*)(ZombieDataStore*, int32_t))(Il2CppBase() + 0x405A8AC))(this, difficultyLevel);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetDifficultyInfo() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x40597DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4065C88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4065C90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(ZombieDataStore*))(Il2CppBase() + 0x4065C98))(this);
	}

};

}
