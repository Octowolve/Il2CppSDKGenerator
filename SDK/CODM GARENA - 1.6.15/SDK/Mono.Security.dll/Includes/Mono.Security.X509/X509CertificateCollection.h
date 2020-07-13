#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509CertificateCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509CertificateCollection"));
	}


	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x4C0FEBC))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(X509CertificateCollection*, int32_t))(Il2CppBase() + 0x4BF5788))(this, index);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x4C03098))(this, value);
	}
	template <typename T = void> T AddRange(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x4C0FD80))(this, value);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x4C0FEF4))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x4C0411C))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(X509CertificateCollection*))(Il2CppBase() + 0x4C101A8))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x4C0FF14))(this, value);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(X509CertificateCollection*, uintptr_t))(Il2CppBase() + 0x4C1027C))(this, value);
	}
	template <typename T = bool> T Compare(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(X509CertificateCollection*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C101E0))(this, array1, array2);
	}

};

}
