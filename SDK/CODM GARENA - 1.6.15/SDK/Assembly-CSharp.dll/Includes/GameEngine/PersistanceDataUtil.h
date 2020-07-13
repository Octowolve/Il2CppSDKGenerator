#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PersistanceDataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PersistanceDataUtil"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Lobby_AvatarType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_PrepareSysEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstPlayGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstEnterSubscribeAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstLoginAttempt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_CampType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_CameraType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_LOGIN_CONTINUOUS_FAIL_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_LOGIN_CONTINUOUS_FAIL_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_LOGIN_PROLOGUE_PLAY_TIMESTAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_LOGIN_SETTINGS_TUTORIAL_PLAY_TIMESTAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_PERMISSION_GRANTED_TIMESTAMP_NOTIFICATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_APPSTORE_RATED_TIMESTAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_TOSTORERATE_SOLOWIN_TIMECOUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_TOSTORERATE_LASTPOP_TIMESTAMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_TOSTORERATE_POPTIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_TOSTORERATED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_FIRST_LAUNCH_SPLASH_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_FIRST_LAUNCH_RESOURCE_UPDATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Account_LastLoginPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APK_UPDATE_YYB_CHECK_UPDATE_FAIL_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VOICE_SPEAKER_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VOICE_MICROPHONE_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VOICE_HAVE_USED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CLEAR_NTEXTURES_FILE_CACHE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IGNORE_UPDATE_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CRASH_TEST_COUNTER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TUTORIAL_FIRST_USE_UAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TUTORIAL_FIRST_USE_ULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& APPLICATION_NORMAL_EXIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHANNEL_BINDING_VIEW_OPENED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GAMEPAD_REDPOINT_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BROB_OCCLUSION_EFFECT_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BROB_SHOW_FIRE_EFFECT_BULLET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BROB_SHOW_FIRE_EFFECT_GRENADE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHAT_RECORD_NUMBER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ResourceVersionFromFile() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_ResourceVersionChanged() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_bResourceClearedByOS() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppString*> static T& PK_LoginNoAuthUserName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_LoginNoAuthPswd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PK_LoginNoAuthRemember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CHECK_NTEXTURE_CLEAR_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginNoAuthUserNameGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginNoAuthUserNameSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginNoAuthPasswordGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginNoAuthPasswordSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginNoAuthRememberGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginNoAuthRememberSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CampTypeSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CampTypeGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraTypeSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraTypeGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadRedPointState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGamePadRedPointState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstPlayGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstPlayGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstEnterSubscribeAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstEnterSubscribeAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProloguePlayTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProloguePlayTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProloguePlayTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNotificationPermissionGrantedTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNotificationPermissionGrantedTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppStoreRatedTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAppStoreRatedTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToStoreRateSoloWinTimeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToStoreRateSoloWinTimeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToStoreRateLastPopTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToStoreRateLastPopTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToStoreRatePopTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToStoreRatePopTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToStoreRated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToStoreRated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstUseUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstUseUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstUseUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstUseUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstLaunchSplashTimecostRecordVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstLaunchSplashTimecostRecordVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstLaunchResourceUpdateTimecostRecordVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstLaunchResourceUpdateTimecostRecordVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFirstLoginAttempt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstLoginAttempt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginContinuousFailCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLoginContinuousFailCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseLoginContinuousFailCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginContinuousFailTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoginContinuousFailTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastLoginPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppIDByLastLoginPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastLoginPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetYYBCheckUpdateFailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseYYBCheckUpdateFailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrashTestFailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncreaseCrashTestFailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetYYBCheckUpdateFailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetYYBCheckUpdateFailTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceSpeakerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceSpeakerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceMicroPhoneState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceMicroPhoneState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceHaveUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVoiceHaveUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelBindingViewOpened() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelBindingViewOpened() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldClearNTexutreFileCaches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckApplicationNormalExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBROBOcclusionEffectAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBROBOcclusionEffectAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChatRecordCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatRecordCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllChatRecordCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllChatRecordCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteChatRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}

	template <typename T = bool> T get_ResourceClearedByOS() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2745760))(this);
	}
	template <typename T = void> T set_ResourceClearedByOS(bool value) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x2745768))(this, value);
	}
	template <typename T = Il2CppString*> T LoginNoAuthUserNameGet() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2745770))(this);
	}
	template <typename T = void> T LoginNoAuthUserNameSave(Il2CppString* val) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x274590C))(this, val);
	}
	template <typename T = Il2CppString*> T LoginNoAuthPasswordGet() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2745A6C))(this);
	}
	template <typename T = void> T LoginNoAuthPasswordSave(Il2CppString* val) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x2745C08))(this, val);
	}
	template <typename T = bool> T LoginNoAuthRememberGet() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2745D68))(this);
	}
	template <typename T = void> T LoginNoAuthRememberSave(bool val) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x2745EB4))(this, val);
	}
	template <typename T = void> T CampTypeSave(Il2CppString* val) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x274601C))(this, val);
	}
	template <typename T = Il2CppString*> T CampTypeGet() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2746184))(this);
	}
	template <typename T = void> T CameraTypeSave(Il2CppString* val) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x274631C))(this, val);
	}
	template <typename T = Il2CppString*> T CameraTypeGet() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2746484))(this);
	}
	template <typename T = int32_t> T GetGamePadRedPointState() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274661C))(this);
	}
	template <typename T = void> T SetGamePadRedPointState(int32_t val) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x2746768))(this, val);
	}
	template <typename T = bool> T IsFirstPlayGame() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2746964))(this);
	}
	template <typename T = void> T SetFirstPlayGame(bool val) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x2746AB0))(this, val);
	}
	template <typename T = bool> T IsFirstEnterSubscribeAnnouncement() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2746C18))(this);
	}
	template <typename T = void> T SetFirstEnterSubscribeAnnouncement(bool val) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x2746D64))(this, val);
	}
	template <typename T = int32_t> T GetProloguePlayTimestamp() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2746ECC))(this);
	}
	template <typename T = void> T SetProloguePlayTimestamp(int32_t localUnixTimestamp) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x2747018))(this, localUnixTimestamp);
	}
	template <typename T = void> static T ResetProloguePlayTimestamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x2747180))(0);
	}
	template <typename T = int32_t> T GetNotificationPermissionGrantedTimestamp() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x27472D8))(this);
	}
	template <typename T = void> T SetNotificationPermissionGrantedTimestamp(int32_t localUnixTimestamp) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x2747424))(this, localUnixTimestamp);
	}
	template <typename T = int32_t> T GetAppStoreRatedTimestamp() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274758C))(this);
	}
	template <typename T = void> T SetAppStoreRatedTimestamp(int32_t localUnixTimestamp) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x27476D8))(this, localUnixTimestamp);
	}
	template <typename T = int32_t> T GetToStoreRateSoloWinTimeCount() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2747840))(this);
	}
	template <typename T = void> T SetToStoreRateSoloWinTimeCount(int32_t soloWinTime) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x274798C))(this, soloWinTime);
	}
	template <typename T = int32_t> T GetToStoreRateLastPopTimestamp() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2747AF4))(this);
	}
	template <typename T = void> T SetToStoreRateLastPopTimestamp(int32_t timestamp) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x2747C40))(this, timestamp);
	}
	template <typename T = int32_t> T GetToStoreRatePopTimes() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2747DA8))(this);
	}
	template <typename T = void> T SetToStoreRatePopTimes(int32_t popTimes) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x2747EF4))(this, popTimes);
	}
	template <typename T = bool> T GetToStoreRated() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274805C))(this);
	}
	template <typename T = void> T SetToStoreRated(bool isRated) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x27481A8))(this, isRated);
	}
	template <typename T = bool> T IsFirstUseUAV() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2748310))(this);
	}
	template <typename T = void> T SetFirstUseUAV(bool val) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274845C))(this, val);
	}
	template <typename T = bool> T IsFirstUseUlt() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x27485C4))(this);
	}
	template <typename T = void> T SetFirstUseUlt(bool val) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x2748710))(this, val);
	}
	template <typename T = Il2CppString*> T GetFirstLaunchSplashTimecostRecordVersion() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2748878))(this);
	}
	template <typename T = void> T SetFirstLaunchSplashTimecostRecordVersion(Il2CppString* programVersion) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x2748A10))(this, programVersion);
	}
	template <typename T = Il2CppString*> T GetFirstLaunchResourceUpdateTimecostRecordVersion() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2748B78))(this);
	}
	template <typename T = void> T SetFirstLaunchResourceUpdateTimecostRecordVersion(Il2CppString* programVersion) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x2748D10))(this, programVersion);
	}
	template <typename T = bool> T IsFirstLoginAttempt() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2748E78))(this);
	}
	template <typename T = void> T SetFirstLoginAttempt(bool val) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x2748FC4))(this, val);
	}
	template <typename T = int32_t> T GetLoginContinuousFailCount() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274912C))(this);
	}
	template <typename T = void> T ClearLoginContinuousFailCount() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2749278))(this);
	}
	template <typename T = int32_t> T IncreaseLoginContinuousFailCount() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x27493D8))(this);
	}
	template <typename T = int32_t> T GetLoginContinuousFailTime() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274954C))(this);
	}
	template <typename T = void> T SetLoginContinuousFailTime(int32_t timestamp) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x2749698))(this, timestamp);
	}
	template <typename T = void> T SetLastLoginPlatform(uintptr_t inPlatformTyps) {
		return ((T (*)(PersistanceDataUtil*, uintptr_t))(Il2CppBase() + 0x2749800))(this, inPlatformTyps);
	}
	template <typename T = Il2CppString*> T GetAppIDByLastLoginPlatform() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2749968))(this);
	}
	template <typename T = uintptr_t> T GetLastLoginPlatform() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2749A50))(this);
	}
	template <typename T = int32_t> T GetYYBCheckUpdateFailTimes() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2749C6C))(this);
	}
	template <typename T = void> T IncreaseYYBCheckUpdateFailTimes() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2749DB8))(this);
	}
	template <typename T = int32_t> T GetCrashTestFailTimes() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x2749F24))(this);
	}
	template <typename T = void> T IncreaseCrashTestFailTimes(int32_t times) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x274A070))(this, times);
	}
	template <typename T = void> T ResetYYBCheckUpdateFailTimes() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274A1D8))(this);
	}
	template <typename T = void> T SetYYBCheckUpdateFailTimes(int32_t times) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x274A338))(this, times);
	}
	template <typename T = void> T SetVoiceSpeakerState(bool isOpen) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274A4A0))(this, isOpen);
	}
	template <typename T = bool> T GetVoiceSpeakerState() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274A608))(this);
	}
	template <typename T = void> T SetVoiceMicroPhoneState(bool isOpen) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274A754))(this, isOpen);
	}
	template <typename T = bool> T GetVoiceMicroPhoneState() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274A8BC))(this);
	}
	template <typename T = void> T SetVoiceHaveUsed(bool isUsed) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274AA08))(this, isUsed);
	}
	template <typename T = bool> T GetVoiceHaveUsed() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274AB70))(this);
	}
	template <typename T = void> T SetChannelBindingViewOpened(bool isOpened) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274ACBC))(this, isOpened);
	}
	template <typename T = bool> T GetChannelBindingViewOpened() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274AE24))(this);
	}
	template <typename T = bool> T ShouldClearNTexutreFileCaches() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274AF70))(this);
	}
	template <typename T = bool> T get_ApplicationNormalExit() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274B194))(this);
	}
	template <typename T = void> T set_ApplicationNormalExit(bool value) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274B270))(this, value);
	}
	template <typename T = void> T CheckApplicationNormalExit() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274B360))(this);
	}
	template <typename T = void> T SetBROBOcclusionEffectAlpha(float alpha) {
		return ((T (*)(PersistanceDataUtil*, float))(Il2CppBase() + 0x274B558))(this, alpha);
	}
	template <typename T = float> T GetBROBOcclusionEffectAlpha() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274B70C))(this);
	}
	template <typename T = bool> T get_BROBShowFireEffectBullet() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274B898))(this);
	}
	template <typename T = void> T set_BROBShowFireEffectBullet(bool value) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274B974))(this, value);
	}
	template <typename T = bool> T get_BROBShowFireEffectGrenade() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274BA64))(this);
	}
	template <typename T = void> T set_BROBShowFireEffectGrenade(bool value) {
		return ((T (*)(PersistanceDataUtil*, bool))(Il2CppBase() + 0x274BB40))(this, value);
	}
	template <typename T = void> T SetChatRecordCount(int32_t changeCount, Il2CppString* dateTime) {
		return ((T (*)(PersistanceDataUtil*, int32_t, Il2CppString*))(Il2CppBase() + 0x274BC30))(this, changeCount, dateTime);
	}
	template <typename T = int32_t> T GetChatRecordCount(Il2CppString* dateTime) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x274BE14))(this, dateTime);
	}
	template <typename T = int32_t> T GetAllChatRecordCount() {
		return ((T (*)(PersistanceDataUtil*))(Il2CppBase() + 0x274C13C))(this);
	}
	template <typename T = void> T SetAllChatRecordCount(int32_t changeCount) {
		return ((T (*)(PersistanceDataUtil*, int32_t))(Il2CppBase() + 0x274BFBC))(this, changeCount);
	}
	template <typename T = void> T DeleteChatRecord(Il2CppString* dateTime) {
		return ((T (*)(PersistanceDataUtil*, Il2CppString*))(Il2CppBase() + 0x274C288))(this, dateTime);
	}

};

}
