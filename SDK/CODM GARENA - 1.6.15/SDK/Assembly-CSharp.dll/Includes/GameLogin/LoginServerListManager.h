#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginServerListManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginServerListManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RemoteServerList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuitableServerURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetServerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecideDefaultServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLobbyServerUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetLobbyServerUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertApollo2PlayerPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T PrepareData() {
		return ((T (*)(LoginServerListManager*))(Il2CppBase() + 0x2523718))(this);
	}
	template <typename T = uintptr_t> T GetSuitableServerURL(Il2CppArray<uintptr_t>* loginSvrData) {
		return ((T (*)(LoginServerListManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2523E40))(this, loginSvrData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetServerList() {
		return ((T (*)(LoginServerListManager*))(Il2CppBase() + 0x2523F64))(this);
	}
	template <typename T = uintptr_t> T DecideDefaultServer() {
		return ((T (*)(LoginServerListManager*))(Il2CppBase() + 0x2523CDC))(this);
	}
	template <typename T = uintptr_t> T GetLobbyServerUrl(uintptr_t apolloPlatform) {
		return ((T (*)(LoginServerListManager*, uintptr_t))(Il2CppBase() + 0x2524098))(this, apolloPlatform);
	}
	template <typename T = uintptr_t> T GetLobbyServerUrl_1(uintptr_t loginPlatform) {
		return ((T (*)(LoginServerListManager*, uintptr_t))(Il2CppBase() + 0x2524358))(this, loginPlatform);
	}
	template <typename T = uintptr_t> T ConvertApollo2PlayerPlatform(uintptr_t apolloPlatform) {
		return ((T (*)(LoginServerListManager*, uintptr_t))(Il2CppBase() + 0x2524184))(this, apolloPlatform);
	}

};

}
