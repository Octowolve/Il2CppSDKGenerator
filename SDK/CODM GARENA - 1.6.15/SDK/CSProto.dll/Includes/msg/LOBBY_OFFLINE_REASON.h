#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LOBBYOFFLINEREASON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LOBBY_OFFLINE_REASON"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_MULTI_LOGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_NOT_ALLOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_UPDATE_DB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_IDLE_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_KICK_ALL_PLAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_KICK_IDIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_NETWORK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_KICK_PARENT_PROTECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_FREZON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_CHANGE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_LOGIN_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_GENTLE_KICK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_UPDATE_CLIENT_VER_KICK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_CLIENT_MIN_RES_VER_KICK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_CENTER_CONTROL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_OFFLINE_REASON_AQ_KICK_OUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
