#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class RECONNECTREASON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "RECONNECT_REASON"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_PING_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_SOCKET_EXCEPTION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_RECEND_TIMES_EXCEEDED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_WAIT_SEQUENCE_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_ZONE_DISCONNECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eRECONNECT_REASON_ZONE_RELOGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
