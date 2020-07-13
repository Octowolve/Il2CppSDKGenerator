#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginPlayerInfo"));
	}

	template <typename T = uintptr_t> T& m_Platform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Area() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_OpenID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_NickName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_AccessToken() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_PayToken() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_PayTokenLeftSeconds() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_SessionId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_SessionType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_PF() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_PFKey() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_GameCenterFlag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_ChannelID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_ChannelInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isWestSocial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isCNSocial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_PlayerLoginPlatform() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7168))(this);
	}
	template <typename T = uintptr_t> T get_Area() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7170))(this);
	}
	template <typename T = void> T SetArea(uintptr_t area) {
		return ((T (*)(LoginPlayerInfo*, uintptr_t))(Il2CppBase() + 0x33E7178))(this, area);
	}
	template <typename T = void> T SetPlatform(uintptr_t platform) {
		return ((T (*)(LoginPlayerInfo*, uintptr_t))(Il2CppBase() + 0x33E7220))(this, platform);
	}
	template <typename T = Il2CppString*> T get_OpenID() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7388))(this);
	}
	template <typename T = void> T set_OpenID(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E7390))(this, value);
	}
	template <typename T = Il2CppString*> T get_NickName() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7398))(this);
	}
	template <typename T = void> T set_NickName(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E73A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_AccessToken() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E73A8))(this);
	}
	template <typename T = void> T set_AccessToken(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E73B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PayToken() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E73B8))(this);
	}
	template <typename T = void> T set_PayToken(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E73C0))(this, value);
	}
	template <typename T = int32_t> T get_PayTokenLeftSeconds() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E73C8))(this);
	}
	template <typename T = void> T set_PayTokenLeftSeconds(int32_t value) {
		return ((T (*)(LoginPlayerInfo*, int32_t))(Il2CppBase() + 0x33E73D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SessionId() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E73D8))(this);
	}
	template <typename T = void> T set_SessionId(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E73E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SessionType() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E73E8))(this);
	}
	template <typename T = void> T set_SessionType(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E73F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PF() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E73F8))(this);
	}
	template <typename T = void> T set_PF(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E7400))(this, value);
	}
	template <typename T = Il2CppString*> T get_PFKey() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7408))(this);
	}
	template <typename T = void> T set_PFKey(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E7410))(this, value);
	}
	template <typename T = int32_t> T get_GameCenterFlag() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7418))(this);
	}
	template <typename T = void> T set_GameCenterFlag(int32_t value) {
		return ((T (*)(LoginPlayerInfo*, int32_t))(Il2CppBase() + 0x33E7420))(this, value);
	}
	template <typename T = int32_t> T get_ChannelID() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7428))(this);
	}
	template <typename T = void> T set_ChannelID(int32_t value) {
		return ((T (*)(LoginPlayerInfo*, int32_t))(Il2CppBase() + 0x33E7430))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChannelInfo() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7438))(this);
	}
	template <typename T = void> T set_ChannelInfo(Il2CppString* value) {
		return ((T (*)(LoginPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x33E7440))(this, value);
	}
	template <typename T = bool> T IsGuest() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7448))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E74F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E75C4))(this);
	}
	template <typename T = bool> T isWestSocial() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7708))(this);
	}
	template <typename T = bool> T isCNSocial() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E77D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E7898))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(LoginPlayerInfo*))(Il2CppBase() + 0x33E78A0))(this);
	}

};

}
