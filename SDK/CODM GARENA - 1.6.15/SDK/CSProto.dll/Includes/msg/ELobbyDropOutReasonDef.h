#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ELobbyDropOutReasonDef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ELobbyDropOutReasonDef"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_CLINET_QUIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_SERVER_NETWORK_KICKOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_SERVER_NEW_LOGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_SERVER_MAITAIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_SERVER_IDIP_KICKOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_CLINET_RECONNECT_QUIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_MULTI_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_GENTLE_KICK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_LOGIN_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_LOBBY_DROPOUT_REASON_GROUPROOM_DIFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
