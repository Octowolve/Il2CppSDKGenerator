#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BloodHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodHUD"));
	}

	template <typename T = uintptr_t> T& HPBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& HPLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Widge() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHPValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BCBB8))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BCBC0))(this);
	}
	template <typename T = bool> T get_IsShow() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BCBCC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BloodHUD*, float))(Il2CppBase() + 0x35BCC98))(this, dt);
	}
	template <typename T = void> T SetHPValue(float hpPercent, int32_t HP) {
		return ((T (*)(BloodHUD*, float, int32_t))(Il2CppBase() + 0x35BCE18))(this, hpPercent, HP);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(BloodHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x35BCF8C))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BD1D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BD278))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BD320))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BloodHUD*, float))(Il2CppBase() + 0x35BD3C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(BloodHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x35BD3D0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BD3F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BD3F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BloodHUD*))(Il2CppBase() + 0x35BD400))(this);
	}

};

}
