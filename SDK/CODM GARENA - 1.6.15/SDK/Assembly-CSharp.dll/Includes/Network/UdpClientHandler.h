#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UdpClientHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UdpClientHandler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CreateConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T CreateConnect(Il2CppString* serverAddress, uint16_t serverPort, Il2CppString* logParam) {
		return ((T (*)(void *, Il2CppString*, uint16_t, Il2CppString*))(Il2CppBase() + 0x439EB5C))(0, serverAddress, serverPort, logParam);
	}

};

}
