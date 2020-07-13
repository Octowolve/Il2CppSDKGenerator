#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FrontEndGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FrontEndGame"));
	}

	template <typename T = bool> static T& FirstTimeInLobbySinceLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogClickStatisticsProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_IsNeedRunGameHandle() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31E9E68))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31E9E70))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EA030))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EA30C))(this);
	}
	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EA484))(this);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t msg) {
		return ((T (*)(FrontEndGame*, uintptr_t))(Il2CppBase() + 0x31EA754))(this, msg);
	}
	template <typename T = void> T InitTLog() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EA890))(this);
	}
	template <typename T = void> T TLogProcess() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAA6C))(this);
	}
	template <typename T = void> T TLogClickStatisticsProcess() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAE44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAE4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAE54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameEventChannel() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAE5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessZoneEvent(uintptr_t P0) {
		return ((T (*)(FrontEndGame*, uintptr_t))(Il2CppBase() + 0x31EAE64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitTLog() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TLogProcess() {
		return ((T (*)(FrontEndGame*))(Il2CppBase() + 0x31EAE74))(this);
	}

};

}
