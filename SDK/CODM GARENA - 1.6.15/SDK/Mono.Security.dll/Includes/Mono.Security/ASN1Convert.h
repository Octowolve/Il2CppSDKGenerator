#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class ASN1Convert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security", "ASN1Convert"));
	}


	template <typename T = uintptr_t> static T FromInt32(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47C9FDC))(0, value);
	}
	template <typename T = uintptr_t> static T FromOid(Il2CppString* oid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47CA1EC))(0, oid);
	}
	template <typename T = int32_t> static T ToInt32(uintptr_t asn1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47CA320))(0, asn1);
	}
	template <typename T = Il2CppString*> static T ToOid(uintptr_t asn1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47CA49C))(0, asn1);
	}
	template <typename T = uintptr_t> static T ToDateTime(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47CA84C))(0, time);
	}

};

}
