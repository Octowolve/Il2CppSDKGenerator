#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.NetworkInformation {

class PingOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.NetworkInformation", "PingOptions"));
	}

	template <typename T = int32_t> T& ttl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& dont_fragment() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_DontFragment() {
		return ((T (*)(PingOptions*))(Il2CppBase() + 0x3E4D01C))(this);
	}
	template <typename T = int32_t> T get_Ttl() {
		return ((T (*)(PingOptions*))(Il2CppBase() + 0x3E4D19C))(this);
	}

};

}
