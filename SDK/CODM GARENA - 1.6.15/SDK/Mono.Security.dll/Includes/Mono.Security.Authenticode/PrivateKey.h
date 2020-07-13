#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Authenticode {

class PrivateKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Authenticode", "PrivateKey"));
	}

	template <typename T = bool> T& encrypted() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rsa() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& weak() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& keyType() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_RSA() {
		return ((T (*)(PrivateKey*))(Il2CppBase() + 0x47CB784))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DeriveKey(Il2CppArray<uintptr_t>* salt, Il2CppString* password) {
		return ((T (*)(PrivateKey*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x47CB78C))(this, salt, password);
	}
	template <typename T = bool> T Decode(Il2CppArray<uintptr_t>* pvk, Il2CppString* password) {
		return ((T (*)(PrivateKey*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x47CB1B4))(this, pvk, password);
	}
	template <typename T = uintptr_t> static T CreateFromFile(Il2CppString* filename) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47CBA78))(0, filename);
	}
	template <typename T = uintptr_t> static T CreateFromFile_1(Il2CppString* filename, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47CBA80))(0, filename, password);
	}

};

}
