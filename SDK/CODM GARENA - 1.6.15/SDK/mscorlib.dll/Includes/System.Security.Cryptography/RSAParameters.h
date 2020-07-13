#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RSAParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RSAParameters"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& P() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Q() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& D() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DP() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DQ() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& InverseQ() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Modulus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Exponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
