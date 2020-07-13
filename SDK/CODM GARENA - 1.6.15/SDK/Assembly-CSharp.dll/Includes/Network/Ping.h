#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class Ping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "Ping"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOutput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T Send(Il2CppString* serverAddress, uint16_t port, int32_t timeOutMillisec) {
		return ((T (*)(Ping*, Il2CppString*, uint16_t, int32_t))(Il2CppBase() + 0x0))(this, serverAddress, port, timeOutMillisec);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Ping*))(Il2CppBase() + 0x507F48C))(this);
	}
	template <typename T = Il2CppString*> T GetOutput() {
		return ((T (*)(Ping*))(Il2CppBase() + 0x507F524))(this);
	}

};

}
