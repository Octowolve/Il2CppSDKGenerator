#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class LobbyMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "LobbyMsg"));
	}

	template <typename T = uint32_t> T& CommandID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LobbyRes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uint32_t> T get_UIN() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F494))(this);
	}
	template <typename T = uint32_t> T get_CommandID() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F49C))(this);
	}
	template <typename T = void> T set_CommandID(uint32_t value) {
		return ((T (*)(LobbyMsg*, uint32_t))(Il2CppBase() + 0x482F4A4))(this, value);
	}
	template <typename T = uintptr_t> T get_LobbyRes() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F4AC))(this);
	}
	template <typename T = void> T set_LobbyRes(uintptr_t value) {
		return ((T (*)(LobbyMsg*, uintptr_t))(Il2CppBase() + 0x482F4B4))(this, value);
	}
	template <typename T = void> T SetMsg(uint32_t commandId, uintptr_t lobbyResponse) {
		return ((T (*)(LobbyMsg*, uint32_t, uintptr_t))(Il2CppBase() + 0x482F4BC))(this, commandId, lobbyResponse);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F580))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(LobbyMsg*, bool))(Il2CppBase() + 0x482F588))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F590))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F634))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(LobbyMsg*))(Il2CppBase() + 0x482F764))(this);
	}

};

}
