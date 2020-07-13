#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Extension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509Extension"));
	}

	template <typename T = Il2CppString*> T& extnOid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& extnCritical() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extnValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C13208))(this);
	}
	template <typename T = void> T Encode() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C1320C))(this);
	}
	template <typename T = Il2CppString*> T get_Oid() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C131F8))(this);
	}
	template <typename T = bool> T get_Critical() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C13200))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C131C4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(X509Extension*, uintptr_t))(Il2CppBase() + 0x4C13210))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C13400))(this);
	}
	template <typename T = void> T WriteLine(uintptr_t sb, int32_t n, int32_t pos) {
		return ((T (*)(X509Extension*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4C1342C))(this, sb, n, pos);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x4C13714))(this);
	}

};

}
