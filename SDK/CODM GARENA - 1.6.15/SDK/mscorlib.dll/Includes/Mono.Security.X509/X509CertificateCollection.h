#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509CertificateCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.X509", "X509CertificateCollection"));
	}


	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator_1() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x3FC354C))(this);
	}
	template <typename T = uintptr_t> T get_Item_1(int32_t index) {
		return ((T (*)(X509CertificateCollection*, int32_t))(Il2CppBase() + 0x3FC3584))(this, index);
	}
	template <typename T = int32_t> T Add_1(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x3FBA250))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator_1() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x3FBB4AC))(this);
	}
	template <typename T = int32_t> T GetHashCode_1() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x3FC3740))(this);
	}

};

}
