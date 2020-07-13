#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoDataStore"));
	}

	template <typename T = Il2CppString*> static T& DataStoreSubscriberTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LocalPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OtherPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_bRequestLocalInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_bNeedRestoreToLocal() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& m_IsIconClickInfo() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& m_IsHeadIconClick() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsHistoryRecord() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPPlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPvpGameStatRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRPlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrGameStatRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZombiePlayerGameStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEEndlessLevelId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPVEGameStatModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameHistoryStatis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameHistoryHideInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameHistoryHideInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPlayerPveGameTotalTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameHistory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRNewGuide_GetBRGameRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FADC))(this);
	}
	template <typename T = bool> T get_bRequestLocalInfo() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FBF4))(this);
	}
	template <typename T = void> T set_bRequestLocalInfo(bool value) {
		return ((T (*)(PersonalInfoDataStore*, bool))(Il2CppBase() + 0x531FBFC))(this, value);
	}
	template <typename T = bool> T get_IsIconClickInfo() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FC04))(this);
	}
	template <typename T = void> T set_IsIconClickInfo(bool value) {
		return ((T (*)(PersonalInfoDataStore*, bool))(Il2CppBase() + 0x531FC0C))(this, value);
	}
	template <typename T = bool> T get_IsHeadIconClick() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FC14))(this);
	}
	template <typename T = void> T set_IsHeadIconClick(bool value) {
		return ((T (*)(PersonalInfoDataStore*, bool))(Il2CppBase() + 0x531FC1C))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerId() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FC24))(this);
	}
	template <typename T = void> T set_PlayerId(uint64_t value) {
		return ((T (*)(PersonalInfoDataStore*, uint64_t))(Il2CppBase() + 0x531FC2C))(this, value);
	}
	template <typename T = bool> T get_IsHistoryRecord() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FC3C))(this);
	}
	template <typename T = void> T set_IsHistoryRecord(bool value) {
		return ((T (*)(PersonalInfoDataStore*, bool))(Il2CppBase() + 0x531FC44))(this, value);
	}
	template <typename T = uintptr_t> T GetPlayerData() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x531FC4C))(this);
	}
	template <typename T = void> T SetPVPPlayerGameStat(uintptr_t res) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t))(Il2CppBase() + 0x531FD2C))(this, res);
	}
	template <typename T = uintptr_t> T GetPVPGameStatModeInfo(uintptr_t matchType, uintptr_t mode) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x531FE98))(this, matchType, mode);
	}
	template <typename T = uintptr_t> T GetPvpGameStatRank(int32_t seasonNo) {
		return ((T (*)(PersonalInfoDataStore*, int32_t))(Il2CppBase() + 0x531FFBC))(this, seasonNo);
	}
	template <typename T = void> T SetBRPlayerGameStat(uintptr_t res) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t))(Il2CppBase() + 0x53200B0))(this, res);
	}
	template <typename T = uintptr_t> T GetBRGameStatModeInfo(uintptr_t matchType, uintptr_t temType) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x532021C))(this, matchType, temType);
	}
	template <typename T = uintptr_t> T GetBrGameStatRank(int32_t seasonNo) {
		return ((T (*)(PersonalInfoDataStore*, int32_t))(Il2CppBase() + 0x5320340))(this, seasonNo);
	}
	template <typename T = void> T SetZombiePlayerGameStat(uintptr_t res) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t))(Il2CppBase() + 0x5320434))(this, res);
	}
	template <typename T = int32_t> T GetPVEEndlessLevelId(Il2CppString* MapName) {
		return ((T (*)(PersonalInfoDataStore*, Il2CppString*))(Il2CppBase() + 0x53205A0))(this, MapName);
	}
	template <typename T = uintptr_t> T GetPVEGameStatModeInfo(int32_t groupId, uintptr_t diff, Il2CppString* MapName, uintptr_t mode) {
		return ((T (*)(PersonalInfoDataStore*, int32_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x53207C4))(this, groupId, diff, MapName, mode);
	}
	template <typename T = uintptr_t> T GetPVEGameStatModeInfo_1(int32_t levelId) {
		return ((T (*)(PersonalInfoDataStore*, int32_t))(Il2CppBase() + 0x5320AD8))(this, levelId);
	}
	template <typename T = void> T SetGameHistoryStatis(uintptr_t res) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t))(Il2CppBase() + 0x5320BE0))(this, res);
	}
	template <typename T = void> T SetGameHistoryHideInfo(bool IsHide) {
		return ((T (*)(PersonalInfoDataStore*, bool))(Il2CppBase() + 0x5320CE8))(this, IsHide);
	}
	template <typename T = bool> T GetGameHistoryHideInfo() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x5320DE8))(this);
	}
	template <typename T = uint32_t> T GetLocalPlayerPveGameTotalTimes() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x5320EEC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetGameHistory(uintptr_t type) {
		return ((T (*)(PersonalInfoDataStore*, uintptr_t))(Il2CppBase() + 0x5320FD4))(this, type);
	}
	template <typename T = int32_t> T BRNewGuide_GetBRGameRound() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x53210DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(PersonalInfoDataStore*))(Il2CppBase() + 0x5321298))(this);
	}

};

}
