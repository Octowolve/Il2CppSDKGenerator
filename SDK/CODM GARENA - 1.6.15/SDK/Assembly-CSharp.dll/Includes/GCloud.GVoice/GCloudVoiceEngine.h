#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.GVoice {

class GCloudVoiceEngine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.GVoice", "GCloudVoiceEngine"));
	}

	template <typename T = Il2CppString*> static T& LibName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OnJoinRoomCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OnQuitRoomCompleteEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OnMemberVoiceEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnApplyMessageKeyCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OnUploadReccordFileCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OnDownloadRecordFileCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OnPlayRecordFilCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnSpeechToTextEvent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& OnStreamSpeechToTextEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnStatusUpdateEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& OnRoleChangeCompleteEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnRoomMemberVoiceEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& OnEventUpdateEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnSaveRecFileIndexEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& OnMuteSwitchState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnReportPlayer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& OnRoomMemberInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnSpeechTranslate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& OnRSTS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& OnEnableTranslate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> static T& bInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& bIsSetAppInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& bPrintLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = int32_t> T& pollBufLen() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pollBuf() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& pollMsg() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& memberVoice() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& roomNameBuf() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& membersBufLen() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& membersBuf() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T add_OnJoinRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4537224))(this, value);
	}
	template <typename T = void> T remove_OnJoinRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x45373D8))(this, value);
	}
	template <typename T = void> T add_OnQuitRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453758C))(this, value);
	}
	template <typename T = void> T remove_OnQuitRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4537740))(this, value);
	}
	template <typename T = void> T add_OnMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x45378F4))(this, value);
	}
	template <typename T = void> T remove_OnMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4537AA8))(this, value);
	}
	template <typename T = void> T add_OnApplyMessageKeyCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4537C5C))(this, value);
	}
	template <typename T = void> T remove_OnApplyMessageKeyCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4537E10))(this, value);
	}
	template <typename T = void> T add_OnUploadReccordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4537FC4))(this, value);
	}
	template <typename T = void> T remove_OnUploadReccordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4538178))(this, value);
	}
	template <typename T = void> T add_OnDownloadRecordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453832C))(this, value);
	}
	template <typename T = void> T remove_OnDownloadRecordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x45384E0))(this, value);
	}
	template <typename T = void> T add_OnPlayRecordFilCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4538694))(this, value);
	}
	template <typename T = void> T remove_OnPlayRecordFilCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4538848))(this, value);
	}
	template <typename T = void> T add_OnSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x45389FC))(this, value);
	}
	template <typename T = void> T remove_OnSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4538BB0))(this, value);
	}
	template <typename T = void> T add_OnStreamSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4538D64))(this, value);
	}
	template <typename T = void> T remove_OnStreamSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4538F18))(this, value);
	}
	template <typename T = void> T add_OnStatusUpdateEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x45390CC))(this, value);
	}
	template <typename T = void> T remove_OnStatusUpdateEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4539280))(this, value);
	}
	template <typename T = void> T add_OnRoleChangeCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4539434))(this, value);
	}
	template <typename T = void> T remove_OnRoleChangeCompleteEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x45395E8))(this, value);
	}
	template <typename T = void> T add_OnRoomMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453979C))(this, value);
	}
	template <typename T = void> T remove_OnRoomMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4539950))(this, value);
	}
	template <typename T = void> T add_OnEventUpdateEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4539B04))(this, value);
	}
	template <typename T = void> T remove_OnEventUpdateEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4539CB8))(this, value);
	}
	template <typename T = void> T add_OnSaveRecFileIndexEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4539E6C))(this, value);
	}
	template <typename T = void> T remove_OnSaveRecFileIndexEvent(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453A020))(this, value);
	}
	template <typename T = void> T add_OnMuteSwitchState(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453A1D4))(this, value);
	}
	template <typename T = void> T remove_OnMuteSwitchState(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453A388))(this, value);
	}
	template <typename T = void> T add_OnReportPlayer(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453A53C))(this, value);
	}
	template <typename T = void> T remove_OnReportPlayer(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453A6F0))(this, value);
	}
	template <typename T = void> T add_OnRoomMemberInfo(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453A8A4))(this, value);
	}
	template <typename T = void> T remove_OnRoomMemberInfo(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453AA58))(this, value);
	}
	template <typename T = void> T add_OnSpeechTranslate(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453AC0C))(this, value);
	}
	template <typename T = void> T remove_OnSpeechTranslate(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453ADC0))(this, value);
	}
	template <typename T = void> T add_OnRSTS(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453AF74))(this, value);
	}
	template <typename T = void> T remove_OnRSTS(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453B128))(this, value);
	}
	template <typename T = void> T add_OnEnableTranslate(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453B2DC))(this, value);
	}
	template <typename T = void> T remove_OnEnableTranslate(uintptr_t value) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x453B490))(this, value);
	}
	template <typename T = int32_t> static T GVoice_CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4537044))(0);
	}
	template <typename T = int32_t> static T GVoice_SetServerInfo(Il2CppString* URL) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x453B644))(0, URL);
	}
	template <typename T = int32_t> static T GVoice_SetAppInfo(Il2CppString* appID, Il2CppString* appKey, Il2CppString* openID) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x453B74C))(0, appID, appKey, openID);
	}
	template <typename T = int32_t> static T GVoice_Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x453B890))(0);
	}
	template <typename T = int32_t> static T GVoice_SetMode(int32_t mode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453B960))(0, mode);
	}
	template <typename T = int32_t> static T GVoice_Poll(Il2CppArray<uintptr_t>* buf, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x453BA40))(0, buf, length);
	}
	template <typename T = int32_t> static T GVoice_Pause() {
		return ((T (*)(void *))(Il2CppBase() + 0x453BB30))(0);
	}
	template <typename T = int32_t> static T GVoice_Resume() {
		return ((T (*)(void *))(Il2CppBase() + 0x453BC00))(0);
	}
	template <typename T = int32_t> static T GVoice_JoinTeamRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x453BCD0))(0, roomName, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_QueryRoomName(Il2CppArray<uintptr_t>* buf, int32_t length, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x453BDE0))(0, buf, length, index);
	}
	template <typename T = int32_t> static T GVoice_JoinRangeRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x453BED8))(0, roomName, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_JoinNationalRoom(Il2CppString* roomName, int32_t role, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x453BFE8))(0, roomName, role, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_ChangeRole(int32_t role, Il2CppString* roomName) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x453C100))(0, role, roomName);
	}
	template <typename T = int32_t> static T GVoice_JoinFMRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x453C214))(0, roomName, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_QuitRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x453C324))(0, roomName, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_OpenMic() {
		return ((T (*)(void *))(Il2CppBase() + 0x453C434))(0);
	}
	template <typename T = int32_t> static T GVoice_CloseMic() {
		return ((T (*)(void *))(Il2CppBase() + 0x453C504))(0);
	}
	template <typename T = int32_t> static T GVoice_OpenSpeaker() {
		return ((T (*)(void *))(Il2CppBase() + 0x453C5D4))(0);
	}
	template <typename T = int32_t> static T GVoice_CloseSpeaker() {
		return ((T (*)(void *))(Il2CppBase() + 0x453C6A4))(0);
	}
	template <typename T = int32_t> static T GVoice_EnableRoomMicrophone(Il2CppString* roomName, bool enable) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x453C774))(0, roomName, enable);
	}
	template <typename T = int32_t> static T GVoice_EnableRoomSpeaker(Il2CppString* roomName, bool enable) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x453C884))(0, roomName, enable);
	}
	template <typename T = int32_t> static T GVoice_EnableMultiRoom(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453C994))(0, enable);
	}
	template <typename T = int32_t> static T GVoice_UpdateCoordinate(Il2CppString* roomName, int64_t x, int64_t y, int64_t z, int64_t r) {
		return ((T (*)(void *, Il2CppString*, int64_t, int64_t, int64_t, int64_t))(Il2CppBase() + 0x453CA74))(0, roomName, x, y, z, r);
	}
	template <typename T = int32_t> static T GVoice_ApplyMessageKey(int32_t msTimeout) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453CBBC))(0, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_SetMaxMessageLength(int32_t msTimeout) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453CC9C))(0, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_StartRecording(Il2CppString* filePath, bool bOptimized) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x453CD7C))(0, filePath, bOptimized);
	}
	template <typename T = int32_t> static T GVoice_StopRecording() {
		return ((T (*)(void *))(Il2CppBase() + 0x453CE8C))(0);
	}
	template <typename T = int32_t> static T GVoice_UploadRecordedFile(Il2CppString* filePath, int32_t msTimeout, bool bPermanent) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x453CF5C))(0, filePath, msTimeout, bPermanent);
	}
	template <typename T = int32_t> static T GVoice_DownloadRecordedFile(Il2CppString* fileID, Il2CppString* downloadFilePath, int32_t msTimeout, bool bPermanent) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x453D074))(0, fileID, downloadFilePath, msTimeout, bPermanent);
	}
	template <typename T = int32_t> static T GVoice_PlayRecordedFile(Il2CppString* downloadFilePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x453D1AC))(0, downloadFilePath);
	}
	template <typename T = int32_t> static T GVoice_StopPlayFile() {
		return ((T (*)(void *))(Il2CppBase() + 0x453D2B4))(0);
	}
	template <typename T = int32_t> static T GVoice_SpeechToText(Il2CppString* fileID, int32_t language, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x453D384))(0, fileID, language, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_ForbidMemberVoice(int32_t member, bool bEnable, Il2CppString* roomName) {
		return ((T (*)(void *, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x453D49C))(0, member, bEnable, roomName);
	}
	template <typename T = int32_t> static T GVoice_EnableLog(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453D5B8))(0, enable);
	}
	template <typename T = int32_t> static T GVoice_SetDataFree(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453D698))(0, enable);
	}
	template <typename T = int32_t> static T GVoice_GetMicLevel(bool bFadeout) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453D778))(0, bFadeout);
	}
	template <typename T = int32_t> static T GVoice_GetSpeakerLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x453D858))(0);
	}
	template <typename T = int32_t> static T GVoice_SetSpeakerVolume(int32_t vol) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453D928))(0, vol);
	}
	template <typename T = int32_t> static T GVoice_TestMic() {
		return ((T (*)(void *))(Il2CppBase() + 0x453DA08))(0);
	}
	template <typename T = int32_t> static T GVoice_GetFileParam(Il2CppString* filepath, Il2CppArray<uintptr_t>* bytes, Il2CppArray<uintptr_t>* seconds) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x453DAD8))(0, filepath, bytes, seconds);
	}
	template <typename T = int32_t> static T GVoice_invoke(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2, Il2CppArray<uintptr_t>* pOutput) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x453DC04))(0, nCmd, nParam1, nParam2, pOutput);
	}
	template <typename T = int32_t> static T GVoice_JoinNationalRoom_Token(Il2CppString* roomName, int32_t role, Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x453DD00))(0, roomName, role, token, timestamp, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_JoinTeamRoom_Token(Il2CppString* roomName, Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x453DE40))(0, roomName, token, timestamp, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_ApplyMessageKey_Token(Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x453DF78))(0, token, timestamp, msTimeout);
	}
	template <typename T = int32_t> static T GVoice_SpeechToText_Token(Il2CppString* fileID, Il2CppString* token, int32_t timestamp, int32_t msTimeout, int32_t language) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x453E090))(0, fileID, token, timestamp, msTimeout, language);
	}
	template <typename T = int32_t> static T GVoice_EnableSpeakerOn(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453E1D0))(0, enable);
	}
	template <typename T = int32_t> static T GVoice_SetMicVol(int32_t vol) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453E2B0))(0, vol);
	}
	template <typename T = int32_t> static T GVoice_SetAudience(Il2CppArray<uintptr_t>* audience, int32_t count, Il2CppString* path) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0x453E390))(0, audience, count, path);
	}
	template <typename T = int32_t> static T GVoice_GetMicState() {
		return ((T (*)(void *))(Il2CppBase() + 0x453E4B4))(0);
	}
	template <typename T = int32_t> static T GVoice_GetSpeakerState() {
		return ((T (*)(void *))(Il2CppBase() + 0x453E584))(0);
	}
	template <typename T = int32_t> static T GVoice_CaptureMicrophoneData(bool bCapture) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453E654))(0, bCapture);
	}
	template <typename T = int32_t> static T GVoice_EnableBluetoothSCO(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453E734))(0, enable);
	}
	template <typename T = int32_t> static T GVoice_CheckDeviceMuteState() {
		return ((T (*)(void *))(Il2CppBase() + 0x453E814))(0);
	}
	template <typename T = uintptr_t> static T GVoice_GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x453E8E4))(0);
	}
	template <typename T = int32_t> static T GVoice_SetVoiceEffects(int32_t mode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453E9B4))(0, mode);
	}
	template <typename T = int32_t> static T GVoice_IsSpeaking() {
		return ((T (*)(void *))(Il2CppBase() + 0x453EA94))(0);
	}
	template <typename T = int32_t> static T GVoice_EnableReverb(bool bEnable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453EB64))(0, bEnable);
	}
	template <typename T = int32_t> static T GVoice_SetReverbMode(int32_t mode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453EC44))(0, mode);
	}
	template <typename T = int32_t> static T GVoice_GetVoiceIdentify() {
		return ((T (*)(void *))(Il2CppBase() + 0x453ED24))(0);
	}
	template <typename T = int32_t> static T GVoice_SetBGMPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x453EDF4))(0, path);
	}
	template <typename T = int32_t> static T GVoice_StartBGMPlay() {
		return ((T (*)(void *))(Il2CppBase() + 0x453EEFC))(0);
	}
	template <typename T = int32_t> static T GVoice_StopBGMPlay() {
		return ((T (*)(void *))(Il2CppBase() + 0x453EFCC))(0);
	}
	template <typename T = int32_t> static T GVoice_PauseBGMPlay() {
		return ((T (*)(void *))(Il2CppBase() + 0x453F09C))(0);
	}
	template <typename T = int32_t> static T GVoice_ResumeBGMPlay() {
		return ((T (*)(void *))(Il2CppBase() + 0x453F16C))(0);
	}
	template <typename T = int32_t> static T GVoice_GetBGMPlayState() {
		return ((T (*)(void *))(Il2CppBase() + 0x453F23C))(0);
	}
	template <typename T = int32_t> static T GVoice_SetBGMVol(int32_t vol) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453F30C))(0, vol);
	}
	template <typename T = int32_t> static T GVoice_EnableNativeBGMPlay(bool bEnable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x453F3EC))(0, bEnable);
	}
	template <typename T = int32_t> static T GVoice_SetBitRate(int32_t bitrate) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453F4CC))(0, bitrate);
	}
	template <typename T = int32_t> static T GVoice_GetHwState() {
		return ((T (*)(void *))(Il2CppBase() + 0x453F5AC))(0);
	}
	template <typename T = int32_t> static T GVoice_GetAudioDeviceConnectionState() {
		return ((T (*)(void *))(Il2CppBase() + 0x453F67C))(0);
	}
	template <typename T = int32_t> static T GVoice_GetMuteResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x453F74C))(0);
	}
	template <typename T = int32_t> static T GVoice_SetReportBufferTime(int32_t nTimeSec) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453F81C))(0, nTimeSec);
	}
	template <typename T = int32_t> static T GVoice_SetReportedPlayerInfo(Il2CppArray<uintptr_t>* cszOpenID, Il2CppArray<uintptr_t>* nMemberID, int32_t nCount) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x453F8FC))(0, cszOpenID, nMemberID, nCount);
	}
	template <typename T = int32_t> static T GVoice_ReportPlayer(Il2CppArray<uintptr_t>* cszOpenID, int32_t nCount, Il2CppString* strInfo) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0x453FAA4))(0, cszOpenID, nCount, strInfo);
	}
	template <typename T = int32_t> static T GVoice_StartSaveVoice() {
		return ((T (*)(void *))(Il2CppBase() + 0x453FC4C))(0);
	}
	template <typename T = int32_t> static T GVoice_StopSaveVoice() {
		return ((T (*)(void *))(Il2CppBase() + 0x453FD1C))(0);
	}
	template <typename T = int32_t> static T GVoice_SetRecSaveTs(int32_t ts) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453FDEC))(0, ts);
	}
	template <typename T = int32_t> static T GVoice_SetPlayFileIndex(Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x453FECC))(0, fileid, fileindex);
	}
	template <typename T = int32_t> static T GVoice_StartPlaySaveVoiceTs(int32_t ts) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x453FFDC))(0, ts);
	}
	template <typename T = int32_t> static T GVoice_StopPlaySaveVoice() {
		return ((T (*)(void *))(Il2CppBase() + 0x45400BC))(0);
	}
	template <typename T = int32_t> static T GVoice_DelAllSaveVoiceFile(Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x454018C))(0, fileid, fileindex);
	}
	template <typename T = int32_t> static T GVoice_GetRoomMembers(Il2CppString* roomName, Il2CppArray<uintptr_t>* buf, int32_t len) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x454029C))(0, roomName, buf, len);
	}
	template <typename T = int32_t> static T GVoice_EnableCivilVoice(bool bEnable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x45403BC))(0, bEnable);
	}
	template <typename T = int32_t> static T GVoice_SpeechTranslate(Il2CppString* fileID, int32_t srcLang, int32_t targetLang, int32_t transType, int32_t nTimeoutMS) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x454049C))(0, fileID, srcLang, targetLang, transType, nTimeoutMS);
	}
	template <typename T = int32_t> static T GVoice_EnableTranslate(Il2CppString* roomName, bool enable, int32_t myLang) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x45405C4))(0, roomName, enable, myLang);
	}
	template <typename T = int32_t> static T GVoice_RSTSStartRecording(int32_t srcLang, Il2CppArray<uintptr_t>* pTargetLangs, int32_t nTargetLangCnt, int32_t transType, int32_t nTimeoutMS) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x45406DC))(0, srcLang, pTargetLangs, nTargetLangCnt, transType, nTimeoutMS);
	}
	template <typename T = int32_t> static T GVoice_RSTSStopRecording() {
		return ((T (*)(void *))(Il2CppBase() + 0x45407E0))(0);
	}
	template <typename T = int32_t> static T GVoice_SetCivilBinPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45408B0))(0, path);
	}
	template <typename T = int32_t> static T GVoice_SetPlayerVolume(Il2CppString* playerid, uint32_t nVol) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x45409B8))(0, playerid, nVol);
	}
	template <typename T = int32_t> static T GVoice_GetPlayerVolume(Il2CppString* playerid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4540AC8))(0, playerid);
	}
	template <typename T = int32_t> static T GVoice_EnableKeyWordsDetect(bool bEnable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4540BD0))(0, bEnable);
	}
	template <typename T = void> static T PrintLog(uintptr_t logMsg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4536F94))(0, logMsg);
	}
	template <typename T = uintptr_t> T SetAppInfo(Il2CppString* appID, Il2CppString* appKey, Il2CppString* openID) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4540CB0))(this, appID, appKey, openID);
	}
	template <typename T = uintptr_t> T SetServerInfo(Il2CppString* URL) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x4540DC8))(this, URL);
	}
	template <typename T = uintptr_t> T Init() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4540E68))(this);
	}
	template <typename T = uintptr_t> T SetMode(uintptr_t nMode) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4541078))(this, nMode);
	}
	template <typename T = uintptr_t> T NoticeMessage_ParseFrom(Il2CppArray<uintptr_t>* buf, int32_t buflen) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4541174))(this, buf, buflen);
	}
	template <typename T = uintptr_t> T Poll() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45414D0))(this);
	}
	template <typename T = uintptr_t> T Pause() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45434A0))(this);
	}
	template <typename T = uintptr_t> T Resume() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x454362C))(this);
	}
	template <typename T = uintptr_t> T JoinTeamRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x45437B8))(this, roomName, msTimeout);
	}
	template <typename T = uintptr_t> T JoinRangeRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x4543954))(this, roomName, msTimeout);
	}
	template <typename T = uintptr_t> T JoinTeamRoom_1(Il2CppString* roomName, Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4543AF0))(this, roomName, token, timestamp, msTimeout);
	}
	template <typename T = uintptr_t> T JoinNationalRoom(Il2CppString* roomName, uintptr_t role, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x4543CFC))(this, roomName, role, msTimeout);
	}
	template <typename T = uintptr_t> T ChangeRole(uintptr_t role, Il2CppString* roomName) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4543EA0))(this, role, roomName);
	}
	template <typename T = uintptr_t> T JoinFMRoom(Il2CppString* roomID, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x454403C))(this, roomID, msTimeout);
	}
	template <typename T = int32_t> T SetAudience(Il2CppArray<uintptr_t>* audience, Il2CppString* roomName) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x454410C))(this, audience, roomName);
	}
	template <typename T = uintptr_t> T JoinNationalRoom_1(Il2CppString* roomName, Il2CppString* token, int32_t timestamp, uintptr_t role, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4544268))(this, roomName, token, timestamp, role, msTimeout);
	}
	template <typename T = uintptr_t> T QuitRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x4544418))(this, roomName, msTimeout);
	}
	template <typename T = uintptr_t> T OpenMic() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45445B4))(this);
	}
	template <typename T = uintptr_t> T CloseMic() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4544740))(this);
	}
	template <typename T = uintptr_t> T OpenSpeaker() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45448CC))(this);
	}
	template <typename T = uintptr_t> T CloseSpeaker() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4544A58))(this);
	}
	template <typename T = uintptr_t> T EnableRoomMicrophone(Il2CppString* roomName, bool enable) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, bool))(Il2CppBase() + 0x4544BE4))(this, roomName, enable);
	}
	template <typename T = uintptr_t> T EnableRoomSpeaker(Il2CppString* roomName, bool enable) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, bool))(Il2CppBase() + 0x4544D80))(this, roomName, enable);
	}
	template <typename T = uintptr_t> T EnableMultiRoom(bool enable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4544F1C))(this, enable);
	}
	template <typename T = uintptr_t> T UpdateCoordinate(Il2CppString* roomName, int64_t x, int64_t y, int64_t z, int64_t r) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int64_t, int64_t, int64_t, int64_t))(Il2CppBase() + 0x45450B0))(this, roomName, x, y, z, r);
	}
	template <typename T = uintptr_t> T ApplyMessageKey(int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x454528C))(this, msTimeout);
	}
	template <typename T = uintptr_t> T ApplyMessageKey_1(Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4545420))(this, token, timestamp, msTimeout);
	}
	template <typename T = uintptr_t> T SetMaxMessageLength(int32_t msTime) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x45455C4))(this, msTime);
	}
	template <typename T = uintptr_t> T StartRecording(Il2CppString* filePath) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x4545758))(this, filePath);
	}
	template <typename T = uintptr_t> T StopRecording() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45458F0))(this);
	}
	template <typename T = uintptr_t> T UploadRecordedFile(Il2CppString* filePath, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x4545A7C))(this, filePath, msTimeout);
	}
	template <typename T = uintptr_t> T DownloadRecordedFile(Il2CppString* fileID, Il2CppString* downloadFilePath, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x4545C1C))(this, fileID, downloadFilePath, msTimeout);
	}
	template <typename T = uintptr_t> T UploadRecordedFile_1(Il2CppString* filePath, int32_t msTimeout, bool bPermanent) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4545DC8))(this, filePath, msTimeout, bPermanent);
	}
	template <typename T = uintptr_t> T DownloadRecordedFile_1(Il2CppString* fileID, Il2CppString* downloadFilePath, int32_t msTimeout, bool bPermanent) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4545F6C))(this, fileID, downloadFilePath, msTimeout, bPermanent);
	}
	template <typename T = uintptr_t> T PlayRecordedFile(Il2CppString* downloadFilePath) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x4546118))(this, downloadFilePath);
	}
	template <typename T = uintptr_t> T StopPlayFile() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45462AC))(this);
	}
	template <typename T = uintptr_t> T SpeechToText(Il2CppString* fileID, uintptr_t language, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x4546438))(this, fileID, language, msTimeout);
	}
	template <typename T = uintptr_t> T SpeechToText_1(Il2CppString* fileID, Il2CppString* token, int32_t timestamp, int32_t language, int32_t msTimeout) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x45465DC))(this, fileID, token, timestamp, language, msTimeout);
	}
	template <typename T = uintptr_t> T ForbidMemberVoice(int32_t member, bool bEnable, Il2CppString* roomName) {
		return ((T (*)(GCloudVoiceEngine*, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x454678C))(this, member, bEnable, roomName);
	}
	template <typename T = uintptr_t> T EnableLog(bool enable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4546930))(this, enable);
	}
	template <typename T = uintptr_t> T SetDataFree(bool enable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4546AD4))(this, enable);
	}
	template <typename T = int32_t> T GetMicLevel() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4546C68))(this);
	}
	template <typename T = int32_t> T GetMicLevel_1(bool bFadeOut) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4546DB4))(this, bFadeOut);
	}
	template <typename T = int32_t> T GetSpeakerLevel() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4546F04))(this);
	}
	template <typename T = int32_t> T GetMicState() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x454704C))(this);
	}
	template <typename T = int32_t> T GetSpeakerState() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4547180))(this);
	}
	template <typename T = int32_t> T CaptureMicrophoneData(bool bCapture) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x45472B4))(this, bCapture);
	}
	template <typename T = uintptr_t> T SetSpeakerVolume(int32_t vol) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x45473BC))(this, vol);
	}
	template <typename T = uintptr_t> T TestMic() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4547550))(this);
	}
	template <typename T = uintptr_t> T GetFileParam(Il2CppString* filepath, Il2CppArray<uintptr_t>* bytes, Il2CppArray<uintptr_t>* seconds) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45476DC))(this, filepath, bytes, seconds);
	}
	template <typename T = int32_t> T invoke(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2, Il2CppArray<uintptr_t>* pOutput) {
		return ((T (*)(GCloudVoiceEngine*, uint32_t, uint32_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45477E0))(this, nCmd, nParam1, nParam2, pOutput);
	}
	template <typename T = uintptr_t> T EnableSpeakerOn(bool bEnable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4547948))(this, bEnable);
	}
	template <typename T = uintptr_t> T SetMicVolume(int32_t vol) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x4547ADC))(this, vol);
	}
	template <typename T = uintptr_t> T SetVoiceEffects(uintptr_t mode) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x4547C70))(this, mode);
	}
	template <typename T = int32_t> T IsSpeaking() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4547E04))(this);
	}
	template <typename T = void> T EnableBluetoothSCO(bool enable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4547EE4))(this, enable);
	}
	template <typename T = uintptr_t> T EnableReverb(bool bEnable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4547F84))(this, bEnable);
	}
	template <typename T = uintptr_t> T GetExtensionPluginContext() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4548118))(this);
	}
	template <typename T = uintptr_t> T SetReverbMode(int32_t mode) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x45481B0))(this, mode);
	}
	template <typename T = int32_t> T GetVoiceIdentify() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4548344))(this);
	}
	template <typename T = uintptr_t> T SetBGMPath(Il2CppString* path) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x454848C))(this, path);
	}
	template <typename T = uintptr_t> T StartBGMPlay() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4548620))(this);
	}
	template <typename T = uintptr_t> T StopBGMPlay() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45487AC))(this);
	}
	template <typename T = uintptr_t> T PauseBGMPlay() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4548938))(this);
	}
	template <typename T = uintptr_t> T ResumeBGMPlay() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4548AC4))(this);
	}
	template <typename T = uintptr_t> T SetBGMVol(int32_t vol) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x4548C50))(this, vol);
	}
	template <typename T = int32_t> T GetBGMPlayState() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4548DE4))(this);
	}
	template <typename T = uintptr_t> T EnableNativeBGMPlay(bool bEnable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x4548E7C))(this, bEnable);
	}
	template <typename T = uintptr_t> T SetBitRate(int32_t bitrate) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x4549010))(this, bitrate);
	}
	template <typename T = int32_t> T GetHwState() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45491A4))(this);
	}
	template <typename T = uintptr_t> T GetAudioDeviceConnectionState() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x454923C))(this);
	}
	template <typename T = int32_t> T CheckDeviceMuteState() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45493C8))(this);
	}
	template <typename T = uintptr_t> T StartSaveVoice() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x45494FC))(this);
	}
	template <typename T = uintptr_t> T StopSaveVoice() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4549688))(this);
	}
	template <typename T = uintptr_t> T SetRecSaveTs(int32_t ts) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x4549814))(this, ts);
	}
	template <typename T = uintptr_t> T SetPlayFileIndex(Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x45499A8))(this, fileid, fileindex);
	}
	template <typename T = uintptr_t> T StartPlaySaveVoiceTs(int32_t ts) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x4549B44))(this, ts);
	}
	template <typename T = uintptr_t> T StopPlaySaveVoice() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x4549CD8))(this);
	}
	template <typename T = uintptr_t> T DelAllSaveVoiceFile(Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x4549E64))(this, fileid, fileindex);
	}
	template <typename T = int32_t> T GetMuteResult() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x454A000))(this);
	}
	template <typename T = uintptr_t> T SetReportBufferTime(int32_t nTimeSec) {
		return ((T (*)(GCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x454A18C))(this, nTimeSec);
	}
	template <typename T = uintptr_t> T SetReportedPlayerInfo(Il2CppArray<uintptr_t>* cszOpenID, Il2CppArray<uintptr_t>* nMemberID, int32_t nCount) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x454A320))(this, cszOpenID, nMemberID, nCount);
	}
	template <typename T = uintptr_t> T ReportPlayer(Il2CppArray<uintptr_t>* cszOpenID, int32_t nCount, Il2CppString* strInfo) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0x454A4C4))(this, cszOpenID, nCount, strInfo);
	}
	template <typename T = int32_t> T GetRoomMembers(Il2CppString* roomName, Il2CppArray<uintptr_t>* members, int32_t len) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x454A668))(this, roomName, members, len);
	}
	template <typename T = int32_t> T EnableCivilVoice(bool bEnable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x454A98C))(this, bEnable);
	}
	template <typename T = int32_t> T SpeechTranslate(Il2CppString* fileID, uintptr_t srcLang, uintptr_t targetLang, uintptr_t transType, int32_t nTimeoutMS) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x454AA94))(this, fileID, srcLang, targetLang, transType, nTimeoutMS);
	}
	template <typename T = int32_t> T RSTSStartRecording(uintptr_t srcLang, Il2CppArray<uintptr_t>* pTargetLangs, int32_t nTargetLangCnt, uintptr_t transType, int32_t nTimeoutMS) {
		return ((T (*)(GCloudVoiceEngine*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x454ABC4))(this, srcLang, pTargetLangs, nTargetLangCnt, transType, nTimeoutMS);
	}
	template <typename T = int32_t> T RSTSStopRecording() {
		return ((T (*)(GCloudVoiceEngine*))(Il2CppBase() + 0x454AE18))(this);
	}
	template <typename T = int32_t> T EnableTranslate(Il2CppString* roomname, bool enable, uintptr_t myLang) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x454AF18))(this, roomname, enable, myLang);
	}
	template <typename T = uintptr_t> T SetCivilBinPath(Il2CppString* path) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x454B01C))(this, path);
	}
	template <typename T = uintptr_t> T SetPlayerVolume(Il2CppString* playerid, uint32_t vol) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*, uint32_t))(Il2CppBase() + 0x454B19C))(this, playerid, vol);
	}
	template <typename T = int32_t> T GetPlayerVolume(Il2CppString* playerid) {
		return ((T (*)(GCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x454B2AC))(this, playerid);
	}
	template <typename T = uintptr_t> T EnableKeyWordsDetect(bool bEnable) {
		return ((T (*)(GCloudVoiceEngine*, bool))(Il2CppBase() + 0x454B3B4))(this, bEnable);
	}
	template <typename T = int32_t> static T RSTSStartRecordingm__0(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x454B5B8))(0, value);
	}

};

}
