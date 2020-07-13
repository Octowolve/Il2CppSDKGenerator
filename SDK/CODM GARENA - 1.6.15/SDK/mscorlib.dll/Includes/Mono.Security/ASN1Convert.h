#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class ASN1Convert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security", "ASN1Convert"));
	}


	template <typename T = uintptr_t> static T FromInt32_1(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FA0E8C))(0, value);
	}
	template <typename T = uintptr_t> static T FromOid_1(Il2CppString* oid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FA109C))(0, oid);
	}
	template <typename T = int32_t> static T ToInt32_1(uintptr_t asn1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA11D0))(0, asn1);
	}
	template <typename T = Il2CppString*> static T ToOid_1(uintptr_t asn1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA134C))(0, asn1);
	}
	template <typename T = uintptr_t> static T ToDateTime_1(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA16FC))(0, time);
	}

};

}
