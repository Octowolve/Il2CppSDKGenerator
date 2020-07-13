#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginSceneLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginSceneLoader"));
	}

	template <typename T = Il2CppString*> static T& VIDEO_PATH_LOGO_TIMI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VIDEO_PATH_LOGO_SMILEGATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VIDEO_PATH_LOGO_LOGOES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DELAY_SECONDS_ONCALLBACK_FORIOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& VIDEO_TIME_SECONDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BackgroundLogo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& m_IsVideoFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_VideoStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& m_IsVideoFinishTooEarly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamePauseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGamePauseCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGamePauseCallbackInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> static T get_IsVideoFinish() {
		return ((T (*)(void *))(Il2CppBase() + 0x33E7EA0))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoginSceneLoader*))(Il2CppBase() + 0x33E809C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LoginSceneLoader*))(Il2CppBase() + 0x33E82A0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LoginSceneLoader*))(Il2CppBase() + 0x33E85DC))(this);
	}
	template <typename T = void> T SetBackground() {
		return ((T (*)(LoginSceneLoader*))(Il2CppBase() + 0x33E8514))(this);
	}
	template <typename T = void> T PlayVideo(Il2CppString* videoPath, uintptr_t reason, uintptr_t color) {
		return ((T (*)(LoginSceneLoader*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33E8718))(this, videoPath, reason, color);
	}
	template <typename T = void> T OnGamePauseCallback(uintptr_t gamePauseReason, float pauseStartRealTime) {
		return ((T (*)(LoginSceneLoader*, uintptr_t, float))(Il2CppBase() + 0x33E88B0))(this, gamePauseReason, pauseStartRealTime);
	}
	template <typename T = uintptr_t> T ProcessGamePauseCallback(uintptr_t gamePauseReason) {
		return ((T (*)(LoginSceneLoader*, uintptr_t))(Il2CppBase() + 0x33E8BC0))(this, gamePauseReason);
	}
	template <typename T = bool> T ProcessGamePauseCallbackInner(uintptr_t gamePauseReason, bool shouldPlayVideoReally) {
		return ((T (*)(LoginSceneLoader*, uintptr_t, bool))(Il2CppBase() + 0x33E8A6C))(this, gamePauseReason, shouldPlayVideoReally);
	}

};

}
