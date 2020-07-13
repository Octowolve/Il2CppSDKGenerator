#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class MD5SHA1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "MD5SHA1"));
	}

	template <typename T = uintptr_t> T& md5() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hashing() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MD5SHA1*))(Il2CppBase() + 0x47D0E48))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(MD5SHA1*))(Il2CppBase() + 0x47D0EA4))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* array, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(MD5SHA1*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47D1068))(this, array, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CreateSignature(uintptr_t rsa) {
		return ((T (*)(MD5SHA1*, uintptr_t))(Il2CppBase() + 0x47D10F4))(this, rsa);
	}
	template <typename T = bool> T VerifySignature(uintptr_t rsa, Il2CppArray<uintptr_t>* rgbSignature) {
		return ((T (*)(MD5SHA1*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D1298))(this, rsa, rgbSignature);
	}

};

}
