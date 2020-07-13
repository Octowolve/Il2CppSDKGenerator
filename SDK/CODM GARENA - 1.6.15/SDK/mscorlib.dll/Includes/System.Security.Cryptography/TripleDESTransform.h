#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class TripleDESTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "TripleDESTransform"));
	}

	template <typename T = uintptr_t> T& E1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& D2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& E3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& D1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& E2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& D3() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T ECB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(TripleDESTransform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427C0D8))(this, input, output);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStrongKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x427BABC))(0);
	}

};

}
