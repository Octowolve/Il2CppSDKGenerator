#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAGameUIScene"));
	}

	template <typename T = uintptr_t> T& mEndRoundView() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = int32_t> T& TOP_PLAYERS_COUNT() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToWinnerCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndRoundMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMatchResultVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTopThree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalMapController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401B424))(this);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401B4E0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401B6A0))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(FFAGameUIScene*, uintptr_t))(Il2CppBase() + 0x401B748))(this, roundResult);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(FFAGameUIScene*, uintptr_t))(Il2CppBase() + 0x401B7E8))(this, msg);
	}
	template <typename T = void> T GoToWinnerCircle() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401B938))(this);
	}
	template <typename T = void> T PlayEndRoundMusic() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401BA18))(this);
	}
	template <typename T = void> T PlayMatchResultVoice(int32_t myRank) {
		return ((T (*)(FFAGameUIScene*, int32_t))(Il2CppBase() + 0x401BFD0))(this, myRank);
	}
	template <typename T = int32_t> T GetRank() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401BC74))(this);
	}
	template <typename T = bool> T IsTopThree() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401BBBC))(this);
	}
	template <typename T = bool> T IfNeedVoice() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C128))(this);
	}
	template <typename T = void> T CreateTacticalMapController(uintptr_t tacticalGPS) {
		return ((T (*)(FFAGameUIScene*, uintptr_t))(Il2CppBase() + 0x401C1C8))(this, tacticalGPS);
	}
	template <typename T = void> T OnRoundEndedm__0() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C3E8))(this);
	}
	template <typename T = int32_t> static T GetRankm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x401C64C))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C6B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C6C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(FFAGameUIScene*, uintptr_t))(Il2CppBase() + 0x401C6C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(FFAGameUIScene*, uintptr_t))(Il2CppBase() + 0x401C6D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GoToWinnerCircle() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C6D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEndRoundMusic() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C6E0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfNeedVoice() {
		return ((T (*)(FFAGameUIScene*))(Il2CppBase() + 0x401C6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalMapController(uintptr_t P0) {
		return ((T (*)(FFAGameUIScene*, uintptr_t))(Il2CppBase() + 0x401C6F0))(this, P0);
	}

};

}
