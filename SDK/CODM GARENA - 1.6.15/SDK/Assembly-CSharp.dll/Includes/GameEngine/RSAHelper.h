#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RSAHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RSAHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& m_RSAPublicKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_RSACryptoServiceProvider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRSACryptoServiceProvider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Encrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Verify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRsaProviderFromPublicKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Comparebytearrays() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T GetRSACryptoServiceProvider() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E04D4C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Encrypt(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E0571C))(0, data);
	}
	template <typename T = bool> static T Verify(Il2CppArray<uintptr_t>* data, Il2CppArray<uintptr_t>* signature) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E05BFC))(0, data, signature);
	}
	template <typename T = uintptr_t> static T CreateRsaProviderFromPublicKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E04ECC))(0);
	}
	template <typename T = bool> static T Comparebytearrays(Il2CppArray<uintptr_t>* a, Il2CppArray<uintptr_t>* b) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E05D5C))(0, a, b);
	}

};

}
