#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GVoiceSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GVoiceSystem"));
	}

	template <typename T = bool> T& m_EngineInitedFlag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& kUnknownErrCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kDefaultTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& kRangeForLbsRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMaxRecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMinRecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_isMicEnable() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& m_isSpeakerEnable() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& m_isApplyMessageKey() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = uintptr_t> T& m_VoiceEngine() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_VoiceRoomDataMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsNeedOpenMicFromBackground() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_AccumulteDeltaTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& kAccumulteThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tempAry() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> static T& VOICE_CACHE_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExistAllRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDebugLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyMessageKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinTeamRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinLbsRangeRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCoordinateInLbsRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMicroPhoneSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpeakerSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceRoomMicrophoneState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceRoomSpeakerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForbidMemberVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpeakerVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeakerVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMicrophoneVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMicVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRecording() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RSTSStartRecording() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TargetLangTypeArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRSTSParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRecording() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RSTSStopRecording() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadVoiceFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadVoiceFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMicrophoneAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpeechToText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpeechTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinRoomCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoomCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberVoiceStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyMessageKeyCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadRecordFileCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadRecordFileCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpeechTranslateCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpeechToTextCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRSTSCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecordPlayFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStatusUpdateHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableMic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableMic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSpeaker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableSpeaker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceRoomMicrophone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceRoomSpeaker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuitRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOfflineRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoomPlayerMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomMemberVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomMemberVoiceStatusByMemberId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneSpeakingPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceSystemRoomData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomMemberIdByPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintAllVoiceData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfIamSpeaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceCacheDirectory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceCacheFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearVoiceFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdatemVoiceRoomDataMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugTraceback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}

	template <typename T = int32_t> T get_MaxRecordTime() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED9238))(this);
	}
	template <typename T = int32_t> T get_MinRecordTime() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED9240))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultGVoiceURL() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED9248))(this);
	}
	template <typename T = bool> T get_IsMicEnable() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED924C))(this);
	}
	template <typename T = bool> T get_IsSpeakerEnable() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED9254))(this);
	}
	template <typename T = bool> T get_IsApplyMessageKey() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED925C))(this);
	}
	template <typename T = bool> T Init() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED9264))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDA604))(this);
	}
	template <typename T = void> T ExistAllRoom() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1E989E8))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1ED9C8C))(this);
	}
	template <typename T = void> T ShowLoading(bool show) {
		return ((T (*)(GVoiceSystem*, bool))(Il2CppBase() + 0x1EDAB9C))(this, show);
	}
	template <typename T = void> T InitSomething() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDA490))(this);
	}
	template <typename T = void> T InitDebugLog() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDAD34))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GVoiceSystem*, float))(Il2CppBase() + 0x1EDB068))(this, deltaTime);
	}
	template <typename T = void> T OnApplicationPause(bool isPause) {
		return ((T (*)(GVoiceSystem*, bool))(Il2CppBase() + 0x1EDB15C))(this, isPause);
	}
	template <typename T = bool> T ApplyMessageKey(int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, int32_t))(Il2CppBase() + 0x1EDAE64))(this, msTimeout);
	}
	template <typename T = bool> T JoinTeamRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t))(Il2CppBase() + 0x1E97090))(this, roomName, msTimeout);
	}
	template <typename T = bool> T JoinLbsRangeRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDB35C))(this, roomName, msTimeout);
	}
	template <typename T = void> T UpdateCoordinateInLbsRoom(Il2CppString* roomName, int32_t x, int32_t y, int32_t z, int64_t r) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1EDB684))(this, roomName, x, y, z, r);
	}
	template <typename T = void> T SetMicroPhoneSwitch(bool bOpen) {
		return ((T (*)(GVoiceSystem*, bool))(Il2CppBase() + 0x1EDB988))(this, bOpen);
	}
	template <typename T = void> T SetSpeakerSwitch(bool bOpen) {
		return ((T (*)(GVoiceSystem*, bool))(Il2CppBase() + 0x1EDBE24))(this, bOpen);
	}
	template <typename T = bool> T GetVoiceRoomMicrophoneState(Il2CppString* roomName, bool isHoldingMode) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, bool))(Il2CppBase() + 0x1EDC148))(this, roomName, isHoldingMode);
	}
	template <typename T = bool> T GetVoiceRoomSpeakerState(Il2CppString* roomName) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EDC38C))(this, roomName);
	}
	template <typename T = bool> T ForbidMemberVoice(Il2CppString* roomName, uint64_t playerID, bool isForbid) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, uint64_t, bool))(Il2CppBase() + 0x1EDC57C))(this, roomName, playerID, isForbid);
	}
	template <typename T = bool> T SetSpeakerVolume(float volume) {
		return ((T (*)(GVoiceSystem*, float))(Il2CppBase() + 0x1EDCA10))(this, volume);
	}
	template <typename T = int32_t> T GetSpeakerVolume() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDCAFC))(this);
	}
	template <typename T = bool> T SetMicrophoneVolume(float volume) {
		return ((T (*)(GVoiceSystem*, float))(Il2CppBase() + 0x1EDCBC4))(this, volume);
	}
	template <typename T = int32_t> T GetMicVolume() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDCCB0))(this);
	}
	template <typename T = bool> T StartRecording(Il2CppString* filePath) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EDCD78))(this, filePath);
	}
	template <typename T = bool> T RSTSStartRecording(Il2CppString* filePath, int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDCF6C))(this, filePath, msTimeout);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T TargetLangTypeArray(uintptr_t langType) {
		return ((T (*)(GVoiceSystem*, uintptr_t))(Il2CppBase() + 0x1EDD20C))(this, langType);
	}
	template <typename T = uintptr_t> T SetRSTSParams() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDD314))(this);
	}
	template <typename T = bool> T StopRecording() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDD3B4))(this);
	}
	template <typename T = bool> T RSTSStopRecording() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDD59C))(this);
	}
	template <typename T = bool> T UploadVoiceFile(Il2CppString* filePath, int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDD784))(this, filePath, msTimeout);
	}
	template <typename T = bool> T DownloadVoiceFile(Il2CppString* fileId, Il2CppString* filePath, int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDD968))(this, fileId, filePath, msTimeout);
	}
	template <typename T = bool> T PlayRecord(Il2CppString* filePath) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EDDB5C))(this, filePath);
	}
	template <typename T = bool> T StopPlayRecord(bool backToRealTimeMode) {
		return ((T (*)(GVoiceSystem*, bool))(Il2CppBase() + 0x1EDDD28))(this, backToRealTimeMode);
	}
	template <typename T = bool> T IsMicrophoneAvailable() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDDE68))(this);
	}
	template <typename T = bool> T SpeechToText(Il2CppString* fileId, int32_t language, int32_t mstimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1EDDF40))(this, fileId, language, mstimeout);
	}
	template <typename T = bool> T SpeechTranslate(Il2CppString* fileID, int32_t msTimeout) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDE160))(this, fileID, msTimeout);
	}
	template <typename T = void> T OnJoinRoomCallback(uintptr_t code, Il2CppString* roomName, int32_t memberID) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDE36C))(this, code, roomName, memberID);
	}
	template <typename T = void> T OnQuitRoomCallback(uintptr_t code, Il2CppString* roomName, int32_t memberID) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDE94C))(this, code, roomName, memberID);
	}
	template <typename T = void> T OnRoomMemberVoiceStateChanged(Il2CppString* roomName, int32_t memberId, int32_t status) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1EDED0C))(this, roomName, memberId, status);
	}
	template <typename T = void> T OnApplyMessageKeyCallback(uintptr_t code) {
		return ((T (*)(GVoiceSystem*, uintptr_t))(Il2CppBase() + 0x1EDEF80))(this, code);
	}
	template <typename T = void> T OnUploadRecordFileCallback(uintptr_t code, Il2CppString* filepath, Il2CppString* fileid) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EDF25C))(this, code, filepath, fileid);
	}
	template <typename T = void> T OnDownloadRecordFileCallback(uintptr_t code, Il2CppString* filepath, Il2CppString* fileid) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EDF4B8))(this, code, filepath, fileid);
	}
	template <typename T = void> T OnSpeechTranslateCallback(uintptr_t code, Il2CppString* srcText, Il2CppString* targetText, Il2CppString* targetFileID, int32_t srcFileDuration) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDF714))(this, code, srcText, targetText, targetFileID, srcFileDuration);
	}
	template <typename T = void> T OnSpeechToTextCallback(uintptr_t code, Il2CppString* fileID, Il2CppString* result) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1EDFB14))(this, code, fileID, result);
	}
	template <typename T = void> T OnRSTSCallback(uintptr_t code, uintptr_t srcLang, uintptr_t targetLang, Il2CppString* srcText, Il2CppString* targetText, Il2CppString* targetFileID, int32_t srcFileDuration) {
		return ((T (*)(GVoiceSystem*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EDFD68))(this, code, srcLang, targetLang, srcText, targetText, targetFileID, srcFileDuration);
	}
	template <typename T = void> T OnRecordPlayFinish(uintptr_t code, Il2CppString* filepath) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1EE027C))(this, code, filepath);
	}
	template <typename T = void> T OnStatusUpdateHandler(uintptr_t code, Il2CppString* roomName, int32_t memberID) {
		return ((T (*)(GVoiceSystem*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1EE042C))(this, code, roomName, memberID);
	}
	template <typename T = void> T EnableMic() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDBA5C))(this);
	}
	template <typename T = void> T DisableMic() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDBC5C))(this);
	}
	template <typename T = void> T EnableSpeaker() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDBEF8))(this);
	}
	template <typename T = void> T DisableSpeaker() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDC050))(this);
	}
	template <typename T = void> T SetVoiceRoomMicrophone(Il2CppString* roomName, bool enable) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, bool))(Il2CppBase() + 0x1EE05FC))(this, roomName, enable);
	}
	template <typename T = void> T SetVoiceURL(Il2CppString* Url, bool needCache) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, bool))(Il2CppBase() + 0x1E96D58))(this, Url, needCache);
	}
	template <typename T = void> T SetVoiceRoomSpeaker(Il2CppString* roomName, bool enable) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, bool))(Il2CppBase() + 0x1EE0800))(this, roomName, enable);
	}
	template <typename T = void> T QuitRoom(Il2CppString* roomName, uintptr_t roomMode) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EDA900))(this, roomName, roomMode);
	}
	template <typename T = void> T RemoveOfflineRoom(Il2CppString* roomName) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EDEB74))(this, roomName);
	}
	template <typename T = bool> T IsInVoiceRoom(Il2CppString* roomName) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EDB860))(this, roomName);
	}
	template <typename T = bool> T UpdateRoomPlayerMap(Il2CppString* roomName, uint64_t playerId, int32_t memberId) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, uint64_t, int32_t))(Il2CppBase() + 0x1EA6154))(this, roomName, playerId, memberId);
	}
	template <typename T = uintptr_t> T GetRoomMemberVoiceStatus(Il2CppString* roomName, uint64_t playerId) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, uint64_t))(Il2CppBase() + 0x1EE0A04))(this, roomName, playerId);
	}
	template <typename T = uintptr_t> T GetRoomMemberVoiceStatusByMemberId(Il2CppString* roomName, int32_t memId) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, int32_t))(Il2CppBase() + 0x1EE0C64))(this, roomName, memId);
	}
	template <typename T = uint64_t> T GetOneSpeakingPlayerID(Il2CppString* roomName) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EE0ED0))(this, roomName);
	}
	template <typename T = uintptr_t> T GetVoiceSystemRoomData(Il2CppString* roomName) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1E9877C))(this, roomName);
	}
	template <typename T = int32_t> T GetRoomMemberIdByPlayerId(Il2CppString* roomName, uint64_t playerId) {
		return ((T (*)(GVoiceSystem*, Il2CppString*, uint64_t))(Il2CppBase() + 0x1EE11E8))(this, roomName, playerId);
	}
	template <typename T = void> T PrintAllVoiceData() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EE1438))(this);
	}
	template <typename T = bool> T IfIamSpeaking() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EE1D2C))(this);
	}
	template <typename T = Il2CppString*> T GetVoiceCacheDirectory() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EE1E90))(this);
	}
	template <typename T = Il2CppString*> T GetVoiceCacheFilePath(Il2CppString* fileName) {
		return ((T (*)(GVoiceSystem*, Il2CppString*))(Il2CppBase() + 0x1EE1FE8))(this, fileName);
	}
	template <typename T = void> T ClearVoiceFile() {
		return ((T (*)(GVoiceSystem*))(Il2CppBase() + 0x1EDA21C))(this);
	}
	template <typename T = void> T OnUpdatemVoiceRoomDataMap(uintptr_t data) {
		return ((T (*)(GVoiceSystem*, uintptr_t))(Il2CppBase() + 0x1EDE808))(this, data);
	}
	template <typename T = void> static T DebugTraceback(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EE217C))(0, message);
	}
	template <typename T = bool> static T GetOneSpeakingPlayerIDm__0(void* i) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1EE2374))(0, i);
	}

};

}
