#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.GVoice {

class IGCloudVoiceEngine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.GVoice", "IGCloudVoiceEngine"));
	}


	template <typename T = void> T add_OnJoinRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnJoinRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnQuitRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnQuitRoomCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnApplyMessageKeyCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnApplyMessageKeyCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnUploadReccordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnUploadReccordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnDownloadRecordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnDownloadRecordFileCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnPlayRecordFilCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnPlayRecordFilCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnStreamSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnStreamSpeechToTextEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnStatusUpdateEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnStatusUpdateEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRoleChangeCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRoleChangeCompleteEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRoomMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRoomMemberVoiceEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEventUpdateEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEventUpdateEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnMuteSwitchState(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnMuteSwitchState(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnReportPlayer(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnReportPlayer(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnSaveRecFileIndexEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSaveRecFileIndexEvent(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRoomMemberInfo(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRoomMemberInfo(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnSpeechTranslate(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSpeechTranslate(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRSTS(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRSTS(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEnableTranslate(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEnableTranslate(uintptr_t value) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T SetAppInfo(Il2CppString* appID, Il2CppString* appKey, Il2CppString* openID) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, appID, appKey, openID);
	}
	template <typename T = uintptr_t> T Init() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SetMode(uintptr_t mode) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, mode);
	}
	template <typename T = uintptr_t> T Poll() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Pause() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Resume() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T JoinTeamRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, roomName, msTimeout);
	}
	template <typename T = uintptr_t> T JoinRangeRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, roomName, msTimeout);
	}
	template <typename T = uintptr_t> T JoinNationalRoom(Il2CppString* roomName, uintptr_t role, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, roomName, role, msTimeout);
	}
	template <typename T = uintptr_t> T UpdateCoordinate(Il2CppString* roomName, int64_t x, int64_t y, int64_t z, int64_t r) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int64_t, int64_t, int64_t, int64_t))(Il2CppBase() + 0x0))(this, roomName, x, y, z, r);
	}
	template <typename T = uintptr_t> T ChangeRole(uintptr_t role, Il2CppString* roomName) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, role, roomName);
	}
	template <typename T = uintptr_t> T OpenMic() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CloseMic() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T OpenSpeaker() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CloseSpeaker() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T QuitRoom(Il2CppString* roomName, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, roomName, msTimeout);
	}
	template <typename T = uintptr_t> T ApplyMessageKey(int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, msTimeout);
	}
	template <typename T = uintptr_t> T SetMaxMessageLength(int32_t msTime) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, msTime);
	}
	template <typename T = uintptr_t> T StartRecording(Il2CppString* filePath) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x0))(this, filePath);
	}
	template <typename T = uintptr_t> T StopRecording() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T UploadRecordedFile(Il2CppString* filePath, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, filePath, msTimeout);
	}
	template <typename T = uintptr_t> T DownloadRecordedFile(Il2CppString* fileID, Il2CppString* downloadFilePath, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, fileID, downloadFilePath, msTimeout);
	}
	template <typename T = uintptr_t> T PlayRecordedFile(Il2CppString* filePath) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x0))(this, filePath);
	}
	template <typename T = uintptr_t> T StopPlayFile() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SpeechToText(Il2CppString* fileID, uintptr_t language, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, fileID, language, msTimeout);
	}
	template <typename T = uintptr_t> T JoinTeamRoom_1(Il2CppString* roomName, Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, roomName, token, timestamp, msTimeout);
	}
	template <typename T = uintptr_t> T JoinNationalRoom_1(Il2CppString* roomName, Il2CppString* token, int32_t timestamp, uintptr_t role, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, roomName, token, timestamp, role, msTimeout);
	}
	template <typename T = uintptr_t> T ApplyMessageKey_1(Il2CppString* token, int32_t timestamp, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, token, timestamp, msTimeout);
	}
	template <typename T = uintptr_t> T SpeechToText_1(Il2CppString* fileID, Il2CppString* token, int32_t timestamp, int32_t language, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x0))(this, fileID, token, timestamp, language, msTimeout);
	}
	template <typename T = uintptr_t> T EnableMultiRoom(bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = uintptr_t> T EnableRoomMicrophone(Il2CppString* roomName, bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, roomName, enable);
	}
	template <typename T = uintptr_t> T EnableRoomSpeaker(Il2CppString* roomName, bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, roomName, enable);
	}
	template <typename T = uintptr_t> T SetBGMPath(Il2CppString* path) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = uintptr_t> T EnableNativeBGMPlay(bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = uintptr_t> T StartBGMPlay() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SetBGMVol(int32_t vol) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, vol);
	}
	template <typename T = uintptr_t> T PauseBGMPlay() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T ResumeBGMPlay() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetBGMPlayState() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T StopBGMPlay() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T EnableSpeakerOn(bool bEnable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, bEnable);
	}
	template <typename T = uintptr_t> T SetMicVolume(int32_t vol) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, vol);
	}
	template <typename T = uintptr_t> T SetSpeakerVolume(int32_t vol) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, vol);
	}
	template <typename T = int32_t> T GetMicLevel() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetMicLevel_1(bool bFadeOut) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, bFadeOut);
	}
	template <typename T = int32_t> T GetSpeakerLevel() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetMicState() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetSpeakerState() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T CaptureMicrophoneData(bool bCapture) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, bCapture);
	}
	template <typename T = uintptr_t> T TestMic() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T IsSpeaking() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EnableBluetoothSCO(bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = uintptr_t> T GetAudioDeviceConnectionState() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T CheckDeviceMuteState() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetMuteResult() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SetVoiceEffects(uintptr_t mode) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t))(Il2CppBase() + 0x0))(this, mode);
	}
	template <typename T = uintptr_t> T EnableReverb(bool bEnable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, bEnable);
	}
	template <typename T = uintptr_t> T SetReverbMode(int32_t mode) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, mode);
	}
	template <typename T = int32_t> T GetVoiceIdentify() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetHwState() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SetServerInfo(Il2CppString* URL) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x0))(this, URL);
	}
	template <typename T = uintptr_t> T SetBitRate(int32_t bitrate) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, bitrate);
	}
	template <typename T = uintptr_t> T SetDataFree(bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = uintptr_t> T EnableLog(bool enable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = uintptr_t> T JoinFMRoom(Il2CppString* roomID, int32_t msTimeout) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, roomID, msTimeout);
	}
	template <typename T = int32_t> T SetAudience(Il2CppArray<uintptr_t>* audience, Il2CppString* roomName) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, audience, roomName);
	}
	template <typename T = uintptr_t> T ForbidMemberVoice(int32_t member, bool bEnable, Il2CppString* roomName) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, member, bEnable, roomName);
	}
	template <typename T = uintptr_t> T GetFileParam(Il2CppString* filepath, Il2CppArray<uintptr_t>* bytes, Il2CppArray<uintptr_t>* seconds) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, filepath, bytes, seconds);
	}
	template <typename T = int32_t> T invoke(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2, Il2CppArray<uintptr_t>* pOutput) {
		return ((T (*)(IGCloudVoiceEngine*, uint32_t, uint32_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, nCmd, nParam1, nParam2, pOutput);
	}
	template <typename T = uintptr_t> T GetExtensionPluginContext() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T UploadRecordedFile_1(Il2CppString* filePath, int32_t msTimeout, bool bPermanent) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x0))(this, filePath, msTimeout, bPermanent);
	}
	template <typename T = uintptr_t> T DownloadRecordedFile_1(Il2CppString* fileID, Il2CppString* downloadFilePath, int32_t msTimeout, bool bPermanent) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x0))(this, fileID, downloadFilePath, msTimeout, bPermanent);
	}
	template <typename T = uintptr_t> T SetReportBufferTime(int32_t nTimeSec) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, nTimeSec);
	}
	template <typename T = uintptr_t> T SetReportedPlayerInfo(Il2CppArray<uintptr_t>* cszOpenID, Il2CppArray<uintptr_t>* nMemberID, int32_t nCount) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, cszOpenID, nMemberID, nCount);
	}
	template <typename T = uintptr_t> T ReportPlayer(Il2CppArray<uintptr_t>* cszOpenID, int32_t nCount, Il2CppString* strInfo) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, cszOpenID, nCount, strInfo);
	}
	template <typename T = uintptr_t> T StartSaveVoice() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T StopSaveVoice() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T SetRecSaveTs(int32_t ts) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, ts);
	}
	template <typename T = uintptr_t> T SetPlayFileIndex(Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, fileid, fileindex);
	}
	template <typename T = uintptr_t> T StartPlaySaveVoiceTs(int32_t ts) {
		return ((T (*)(IGCloudVoiceEngine*, int32_t))(Il2CppBase() + 0x0))(this, ts);
	}
	template <typename T = uintptr_t> T StopPlaySaveVoice() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T DelAllSaveVoiceFile(Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, fileid, fileindex);
	}
	template <typename T = uintptr_t> T SetCivilBinPath(Il2CppString* path) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = uintptr_t> T SetPlayerVolume(Il2CppString* playerid, uint32_t vol) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, uint32_t))(Il2CppBase() + 0x0))(this, playerid, vol);
	}
	template <typename T = int32_t> T GetPlayerVolume(Il2CppString* playerid) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*))(Il2CppBase() + 0x0))(this, playerid);
	}
	template <typename T = uintptr_t> T EnableKeyWordsDetect(bool bEnable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, bEnable);
	}
	template <typename T = int32_t> T GetRoomMembers(Il2CppString* roomName, Il2CppArray<uintptr_t>* members, int32_t len) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, roomName, members, len);
	}
	template <typename T = int32_t> T EnableCivilVoice(bool bEnable) {
		return ((T (*)(IGCloudVoiceEngine*, bool))(Il2CppBase() + 0x0))(this, bEnable);
	}
	template <typename T = int32_t> T SpeechTranslate(Il2CppString* fileID, uintptr_t srcLang, uintptr_t targetLang, uintptr_t transType, int32_t nTimeoutMS) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, fileID, srcLang, targetLang, transType, nTimeoutMS);
	}
	template <typename T = int32_t> T RSTSStartRecording(uintptr_t srcLang, Il2CppArray<uintptr_t>* pTargetLangs, int32_t nTargetLangCnt, uintptr_t transType, int32_t nTimeoutMS) {
		return ((T (*)(IGCloudVoiceEngine*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, srcLang, pTargetLangs, nTargetLangCnt, transType, nTimeoutMS);
	}
	template <typename T = int32_t> T RSTSStopRecording() {
		return ((T (*)(IGCloudVoiceEngine*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T EnableTranslate(Il2CppString* roomname, bool enable, uintptr_t srcLang) {
		return ((T (*)(IGCloudVoiceEngine*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x0))(this, roomname, enable, srcLang);
	}

};

}
