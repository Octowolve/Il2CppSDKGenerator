#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RNGCryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RNGCryptoServiceProvider"));
	}

	template <typename T = uintptr_t> static T& _lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _handle() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Check() {
		return ((T (*)(RNGCryptoServiceProvider*))(Il2CppBase() + 0x426FEA4))(this);
	}
	template <typename T = bool> static T RngOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x4270048))(0);
	}
	template <typename T = uintptr_t> static T RngInitialize(Il2CppArray<uintptr_t>* seed) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426FE9C))(0, seed);
	}
	template <typename T = uintptr_t> static T RngGetBytes(uintptr_t handle, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427004C))(0, handle, data);
	}
	template <typename T = void> static T RngClose(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4270058))(0, handle);
	}
	template <typename T = void> T GetBytes(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RNGCryptoServiceProvider*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4270060))(this, data);
	}
	template <typename T = void> T GetNonZeroBytes(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RNGCryptoServiceProvider*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427028C))(this, data);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(RNGCryptoServiceProvider*))(Il2CppBase() + 0x42704A4))(this);
	}

};

}
