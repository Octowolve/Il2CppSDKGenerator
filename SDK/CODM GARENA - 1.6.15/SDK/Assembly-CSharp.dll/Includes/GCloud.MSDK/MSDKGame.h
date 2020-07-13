#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKGame"));
	}

	template <typename T = void*> static T& GameBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_GameBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_GameBaseRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Setup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLeaderBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnlockAchievement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> static T setupAdapter(Il2CppString* channel, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C30A0))(0, channel, extra);
	}
	template <typename T = void> static T showAchievementAdapter(Il2CppString* channel, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C31C0))(0, channel, extra);
	}
	template <typename T = void> static T showLeaderBoardAdapter(Il2CppString* board, Il2CppString* channel, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C32E0))(0, board, channel, extra);
	}
	template <typename T = void> static T setScoreAdapter(Il2CppString* board, int32_t score, Il2CppString* channel, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C341C))(0, board, score, channel, extra);
	}
	template <typename T = void> static T unlockAchievementAdapter(Il2CppString* achieve, double count, Il2CppString* channel, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, double, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C355C))(0, achieve, count, channel, extra);
	}
	template <typename T = void> static T add_GameBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C36A4))(0, value);
	}
	template <typename T = void> static T remove_GameBaseRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46C38A4))(0, value);
	}
	template <typename T = void> static T Setup(Il2CppString* channel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C3AA4))(0, channel, extraJson);
	}
	template <typename T = void> static T ShowAchievement(Il2CppString* channel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C3DAC))(0, channel, extraJson);
	}
	template <typename T = void> static T ShowLeaderBoard(Il2CppString* board, Il2CppString* channel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C40B4))(0, board, channel, extraJson);
	}
	template <typename T = void> static T SetScore(Il2CppString* board, int32_t score, Il2CppString* channel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C43C8))(0, board, score, channel, extraJson);
	}
	template <typename T = void> static T UnlockAchievement(Il2CppString* achieve, double count, Il2CppString* channel, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, double, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46C49DC))(0, achieve, count, channel, extraJson);
	}
	template <typename T = void> static T OnGameRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46C5014))(0, json);
	}

};

}
