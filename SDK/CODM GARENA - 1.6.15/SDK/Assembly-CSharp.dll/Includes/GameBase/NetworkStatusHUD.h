#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NetworkStatusHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NetworkStatusHUD"));
	}

	template <typename T = uintptr_t> T& PingLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> static T& STRONG_WIFI_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MEDIUM_WIFI_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& WEAK_WIFI_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& ANOMALY_WIFI_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& STRONG_CARRIER_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& MEDIUM_CARRIER_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& WEAK_CARRIER_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& ANOMALY_CARRIER_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uint16_t> static T& MAX_PING_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& MAX_PING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& PING_DEVIATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_StrongTextColor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_MediumTextColor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_WeakColor() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_Sb() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint16_t> T& m_LastPing() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint16_t> T& m_BeforeLastPing() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNetworkInstability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPingChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(NetworkStatusHUD*))(Il2CppBase() + 0x19DA2E4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(NetworkStatusHUD*))(Il2CppBase() + 0x19DA2EC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetworkStatusHUD*))(Il2CppBase() + 0x19DA2F8))(this);
	}
	template <typename T = void> T OnNetworkInstability(uintptr_t msg) {
		return ((T (*)(NetworkStatusHUD*, uintptr_t))(Il2CppBase() + 0x19DA480))(this, msg);
	}
	template <typename T = void> T OnLocalPingChanged(uintptr_t msg) {
		return ((T (*)(NetworkStatusHUD*, uintptr_t))(Il2CppBase() + 0x19DA63C))(this, msg);
	}
	template <typename T = void> T UpdatePing(uint16_t ping) {
		return ((T (*)(NetworkStatusHUD*, uint16_t))(Il2CppBase() + 0x19DA780))(this, ping);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NetworkStatusHUD*))(Il2CppBase() + 0x19DAEE4))(this);
	}

};

}
