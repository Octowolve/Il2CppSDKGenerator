#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class DirectDSConnectParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "DirectDSConnectParam"));
	}

	template <typename T = Il2CppString*> T& Ip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint16_t> T& Port() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AIServerIp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint16_t> T& AIPort() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ExtendInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& TimeoutMs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
