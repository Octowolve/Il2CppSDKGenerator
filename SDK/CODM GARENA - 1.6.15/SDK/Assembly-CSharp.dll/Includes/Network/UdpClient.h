#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UdpClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UdpClient"));
	}

	template <typename T = uintptr_t> T& Client() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_CleanedUp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Active() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FreeResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_Client() {
		return ((T (*)(UdpClient*))(Il2CppBase() + 0x439E3E4))(this);
	}
	template <typename T = void> T set_Client(uintptr_t value) {
		return ((T (*)(UdpClient*, uintptr_t))(Il2CppBase() + 0x439E3DC))(this, value);
	}
	template <typename T = void> T Connect(uintptr_t endPoint) {
		return ((T (*)(UdpClient*, uintptr_t))(Il2CppBase() + 0x439E3EC))(this, endPoint);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UdpClient*))(Il2CppBase() + 0x439E580))(this);
	}
	template <typename T = bool> T CanSend() {
		return ((T (*)(UdpClient*))(Il2CppBase() + 0x439E634))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UdpClient*))(Il2CppBase() + 0x439E7A4))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(UdpClient*, bool))(Il2CppBase() + 0x439E858))(this, disposing);
	}
	template <typename T = void> T FreeResources() {
		return ((T (*)(UdpClient*))(Il2CppBase() + 0x439E97C))(this);
	}

};

}
