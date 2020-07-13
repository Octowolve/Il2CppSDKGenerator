#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class CryptoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "CryptoConfig"));
	}

	template <typename T = uintptr_t> static T& lockObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& algorithms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& oid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x303597C))(0);
	}
	template <typename T = uintptr_t> static T CreateFromName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3036CE0))(0, name);
	}
	template <typename T = uintptr_t> static T CreateFromName_1(Il2CppString* name, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3036D84))(0, name, args);
	}
	template <typename T = Il2CppString*> static T MapNameToOID(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3037238))(0, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T EncodeOID(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x303759C))(0, str);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T EncodeLongNumber(int64_t x) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3037BF0))(0, x);
	}

};

}
