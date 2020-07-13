#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDeathPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDeathFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnSyncUAV(uintptr_t Msg) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x39153B4))(this, Msg);
	}
	template <typename T = void> T OnResDeathPlay(uintptr_t Msg) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x39156C4))(this, Msg);
	}
	template <typename T = void> T OnSyncDeathFrame(uintptr_t Msg) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915764))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915804))(this, Msg);
	}
	template <typename T = void> T OnDSReset(uintptr_t Msg) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x39159FC))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUAV(uintptr_t P0) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915A9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnResDeathPlay(uintptr_t P0) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915AA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncDeathFrame(uintptr_t P0) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915AAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915AB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDSReset(uintptr_t P0) {
		return ((T (*)(SPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x3915ABC))(this, P0);
	}

};

}
