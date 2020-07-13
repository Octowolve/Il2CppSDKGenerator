#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconGameStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D80F0))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D8580))(this);
	}
	template <typename T = void> T ReportBeaconGameStart() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D81F8))(this);
	}
	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D8680))(this);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t msg) {
		return ((T (*)(LoginGame*, uintptr_t))(Il2CppBase() + 0x33D8778))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D8884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D888C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameEventChannel() {
		return ((T (*)(LoginGame*))(Il2CppBase() + 0x33D8894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessZoneEvent(uintptr_t P0) {
		return ((T (*)(LoginGame*, uintptr_t))(Il2CppBase() + 0x33D889C))(this, P0);
	}

};

}
