#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class GeneralNames
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "GeneralNames"));
	}

	template <typename T = uintptr_t> T& rfc822Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& dnsName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& directoryNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& uris() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ipAddr() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_DNSNames() {
		return ((T (*)(GeneralNames*))(Il2CppBase() + 0x4BFD598))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_IPAddresses() {
		return ((T (*)(GeneralNames*))(Il2CppBase() + 0x4BFD6C0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GeneralNames*))(Il2CppBase() + 0x4BFD7E8))(this);
	}

};

}
