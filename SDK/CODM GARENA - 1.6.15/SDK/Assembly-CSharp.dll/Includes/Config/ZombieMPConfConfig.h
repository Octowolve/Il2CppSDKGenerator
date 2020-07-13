#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieMPConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieMPConfConfig"));
	}

	template <typename T = int32_t> static T& ENTRANCE_ZOMBIE_MP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ENTRANCE_ZOMBIE_TUTORIAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bSelect_Playlist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bSelect_MatchReward() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& m_ZombieMapGroupList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& InstanceGroup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_GroupName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& NumOfInvite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_NumOfInviteStr() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_FullName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Entrance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& QuickTeam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& InstanceId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MaxRound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& DifficultyLevel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_GroupRules() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& LOCID_InstanceInfo() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& GroupIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& GroupMapBackground() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& UnlockId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& NeedSpi() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& LevelPower() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& ZombieHpScale() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& FreeRevives() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& UseRevivalLimits() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& MaxMatchTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& RewardShow_1() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& RewardShow_2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ThumbnailName() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PassReward() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& StageNum() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MapID1() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& MapID2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& MapID3() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& MapID4() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& MapID5() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& ModifierSchemeId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& ModifierSchemeStartTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& ModifierCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ModifierWhitelist() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& ModifierBlacklist() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& Boss_type() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieMpMapList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieTutorialMp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieMapNameById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInstanceIdOpenInTargetModeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultMpConfInTargetModeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataByMapID_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapListSameGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_bSelect_Playlist() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414F940))(this);
	}
	template <typename T = void> T set_bSelect_Playlist(bool value) {
		return ((T (*)(ZombieMPConfConfig*, bool))(Il2CppBase() + 0x414F948))(this, value);
	}
	template <typename T = bool> T get_bSelect_MatchReward() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414F950))(this);
	}
	template <typename T = void> T set_bSelect_MatchReward(bool value) {
		return ((T (*)(ZombieMPConfConfig*, bool))(Il2CppBase() + 0x414F958))(this, value);
	}
	template <typename T = uintptr_t> T get_Difficulty() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414F960))(this);
	}
	template <typename T = void> T set_Difficulty(uintptr_t value) {
		return ((T (*)(ZombieMPConfConfig*, uintptr_t))(Il2CppBase() + 0x414F968))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414F970))(this);
	}
	template <typename T = void> static T GetZombieMpMapList(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414FAAC))(0, list);
	}
	template <typename T = void> static T GetZombieTutorialMp(uintptr_t tutorialMpConfig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414FCAC))(0, tutorialMpConfig);
	}
	template <typename T = Il2CppString*> static T GetZombieMapNameById(int32_t levelId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x414FE50))(0, levelId);
	}
	template <typename T = bool> static T IsInstanceIdOpenInTargetModeType(int32_t instanceId, uintptr_t type) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x414FFFC))(0, instanceId, type);
	}
	template <typename T = uintptr_t> static T GetDefaultMpConfInTargetModeType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41501D4))(0, type);
	}
	template <typename T = uintptr_t> static T GetDataByMapID_1(int32_t mapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4150380))(0, mapId);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetMapListSameGroup(int32_t pveLevelId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x415054C))(0, pveLevelId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41507C0))(this);
	}
	template <typename T = int32_t> T get_InstanceGroup() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41507B8))(this);
	}
	template <typename T = void> T set_InstanceGroup(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150890))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_GroupName() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150898))(this);
	}
	template <typename T = void> T set_LOCID_GroupName(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x41508A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupName() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414FFEC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41508A8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x41508B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41508B8))(this);
	}
	template <typename T = int32_t> T get_NumOfInvite() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41508C8))(this);
	}
	template <typename T = void> T set_NumOfInvite(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x41508D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_NumOfInviteStr() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41508D8))(this);
	}
	template <typename T = void> T set_LOCID_NumOfInviteStr(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x41508E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_NumOfInviteStr() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41508E8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_FullName() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41508F8))(this);
	}
	template <typename T = void> T set_LOCID_FullName(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150900))(this, value);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150908))(this);
	}
	template <typename T = int32_t> T get_Entrance() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414FCA4))(this);
	}
	template <typename T = void> T set_Entrance(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150918))(this, value);
	}
	template <typename T = int32_t> T get_QuickTeam() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150920))(this);
	}
	template <typename T = void> T set_QuickTeam(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150928))(this, value);
	}
	template <typename T = int32_t> T get_InstanceId() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41501CC))(this);
	}
	template <typename T = void> T set_InstanceId(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150930))(this, value);
	}
	template <typename T = int32_t> T get_MaxRound() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150938))(this);
	}
	template <typename T = void> T set_MaxRound(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150940))(this, value);
	}
	template <typename T = Il2CppString*> T get_DifficultyLevel() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x414FAA4))(this);
	}
	template <typename T = void> T set_DifficultyLevel(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150948))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_GroupRules() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150950))(this);
	}
	template <typename T = void> T set_LOCID_GroupRules(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150958))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupRules() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150960))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_InstanceInfo() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150970))(this);
	}
	template <typename T = void> T set_LOCID_InstanceInfo(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150978))(this, value);
	}
	template <typename T = Il2CppString*> T get_InstanceInfo() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150980))(this);
	}
	template <typename T = Il2CppString*> T get_GroupIcon() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150990))(this);
	}
	template <typename T = void> T set_GroupIcon(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150998))(this, value);
	}
	template <typename T = Il2CppString*> T get_GroupMapBackground() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41509A0))(this);
	}
	template <typename T = void> T set_GroupMapBackground(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x41509A8))(this, value);
	}
	template <typename T = int32_t> T get_UnlockId() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41509B0))(this);
	}
	template <typename T = void> T set_UnlockId(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x41509B8))(this, value);
	}
	template <typename T = int32_t> T get_NeedSpi() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41509C0))(this);
	}
	template <typename T = void> T set_NeedSpi(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x41509C8))(this, value);
	}
	template <typename T = int32_t> T get_LevelPower() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41509D0))(this);
	}
	template <typename T = void> T set_LevelPower(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x41509D8))(this, value);
	}
	template <typename T = int32_t> T get_ZombieHpScale() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41509E0))(this);
	}
	template <typename T = void> T set_ZombieHpScale(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x41509E8))(this, value);
	}
	template <typename T = int32_t> T get_FreeRevives() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x41509F0))(this);
	}
	template <typename T = void> T set_FreeRevives(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x41509F8))(this, value);
	}
	template <typename T = int32_t> T get_UseRevivalLimits() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A00))(this);
	}
	template <typename T = void> T set_UseRevivalLimits(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150A08))(this, value);
	}
	template <typename T = int32_t> T get_MaxMatchTime() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A10))(this);
	}
	template <typename T = void> T set_MaxMatchTime(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150A18))(this, value);
	}
	template <typename T = int32_t> T get_RewardShow_1() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A20))(this);
	}
	template <typename T = void> T set_RewardShow_1(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150A28))(this, value);
	}
	template <typename T = int32_t> T get_RewardShow_2() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A30))(this);
	}
	template <typename T = void> T set_RewardShow_2(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150A38))(this, value);
	}
	template <typename T = Il2CppString*> T get_ThumbnailName() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A40))(this);
	}
	template <typename T = void> T set_ThumbnailName(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150A48))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A50))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppString*))(Il2CppBase() + 0x4150A58))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PassReward() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A60))(this);
	}
	template <typename T = void> T set_PassReward(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4150A68))(this, value);
	}
	template <typename T = int32_t> T get_StageNum() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A70))(this);
	}
	template <typename T = void> T set_StageNum(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150A78))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MapID1() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150544))(this);
	}
	template <typename T = void> T set_MapID1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4150A80))(this, value);
	}
	template <typename T = int32_t> T get_MapID2() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A88))(this);
	}
	template <typename T = void> T set_MapID2(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150A90))(this, value);
	}
	template <typename T = int32_t> T get_MapID3() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150A98))(this);
	}
	template <typename T = void> T set_MapID3(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150AA0))(this, value);
	}
	template <typename T = int32_t> T get_MapID4() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150AA8))(this);
	}
	template <typename T = void> T set_MapID4(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150AB0))(this, value);
	}
	template <typename T = int32_t> T get_MapID5() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150AB8))(this);
	}
	template <typename T = void> T set_MapID5(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150AC0))(this, value);
	}
	template <typename T = int32_t> T get_ModifierSchemeId() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150AC8))(this);
	}
	template <typename T = void> T set_ModifierSchemeId(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150AD0))(this, value);
	}
	template <typename T = int32_t> T get_ModifierSchemeStartTime() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150AD8))(this);
	}
	template <typename T = void> T set_ModifierSchemeStartTime(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150AE0))(this, value);
	}
	template <typename T = int32_t> T get_ModifierCount() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150AE8))(this);
	}
	template <typename T = void> T set_ModifierCount(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150AF0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ModifierWhitelist() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150AF8))(this);
	}
	template <typename T = void> T set_ModifierWhitelist(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4150B00))(this, value);
	}
	template <typename T = int32_t> T get_ModifierBlacklist() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150B08))(this);
	}
	template <typename T = void> T set_ModifierBlacklist(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150B10))(this, value);
	}
	template <typename T = int32_t> T get_Boss_type() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4150B18))(this);
	}
	template <typename T = void> T set_Boss_type(int32_t value) {
		return ((T (*)(ZombieMPConfConfig*, int32_t))(Il2CppBase() + 0x4150B20))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieMPConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4150B28))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieMPConfConfig*))(Il2CppBase() + 0x4151154))(this);
	}

};

}
