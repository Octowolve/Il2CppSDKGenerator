#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class CSharpPing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "CSharpPing"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ping() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIPBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetIPBytes(Il2CppString* ip) {
		return ((T (*)(CSharpPing*, Il2CppString*))(Il2CppBase() + 0x50C4790))(this, ip);
	}
	template <typename T = uintptr_t> T Send(Il2CppString* serverAddress, uint16_t port, int32_t timeOutMillisec) {
		return ((T (*)(CSharpPing*, Il2CppString*, uint16_t, int32_t))(Il2CppBase() + 0x50C49A0))(this, serverAddress, port, timeOutMillisec);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CSharpPing*))(Il2CppBase() + 0x50C4FC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Dispose() {
		return ((T (*)(CSharpPing*))(Il2CppBase() + 0x50C5078))(this);
	}

};

}
