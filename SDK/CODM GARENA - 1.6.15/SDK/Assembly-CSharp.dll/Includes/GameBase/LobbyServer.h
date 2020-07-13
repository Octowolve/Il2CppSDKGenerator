#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LobbyServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LobbyServer"));
	}

	template <typename T = uintptr_t> T& ZoneServerHandler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& WorldChatServerHandler() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& TickInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_AccumulateDeltaTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& kLowerTickInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsZoneConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsZoneLogined() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_ZoneServerHandler() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x195D914))(this);
	}
	template <typename T = void> T set_ZoneServerHandler(uintptr_t value) {
		return ((T (*)(LobbyServer*, uintptr_t))(Il2CppBase() + 0x19A4C10))(this, value);
	}
	template <typename T = uintptr_t> T get_WorldChatServerHandler() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x195D91C))(this);
	}
	template <typename T = void> T set_WorldChatServerHandler(uintptr_t value) {
		return ((T (*)(LobbyServer*, uintptr_t))(Il2CppBase() + 0x19A4C18))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A4C20))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A4D80))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A4E80))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(LobbyServer*, bool))(Il2CppBase() + 0x19A4F80))(this, pause);
	}
	template <typename T = bool> T SkipTick(float deltaTime) {
		return ((T (*)(LobbyServer*, float))(Il2CppBase() + 0x19A506C))(this, deltaTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LobbyServer*, float))(Il2CppBase() + 0x19A526C))(this, deltaTime);
	}
	template <typename T = bool> T IsZoneConnected() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x196DDA0))(this);
	}
	template <typename T = bool> T IsZoneLogined() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A539C))(this);
	}
	template <typename T = uintptr_t> T GetLastError() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A5488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A560C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A5614))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(LobbyServer*))(Il2CppBase() + 0x19A561C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(LobbyServer*, bool))(Il2CppBase() + 0x19A5624))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LobbyServer*, float))(Il2CppBase() + 0x19A562C))(this, P0);
	}

};

}
