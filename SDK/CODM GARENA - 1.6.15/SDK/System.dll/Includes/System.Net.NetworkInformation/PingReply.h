#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.NetworkInformation {

class PingReply
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.NetworkInformation", "PingReply"));
	}

	template <typename T = uintptr_t> T& address() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& rtt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int64_t> T get_RoundtripTime() {
		return ((T (*)(PingReply*))(Il2CppBase() + 0x3E4E974))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(PingReply*))(Il2CppBase() + 0x3E4E97C))(this);
	}

};

}
