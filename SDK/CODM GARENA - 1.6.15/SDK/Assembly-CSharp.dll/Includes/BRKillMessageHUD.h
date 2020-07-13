#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRKillMessageHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRKillMessageHUD"));
	}

	template <typename T = Il2CppVector3> T& startPos() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& targetPos() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& mSkinColorCache() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeammateLoginOrLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPanelTransformEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseKillMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseWeaponByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParsePawnByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F3468))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F348C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F35A0))(this);
	}
	template <typename T = void> T OnTeammateLoginOrLogout(uintptr_t msg) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t))(Il2CppBase() + 0x52F365C))(this, msg);
	}
	template <typename T = void> T ResetPanelTransformEnd() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F3908))(this);
	}
	template <typename T = void> T PushMessage(uintptr_t killInfo, uintptr_t mtype) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x52F39EC))(this, killInfo, mtype);
	}
	template <typename T = uintptr_t> T ParseKillMessage(uintptr_t killInfo) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t))(Il2CppBase() + 0x52F3AC8))(this, killInfo);
	}
	template <typename T = void> T ParseWeaponByID(uintptr_t killInfo, uintptr_t* spriteName, uintptr_t* weaponColor) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x52F3DE0))(this, killInfo, spriteName, weaponColor);
	}
	template <typename T = bool> T ParsePawnByID(uint32_t playerID, uintptr_t* name, uintptr_t* color) {
		return ((T (*)(BRKillMessageHUD*, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x52F4048))(this, playerID, name, color);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F45A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F45AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetPanelTransformEnd() {
		return ((T (*)(BRKillMessageHUD*))(Il2CppBase() + 0x52F45B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PushMessage(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x52F45BC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_ParseKillMessage(uintptr_t P0) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t))(Il2CppBase() + 0x52F45C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ParseWeaponByID(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(BRKillMessageHUD*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x52F45CC))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_ParsePawnByID(uint32_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(BRKillMessageHUD*, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x52F45EC))(this, P0, P1, P2);
	}

};

}
