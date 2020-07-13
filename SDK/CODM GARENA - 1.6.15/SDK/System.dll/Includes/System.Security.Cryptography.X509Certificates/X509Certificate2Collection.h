#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Certificate2Collection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Certificate2Collection"));
	}


	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(X509Certificate2Collection*, int32_t))(Il2CppBase() + 0x3E80A2C))(this, index);
	}
	template <typename T = int32_t> T Add(uintptr_t certificate) {
		return ((T (*)(X509Certificate2Collection*, uintptr_t))(Il2CppBase() + 0x3E572E4))(this, certificate);
	}
	template <typename T = void> T AddRange(uintptr_t certificates) {
		return ((T (*)(X509Certificate2Collection*, uintptr_t))(Il2CppBase() + 0x3E8093C))(this, certificates);
	}
	template <typename T = bool> T Contains(uintptr_t certificate) {
		return ((T (*)(X509Certificate2Collection*, uintptr_t))(Il2CppBase() + 0x3E80B94))(this, certificate);
	}
	template <typename T = uintptr_t> T Find(uintptr_t findType, uintptr_t findValue, bool validOnly) {
		return ((T (*)(X509Certificate2Collection*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3E80EF8))(this, findType, findValue, validOnly);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(X509Certificate2Collection*))(Il2CppBase() + 0x3E82ABC))(this);
	}

};

}
