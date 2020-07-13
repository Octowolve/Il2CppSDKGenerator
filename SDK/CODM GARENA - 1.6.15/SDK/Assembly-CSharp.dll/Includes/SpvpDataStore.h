#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpvpDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpvpDataStore"));
	}

	template <typename T = uint32_t> static T& TIME_STAMP_2099() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bReqSetRedDotTimeStamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_LadderModeSelectType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_LadderSelectTypeBefore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsMPMultipleChooseAllowed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bFilterAllowedByServer() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = int32_t> T& m_SpvpPlaylistMaxSelectNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_MPModeSelectType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_bShowNewMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SpvpPlaylistGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DyanmicDownloadMapList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LadderPlaylistUnlockConfs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_UnlockLadderLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicDownloadMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDynamicDownloadMapInfoByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDynamicDownloadMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDynamicDownloadMapInfoByQuestId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultSpvpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpvpInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayListInfoValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterInvalidPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayListInfoValidByTargetPlaylistIdAndMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNewMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataByServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMPMultipleChooseOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstLevelTabInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaylistConfigInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaplist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayListGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaylistInfoByPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPlaylistInfoByPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLegalScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLegalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDotInfoByServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetMpLadderInfoLastChoose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetMpLadderInfoDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultMpLadderInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxLadderLevelReachLadderLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyModePlaylistInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMpLadderRandomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSoloMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaylistValidInTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTrainPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaylistInfoBySepcialEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaylistBtnDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomPlaylistBtnDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaylistDescByList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstLevelTabByPlaylistId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotInOtherLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedBlockPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveUnlockLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockLadderLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}

	template <typename T = int32_t> T get_LadderModeSelectType() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A188))(this);
	}
	template <typename T = int32_t> T get_LadderSelectTypeBefore() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A190))(this);
	}
	template <typename T = void> T set_LadderSelectTypeBefore(int32_t value) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x430A198))(this, value);
	}
	template <typename T = bool> T get_IsMPMultipleChooseAllowed() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A1A0))(this);
	}
	template <typename T = void> T set_IsMPMultipleChooseAllowed(bool value) {
		return ((T (*)(SpvpDataStore*, bool))(Il2CppBase() + 0x430A1A8))(this, value);
	}
	template <typename T = int32_t> T get_SpvpPlaylistMaxSelectNum() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A1B0))(this);
	}
	template <typename T = int32_t> T get_MPModeSelectType() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A1B8))(this);
	}
	template <typename T = void> T set_MPModeSelectType(int32_t value) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x430A1C0))(this, value);
	}
	template <typename T = bool> T get_bShowNewMode() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A1C8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LadderPlaylistUnlockConfs() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x430A1D0))(this);
	}
	template <typename T = void> T SetDynamicDownloadMapInfo(uint32_t mapId, int32_t questId, uint64_t nowSize, uint64_t totalSize, uint64_t wholeSize) {
		return ((T (*)(SpvpDataStore*, uint32_t, int32_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x430A1D8))(this, mapId, questId, nowSize, totalSize, wholeSize);
	}
	template <typename T = uintptr_t> T GetDynamicDownloadMapInfoByMapId(uint32_t mapId) {
		return ((T (*)(SpvpDataStore*, uint32_t))(Il2CppBase() + 0x430A4C0))(this, mapId);
	}
	template <typename T = void> T RemoveDynamicDownloadMapInfo(uint32_t mapId) {
		return ((T (*)(SpvpDataStore*, uint32_t))(Il2CppBase() + 0x430A67C))(this, mapId);
	}
	template <typename T = void> T RemoveDynamicDownloadMapInfoByQuestId(int32_t questId) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x430A7F4))(this, questId);
	}
	template <typename T = bool> T GetDefaultSpvpInfo(uintptr_t matchType, uintptr_t playlistId, uintptr_t mapIds) {
		return ((T (*)(SpvpDataStore*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x430A96C))(this, matchType, playlistId, mapIds);
	}
	template <typename T = bool> T IsSpvpInfoValid(uintptr_t matchType) {
		return ((T (*)(SpvpDataStore*, uintptr_t))(Il2CppBase() + 0x430B8FC))(this, matchType);
	}
	template <typename T = uintptr_t> T IsPlayListInfoValid(uintptr_t matchType, int32_t playListId, uintptr_t mapIds, uintptr_t levelInfo, int32_t ladderLevel) {
		return ((T (*)(SpvpDataStore*, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x430BA84))(this, matchType, playListId, mapIds, levelInfo, ladderLevel);
	}
	template <typename T = void> T FilterInvalidPlaylist(uintptr_t matchType, uintptr_t PlaylistList, uintptr_t levelInfo, int32_t ladderLevel) {
		return ((T (*)(SpvpDataStore*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x430CA5C))(this, matchType, PlaylistList, levelInfo, ladderLevel);
	}
	template <typename T = bool> T IsPlayListInfoValidByTargetPlaylistIdAndMapId(uintptr_t matchType, int32_t playListId, int32_t targetMapId, uintptr_t levelInfo, int32_t ladderLevel, uintptr_t playlistState, uintptr_t mapState, uintptr_t mapIds) {
		return ((T (*)(SpvpDataStore*, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x430D72C))(this, matchType, playListId, targetMapId, levelInfo, ladderLevel, playlistState, mapState, mapIds);
	}
	template <typename T = void> T RefreshNewMode(uintptr_t res) {
		return ((T (*)(SpvpDataStore*, uintptr_t))(Il2CppBase() + 0x430E4F0))(this, res);
	}
	template <typename T = void> T RefreshDataByServer(uintptr_t res) {
		return ((T (*)(SpvpDataStore*, uintptr_t))(Il2CppBase() + 0x430E5B8))(this, res);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x43115F8))(this);
	}
	template <typename T = bool> T IsMPMultipleChooseOpen() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x43119B0))(this);
	}
	template <typename T = uintptr_t> T GetFirstLevelTabInfo(uintptr_t conf, Il2CppList<uintptr_t>* maplist) {
		return ((T (*)(SpvpDataStore*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4310ABC))(this, conf, maplist);
	}
	template <typename T = uintptr_t> T GetPlaylistConfigInfo(uintptr_t conf, Il2CppList<uintptr_t>* maplist) {
		return ((T (*)(SpvpDataStore*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x430F784))(this, conf, maplist);
	}
	template <typename T = void> T GetMaplist(int32_t playlistId, int32_t matchType, bool bEnalbeSelect, Il2CppList<uintptr_t>* maplist, uintptr_t clientMapList, uintptr_t clientMapListMustDown) {
		return ((T (*)(SpvpDataStore*, int32_t, int32_t, bool, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4311C38))(this, playlistId, matchType, bEnalbeSelect, maplist, clientMapList, clientMapListMustDown);
	}
	template <typename T = uintptr_t> T GetPlayListGroup(int32_t matchType) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x4310DB8))(this, matchType);
	}
	template <typename T = uintptr_t> T GetPlaylistInfoByPlaylistId(uintptr_t matchType, int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x43124E4))(this, matchType, playlistId);
	}
	template <typename T = uintptr_t> T GetPlaylistInfoByPlaylistId_1(int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x43128DC))(this, playlistId);
	}
	template <typename T = int32_t> T GetLegalScore(int32_t matchType, int32_t spvpPlaylistId, int32_t value, uintptr_t bLeft, uintptr_t bRight) {
		return ((T (*)(SpvpDataStore*, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4312C70))(this, matchType, spvpPlaylistId, value, bLeft, bRight);
	}
	template <typename T = int32_t> T GetLegalTime(int32_t matchType, int32_t spvpPlaylistId, int32_t value, uintptr_t bLeft, uintptr_t bRight) {
		return ((T (*)(SpvpDataStore*, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43133F0))(this, matchType, spvpPlaylistId, value, bLeft, bRight);
	}
	template <typename T = void> T RefreshRedDotInfoByServer() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x4310F28))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T TryGetMpLadderInfoLastChoose(int32_t playlistGroupIndex, int32_t randomPlaylistId, int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t teamMinLevelInfo, int32_t teamMinLadderLevel) {
		return ((T (*)(SpvpDataStore*, int32_t, int32_t, int32_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4313B80))(this, playlistGroupIndex, randomPlaylistId, serverTime, dateTime, dayOfWeek, teamMinLevelInfo, teamMinLadderLevel);
	}
	template <typename T = Il2CppList<uintptr_t>*> T TryGetMpLadderInfoDefault(int32_t playlistGroupIndex, int32_t randomPlaylistId, int32_t serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t teamMinLevelInfo, int32_t teamMinLadderLevel) {
		return ((T (*)(SpvpDataStore*, int32_t, int32_t, int32_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4314224))(this, playlistGroupIndex, randomPlaylistId, serverTime, dateTime, dayOfWeek, teamMinLevelInfo, teamMinLadderLevel);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetDefaultMpLadderInfo() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x4314ED4))(this);
	}
	template <typename T = int32_t> T GetMaxLadderLevelReachLadderLimit(int32_t ladderLimit) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x43153B8))(this, ladderLimit);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetKeyModePlaylistInfo(uintptr_t matchType, int32_t serverTime, uintptr_t levelInfo, int32_t ladderLevel) {
		return ((T (*)(SpvpDataStore*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x43159B0))(this, matchType, serverTime, levelInfo, ladderLevel);
	}
	template <typename T = uintptr_t> T GetMpLadderRandomInfo() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x43160DC))(this);
	}
	template <typename T = bool> T IsSoloMode(int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x4316194))(this, playlistId);
	}
	template <typename T = bool> T IsPlaylistValidInTabs(int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x4316304))(this, playlistId);
	}
	template <typename T = bool> T IsTrainPlaylist(int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x43163B8))(this, playlistId);
	}
	template <typename T = uintptr_t> T GetPlaylistInfoBySepcialEntrance(int32_t specialEntrance, uintptr_t matchType) {
		return ((T (*)(SpvpDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x4316484))(this, specialEntrance, matchType);
	}
	template <typename T = Il2CppString*> T GetPlaylistBtnDesc(uintptr_t matchType) {
		return ((T (*)(SpvpDataStore*, uintptr_t))(Il2CppBase() + 0x4316950))(this, matchType);
	}
	template <typename T = Il2CppString*> T GetRoomPlaylistBtnDesc() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x4316F88))(this);
	}
	template <typename T = Il2CppString*> T GetPlaylistDescByList(Il2CppList<uint32_t>* PlaylistList) {
		return ((T (*)(SpvpDataStore*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x4317758))(this, PlaylistList);
	}
	template <typename T = uintptr_t> T GetFirstLevelTabByPlaylistId(int32_t playlistId, uintptr_t matchType) {
		return ((T (*)(SpvpDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x4317EBC))(this, playlistId, matchType);
	}
	template <typename T = bool> T IsNotInOtherLimit(uintptr_t matchType, int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x431820C))(this, matchType, playlistId);
	}
	template <typename T = bool> T IsNeedBlockPlaylist(int32_t playlistId) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x430D474))(this, playlistId);
	}
	template <typename T = void> T SaveUnlockLadder(int32_t ladderLevel) {
		return ((T (*)(SpvpDataStore*, int32_t))(Il2CppBase() + 0x4318320))(this, ladderLevel);
	}
	template <typename T = int32_t> T GetUnlockLadderLevel() {
		return ((T (*)(SpvpDataStore*))(Il2CppBase() + 0x43183C8))(this);
	}
	template <typename T = int32_t> static T RefreshDataByServerm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4318468))(0, a, b);
	}
	template <typename T = bool> static T GetDefaultMpLadderInfom__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43184A0))(0, it);
	}
	template <typename T = bool> static T GetMaxLadderLevelReachLadderLimitm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43184D0))(0, it);
	}
	template <typename T = bool> static T GetRoomPlaylistBtnDescm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4318500))(0, it);
	}
	template <typename T = bool> static T GetPlaylistDescByListm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4318530))(0, it);
	}

};

}
