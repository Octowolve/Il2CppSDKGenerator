#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& OPEN_LOG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> T& LobbyVoiceUiPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsIOS13() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IfMemoryEnoughSupportVoice() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& recordFileMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& uploadRecordFileQueue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& chatCacheForTranslateMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsAutoPlayWhenDownload() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsAutoSendChatWhenUpload() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& IsUploadingRecordFile() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = Il2CppString*> T& CacheVoiceUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RegexForVoiceText() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& CacheCurVoiceTeamRoomName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& CacheCurVoiceRangeRoomName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& CacheCurVoiceFriendRoomName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& CacheMicrophoneMode() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& CacheAudioMode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& CacheMicrophoneHoldingMode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& CacheCurrentIsHolding() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = int32_t> T& SelfTeamVoiceMemberId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SelfRangeVoiceMemberId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& SelfFriendVoiceMemberId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& AudioChannelModePriorityDict() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& HasShowClickTipForPvp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& HasShowClickTipForBr() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = uintptr_t> T& cacheCSAccountextSetVoiceStateReq() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& cacheVoiceState() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIosVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUploadRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessUploadRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadRecordFileFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadRecordFileError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadRecordFileFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadRecordFileError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishPlayRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRecordMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToVoiceLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsCloseWhenUploading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceChatSendText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceDataByChatText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceChannelText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTranslateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTranslateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MuteBgm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTimeoutTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowConnectingTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHoldToTalkSelectMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToHoldToTalkChannelMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareMicroModePriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareAudioModePriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareVoiceModePriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetVoiceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSetVoiceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetVoiceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPauseComeback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinVoiceRoomFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinVoiceRoomFinishFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceRoomMicrophoneByHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDroppedVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDroppedGameVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = void> T CheckIosVersion() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BDE3C8))(this);
	}
	template <typename T = void> T PlayVoice(Il2CppString* fileId) {
		return ((T (*)(VoiceManager*, Il2CppString*))(Il2CppBase() + 0x1BDE53C))(this, fileId);
	}
	template <typename T = void> T StopPlayVoice(bool backToRealTimeMode) {
		return ((T (*)(VoiceManager*, bool))(Il2CppBase() + 0x1BDED34))(this, backToRealTimeMode);
	}
	template <typename T = void> T AddUploadRecord(uintptr_t data) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BDEFF8))(this, data);
	}
	template <typename T = void> T ProcessUploadRecord() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BDF174))(this);
	}
	template <typename T = void> T OnQuitRoomFinish(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(VoiceManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x1BDF368))(this, roomName, memberId);
	}
	template <typename T = void> T OnUploadRecordFileFinish(Il2CppString* filePath, Il2CppString* fileId) {
		return ((T (*)(VoiceManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BDF564))(this, filePath, fileId);
	}
	template <typename T = void> T OnUploadRecordFileError() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BDFA00))(this);
	}
	template <typename T = void> T OnDownloadRecordFileFinish(Il2CppString* filePath, Il2CppString* fileId) {
		return ((T (*)(VoiceManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BDFBA0))(this, filePath, fileId);
	}
	template <typename T = void> T OnDownloadRecordFileError() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BDFD08))(this);
	}
	template <typename T = void> T OnFinishPlayRecord(Il2CppString* filePath) {
		return ((T (*)(VoiceManager*, Il2CppString*))(Il2CppBase() + 0x1BDFDE8))(this, filePath);
	}
	template <typename T = void> T ClearRecordMap() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE0040))(this);
	}
	template <typename T = uintptr_t> T ConvertToVoiceLanguage(uintptr_t defaultLanguage) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE019C))(this, defaultLanguage);
	}
	template <typename T = void> T CheckIsCloseWhenUploading() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE02F0))(this);
	}
	template <typename T = void> T ShowLoading(bool isShow) {
		return ((T (*)(VoiceManager*, bool))(Il2CppBase() + 0x1BDEB64))(this, isShow);
	}
	template <typename T = Il2CppString*> T GetVoiceChatSendText(uintptr_t data) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE03CC))(this, data);
	}
	template <typename T = bool> T GetVoiceDataByChatText(Il2CppString* text, uintptr_t* voiceData) {
		return ((T (*)(VoiceManager*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1BE054C))(this, text, voiceData);
	}
	template <typename T = Il2CppString*> T GetVoiceChannelText(uintptr_t mode) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE08A8))(this, mode);
	}
	template <typename T = void> T AddTranslateData(uintptr_t message) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE0A4C))(this, message);
	}
	template <typename T = Il2CppString*> T GetTranslateData(Il2CppString* fileId) {
		return ((T (*)(VoiceManager*, Il2CppString*))(Il2CppBase() + 0x1BE0B68))(this, fileId);
	}
	template <typename T = void> T OnTranslateVoice(Il2CppString* fileId, Il2CppString* translateText) {
		return ((T (*)(VoiceManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BE0D80))(this, fileId, translateText);
	}
	template <typename T = void> T MuteBgm(bool isMute) {
		return ((T (*)(VoiceManager*, bool))(Il2CppBase() + 0x1BDE9DC))(this, isMute);
	}
	template <typename T = void> T ShowTimeoutTip() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE13C4))(this);
	}
	template <typename T = void> T ShowConnectingTip() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE1658))(this);
	}
	template <typename T = uintptr_t> T get_CacheMicrophoneSelectMode() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE18EC))(this);
	}
	template <typename T = void> T set_CacheMicrophoneSelectMode(uintptr_t value) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE1B0C))(this, value);
	}
	template <typename T = uintptr_t> T get_CacheAudioSelectMode() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE1B14))(this);
	}
	template <typename T = void> T set_CacheAudioSelectMode(uintptr_t value) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE1C48))(this, value);
	}
	template <typename T = uintptr_t> T get_CurMicrophoneChannelMode() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE1C50))(this);
	}
	template <typename T = void> T set_CurMicrophoneChannelMode(uintptr_t value) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE1DC0))(this, value);
	}
	template <typename T = bool> T IsHoldToTalkSelectMode(uintptr_t mode) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE1A28))(this, mode);
	}
	template <typename T = uintptr_t> T get_CurAudioChannelMode() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE2040))(this);
	}
	template <typename T = void> T set_CurAudioChannelMode(uintptr_t value) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE2170))(this, value);
	}
	template <typename T = uintptr_t> T ConvertToHoldToTalkChannelMode(uintptr_t mode) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE2310))(this, mode);
	}
	template <typename T = int32_t> T CompareMicroModePriority(uintptr_t mode) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE23FC))(this, mode);
	}
	template <typename T = int32_t> T CompareAudioModePriority(uintptr_t mode) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE2640))(this, mode);
	}
	template <typename T = int32_t> T CompareVoiceModePriority(uintptr_t mode, uintptr_t compMode) {
		return ((T (*)(VoiceManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BE24E8))(this, mode, compMode);
	}
	template <typename T = void> T ResetVoiceState() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE272C))(this);
	}
	template <typename T = void> T RequestSetVoiceState(uintptr_t microphoneState, uintptr_t audioState, bool callFromGame) {
		return ((T (*)(VoiceManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1BE283C))(this, microphoneState, audioState, callFromGame);
	}
	template <typename T = void> T RequestGetVoiceState() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE2A64))(this);
	}
	template <typename T = void> T SetVoiceState(uintptr_t voiceState) {
		return ((T (*)(VoiceManager*, uintptr_t))(Il2CppBase() + 0x1BE2BFC))(this, voiceState);
	}
	template <typename T = void> T OnApplicationPauseComeback() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE2ED4))(this);
	}
	template <typename T = void> T OnJoinVoiceRoomFinish(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(VoiceManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x1BE318C))(this, roomName, memberId);
	}
	template <typename T = void> T OnJoinVoiceRoomFinishFailed(Il2CppString* roomName) {
		return ((T (*)(VoiceManager*, Il2CppString*))(Il2CppBase() + 0x1BE3E68))(this, roomName);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE4328))(this);
	}
	template <typename T = void> T SetVoiceRoomMicrophoneByHold(bool isOpen) {
		return ((T (*)(VoiceManager*, bool))(Il2CppBase() + 0x1BE448C))(this, isOpen);
	}
	template <typename T = uintptr_t> T GetSelfVoiceStatus() {
		return ((T (*)(VoiceManager*))(Il2CppBase() + 0x1BE46BC))(this);
	}
	template <typename T = void> T OnDroppedVoiceRoom(Il2CppString* roomName, int32_t memberID) {
		return ((T (*)(VoiceManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x1BE4888))(this, roomName, memberID);
	}
	template <typename T = int32_t> T OnDroppedGameVoiceRoom(Il2CppString* roomName, int32_t memberID) {
		return ((T (*)(VoiceManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x1BE4B5C))(this, roomName, memberID);
	}

};

}
