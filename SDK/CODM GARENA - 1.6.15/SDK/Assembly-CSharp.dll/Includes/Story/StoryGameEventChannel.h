#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWinFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemoveAllEnemyAI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillAllEnemyAI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGameResultToZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTEFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerWantQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(StoryGameEventChannel*))(Il2CppBase() + 0x3F11FAC))(this);
	}
	template <typename T = void> T OnWinFail(uintptr_t msg) {
		return ((T (*)(StoryGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3F1CAE4))(this, msg);
	}
	template <typename T = void> T OnRemoveAllEnemyAI(uintptr_t msg) {
		return ((T (*)(StoryGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3F1CEF8))(this, msg);
	}
	template <typename T = void> T OnKillAllEnemyAI(uintptr_t message) {
		return ((T (*)(StoryGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3F1D010))(this, message);
	}
	template <typename T = void> T SendGameResultToZone(bool isquit) {
		return ((T (*)(StoryGameEventChannel*, bool))(Il2CppBase() + 0x3F1D250))(this, isquit);
	}
	template <typename T = void> T OnQTEFinished(uintptr_t msg) {
		return ((T (*)(StoryGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3F1D2F0))(this, msg);
	}
	template <typename T = void> T PlayerWantQuitGame(uintptr_t Msg) {
		return ((T (*)(StoryGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3F1D390))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(StoryGameEventChannel*))(Il2CppBase() + 0x3F1D44C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SendGameResultToZone(bool P0) {
		return ((T (*)(StoryGameEventChannel*, bool))(Il2CppBase() + 0x3F1D454))(this, P0);
	}

};

}
