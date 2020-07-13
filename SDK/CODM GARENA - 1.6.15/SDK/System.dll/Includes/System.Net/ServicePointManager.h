#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ServicePointManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ServicePointManager"));
	}

	template <typename T = uintptr_t> static T& servicePoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& policy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& defaultConnectionLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& maxServicePointIdleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& maxServicePoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& _checkCRL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _securityProtocol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& expectContinue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> static T& useNagle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D);
	}
	template <typename T = uintptr_t> static T& server_cert_cb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_CertificatePolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E55104))(0);
	}
	template <typename T = bool> static T get_CheckCertificateRevocationList() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E530B4))(0);
	}
	template <typename T = uintptr_t> static T get_SecurityProtocol() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E551B4))(0);
	}
	template <typename T = uintptr_t> static T get_ServerCertificateValidationCallback() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E55264))(0);
	}
	template <typename T = void> static T set_ServerCertificateValidationCallback(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E55314))(0, value);
	}
	template <typename T = uintptr_t> static T FindServicePoint(uintptr_t address, uintptr_t proxy) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E553C8))(0, address, proxy);
	}
	template <typename T = void> static T RecycleServicePoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E55CB8))(0);
	}

};

}
