#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Worker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "Worker"));
	}

	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& requireSocketSecurity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& send_so_far() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Accept() {
		return ((T (*)(Worker*))(Il2CppBase() + 0x3E621F0))(this);
	}
	template <typename T = void> T Receive() {
		return ((T (*)(Worker*))(Il2CppBase() + 0x3E6235C))(this);
	}
	template <typename T = void> T ReceiveFrom() {
		return ((T (*)(Worker*))(Il2CppBase() + 0x3E62384))(this);
	}
	template <typename T = void> T UpdateSendValues(int32_t last_sent) {
		return ((T (*)(Worker*, int32_t))(Il2CppBase() + 0x3E6251C))(this, last_sent);
	}
	template <typename T = void> T Send() {
		return ((T (*)(Worker*))(Il2CppBase() + 0x3E6257C))(this);
	}
	template <typename T = void> T SendTo() {
		return ((T (*)(Worker*))(Il2CppBase() + 0x3E626C0))(this);
	}

};

}
