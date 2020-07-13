#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class SafeBag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "SafeBag"));
	}

	template <typename T = Il2CppString*> T& _bagOID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _asn1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_BagOID() {
		return ((T (*)(SafeBag*))(Il2CppBase() + 0x4C02A30))(this);
	}
	template <typename T = uintptr_t> T get_ASN1() {
		return ((T (*)(SafeBag*))(Il2CppBase() + 0x4C02A38))(this);
	}

};

}
