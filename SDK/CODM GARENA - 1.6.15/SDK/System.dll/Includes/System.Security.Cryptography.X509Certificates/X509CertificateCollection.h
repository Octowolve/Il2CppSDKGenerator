#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509CertificateCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509CertificateCollection"));
	}


	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(X509CertificateCollection*, int32_t))(Il2CppBase() + 0x3E519D4))(this, index);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x3E83378))(this, value);
	}
	template <typename T = void> T AddRange(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(X509CertificateCollection*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E83250))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x3E525F4))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x3E8356C))(this);
	}

};

}
