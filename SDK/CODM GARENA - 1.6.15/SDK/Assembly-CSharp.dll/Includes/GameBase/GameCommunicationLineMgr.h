#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameCommunicationLineMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameCommunicationLineMgr"));
	}

	template <typename T = Il2CppString*> static T& FLAG1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FLAG2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LOC_BRTIPS_YOU() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PAWN_FLAG_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PAWN_FLAG_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHAT_TITLE_SYSTEM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHAT_TITLE_PAWN_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COLOR_YELLOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COLOR_GREEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COLOR_WRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PauseAwakeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<uint32_t, float>*>*> T& m_CacheEvnetTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_RandomDict() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GCLInfoSystemList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_GCLInfoCharacterList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CurrentCharacterInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CurrentSystemInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsSystemPlaying() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsCharacterPlaying() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_PauseAwakeTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncApplicationPauseAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBySceneMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayByItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSystemTimeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCharacterTimeEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayByMsgID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayByMsgID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnAudioEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioEventNamePro() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDurationByAudioEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudioAtPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudioFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudioByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCDLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAreaLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeamCountLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRTeamCountLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPTeamCountLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAliveTeamCountLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSyncTalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = bool> T get_IsSystemPlaying() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F0BF0))(this);
	}
	template <typename T = bool> T get_IsCharacterPlaying() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F0BF8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F0C00))(this);
	}
	template <typename T = void> T SyncApplicationPauseAwake() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F0CE0))(this);
	}
	template <typename T = bool> T IsNotAwake() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F0D8C))(this);
	}
	template <typename T = bool> T IsCanPlay(uintptr_t eventType, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, uint32_t))(Il2CppBase() + 0x31F0E5C))(this, eventType, targetID);
	}
	template <typename T = int32_t> T GetID(int32_t itemID, int32_t itemType, int32_t sceneMarkType) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x31F12A4))(this, itemID, itemType, sceneMarkType);
	}
	template <typename T = void> T PlayBySceneMark(int32_t sceneMarkType, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, uint32_t))(Il2CppBase() + 0x31F1608))(this, sceneMarkType, targetID);
	}
	template <typename T = void> T PlayByItem(int32_t itemID, uint32_t targetID, int32_t itemType) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, uint32_t, int32_t))(Il2CppBase() + 0x31F21E8))(this, itemID, targetID, itemType);
	}
	template <typename T = void> T Play(uintptr_t eventType, uint32_t targetID, int32_t itemID) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x31F2490))(this, eventType, targetID, itemID);
	}
	template <typename T = void> T Play_1(int32_t eventID, uint32_t targetID, int32_t itemID, bool serverNotify) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, uint32_t, int32_t, bool))(Il2CppBase() + 0x31F1840))(this, eventID, targetID, itemID, serverNotify);
	}
	template <typename T = void> T Play_2(int32_t eventID, uintptr_t type, int32_t systemMsgID, Il2CppArray<uintptr_t>* chaMsgIDArray, int32_t timeLimit, uintptr_t areaLimit, uintptr_t teamCountLimit, uintptr_t mpTeamCountLimit, uintptr_t chaMsgType, int32_t priority, int32_t priority3P, int32_t effectDuration, int32_t keep, uint32_t targetID, int32_t itemID) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, int32_t, uint32_t, int32_t))(Il2CppBase() + 0x31F2660))(this, eventID, type, systemMsgID, chaMsgIDArray, timeLimit, areaLimit, teamCountLimit, mpTeamCountLimit, chaMsgType, priority, priority3P, effectDuration, keep, targetID, itemID);
	}
	template <typename T = void> T SortInfo(uintptr_t info, uintptr_t infoList) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31F3B70))(this, info, infoList);
	}
	template <typename T = void> T OnSystemTimeEnd() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F3FD8))(this);
	}
	template <typename T = void> T OnCharacterTimeEnd() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F41B8))(this);
	}
	template <typename T = void> T StopCurrent(uintptr_t currentInfo) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t))(Il2CppBase() + 0x31F4094))(this, currentInfo);
	}
	template <typename T = void> T PlayNext(uintptr_t currentInfo, uintptr_t infoList) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31F3DBC))(this, currentInfo, infoList);
	}
	template <typename T = float> T Play_3(uintptr_t info) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t))(Il2CppBase() + 0x31F4274))(this, info);
	}
	template <typename T = float> T PlayByMsgID(int32_t msgID, uintptr_t type, Il2CppString* title, Il2CppString* chatColor, uintptr_t flagType, uint32_t targetID, int32_t itemID) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x31F4A90))(this, msgID, type, title, chatColor, flagType, targetID, itemID);
	}
	template <typename T = float> T PlayByMsgID_1(Il2CppArray<uintptr_t>* msgIDArray, uintptr_t playType, uintptr_t type, Il2CppString* title, Il2CppString* chatColor, uintptr_t flagType, uint32_t targetID, int32_t itemID) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x31F50F4))(this, msgIDArray, playType, type, title, chatColor, flagType, targetID, itemID);
	}
	template <typename T = bool> T GetTargetInfo(uint32_t targetID, uintptr_t* female, uintptr_t* roleID) {
		return ((T (*)(GameCommunicationLineMgr*, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x31F5974))(this, targetID, female, roleID);
	}
	template <typename T = Il2CppString*> T GetPawnAudioEventName(uintptr_t flagType, Il2CppString* audioAsset, uint32_t roleID) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, Il2CppString*, uint32_t))(Il2CppBase() + 0x31F5AC0))(this, flagType, audioAsset, roleID);
	}
	template <typename T = Il2CppString*> T GetAudioEventNamePro(Il2CppString* audioAsset, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, uint32_t))(Il2CppBase() + 0x31F66AC))(this, audioAsset, targetID);
	}
	template <typename T = float> T GetDurationByAudioEventName(Il2CppString* audioEventName) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*))(Il2CppBase() + 0x31F6920))(this, audioEventName);
	}
	template <typename T = void> T ShowTips(Il2CppString* context, uint32_t targetID, int32_t itemID) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, uint32_t, int32_t))(Il2CppBase() + 0x31F6104))(this, context, targetID, itemID);
	}
	template <typename T = void> T ShowChat(Il2CppString* context, Il2CppString* title, Il2CppString* color) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x31F5DF0))(this, context, title, color);
	}
	template <typename T = void> T PlayAudio(Il2CppString* strAudioID, uintptr_t type, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, uintptr_t, uint32_t))(Il2CppBase() + 0x31F5CF4))(this, strAudioID, type, targetID);
	}
	template <typename T = void> T PlayAudio_1(Il2CppString* strAudioID, bool bStartPaused, int32_t SoundType) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x31F6AEC))(this, strAudioID, bStartPaused, SoundType);
	}
	template <typename T = void> T PlayAudioAtPos(Il2CppString* strAudioID, Il2CppVector3 vecPos, bool byPassRangeCheck) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x31F710C))(this, strAudioID, vecPos, byPassRangeCheck);
	}
	template <typename T = void> T PlayAudioFollowTarget(Il2CppString* strAudioID, uintptr_t target) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x31F7238))(this, strAudioID, target);
	}
	template <typename T = void> T PlayAudioByPawn(Il2CppString* strAudioID, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, Il2CppString*, uint32_t))(Il2CppBase() + 0x31F6CB0))(this, strAudioID, targetID);
	}
	template <typename T = bool> T CanPlayAudio(int32_t showType) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t))(Il2CppBase() + 0x31F6A30))(this, showType);
	}
	template <typename T = bool> T IsCDLimit(int32_t eventID, int32_t limit, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x31F10D0))(this, eventID, limit, targetID);
	}
	template <typename T = bool> T IsAreaLimit(uintptr_t limit) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t))(Il2CppBase() + 0x31F32D0))(this, limit);
	}
	template <typename T = bool> T IsTeamCountLimit(uintptr_t limit, uintptr_t mpTeamCountLimit) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31F33B8))(this, limit, mpTeamCountLimit);
	}
	template <typename T = bool> T IsBRTeamCountLimit(uintptr_t limit) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t))(Il2CppBase() + 0x31F73CC))(this, limit);
	}
	template <typename T = bool> T IsMPTeamCountLimit(uintptr_t limit) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t))(Il2CppBase() + 0x31F7504))(this, limit);
	}
	template <typename T = bool> T IsAliveTeamCountLimit(int32_t eventID, uintptr_t type, bool limit) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x31F35B0))(this, eventID, type, limit);
	}
	template <typename T = bool> T IsSample() {
		return ((T (*)(GameCommunicationLineMgr*))(Il2CppBase() + 0x31F1030))(this);
	}
	template <typename T = void> T RequestSyncTalk(uintptr_t eventType, uint32_t targetID) {
		return ((T (*)(GameCommunicationLineMgr*, uintptr_t, uint32_t))(Il2CppBase() + 0x31F2574))(this, eventType, targetID);
	}
	template <typename T = int32_t> T GetRandomValue(int32_t eventID, int32_t randomLength) {
		return ((T (*)(GameCommunicationLineMgr*, int32_t, int32_t))(Il2CppBase() + 0x31F75AC))(this, eventID, randomLength);
	}

};

}
