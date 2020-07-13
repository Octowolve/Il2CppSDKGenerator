#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.NetworkInformation {

class Ping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.NetworkInformation", "Ping"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& PingBinPaths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PingBinPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& default_buffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& canSendPrivileged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Ping*))(Il2CppBase() + 0x3E4BA14))(this);
	}
	template <typename T = int32_t> static T capget(uintptr_t header, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E4BA18))(0, header, data);
	}
	template <typename T = void> static T CheckLinuxCapabilities() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E4B6D4))(0);
	}
	template <typename T = uintptr_t> static T GetNonLoopbackIP() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E4BB00))(0);
	}
	template <typename T = uintptr_t> T Send(uintptr_t address, int32_t timeout, Il2CppArray<uintptr_t>* buffer, uintptr_t options) {
		return ((T (*)(Ping*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E4BCAC))(this, address, timeout, buffer, options);
	}
	template <typename T = uintptr_t> T SendPrivileged(uintptr_t address, int32_t timeout, Il2CppArray<uintptr_t>* buffer, uintptr_t options) {
		return ((T (*)(Ping*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E4BEEC))(this, address, timeout, buffer, options);
	}
	template <typename T = uintptr_t> T SendUnprivileged(uintptr_t address, int32_t timeout, Il2CppArray<uintptr_t>* buffer, uintptr_t options) {
		return ((T (*)(Ping*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3E4C840))(this, address, timeout, buffer, options);
	}
	template <typename T = Il2CppString*> T BuildPingArgs(uintptr_t address, int32_t timeout, uintptr_t options) {
		return ((T (*)(Ping*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E4E240))(this, address, timeout, options);
	}

};

}
