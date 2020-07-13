#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509Extension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.X509", "X509Extension"));
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

	template <typename T = void> T Decode_1() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x3FC3F24))(this);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(X509Extension*, uintptr_t))(Il2CppBase() + 0x3FC3F28))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode_1() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x3FC4118))(this);
	}
	template <typename T = void> T WriteLine_1(uintptr_t sb, int32_t n, int32_t pos) {
		return ((T (*)(X509Extension*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3FC4144))(this, sb, n, pos);
	}
	template <typename T = Il2CppString*> T ToString_1() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x3FC4428))(this);
	}

};

}
