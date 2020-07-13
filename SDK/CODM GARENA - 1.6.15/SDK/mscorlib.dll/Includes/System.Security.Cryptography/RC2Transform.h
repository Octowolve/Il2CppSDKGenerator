#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RC2Transform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RC2Transform"));
	}

	template <typename T = uint16_t> T& R0() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint16_t> T& R1() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uint16_t> T& R2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint16_t> T& R3() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& K() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& pitable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ECB(Il2CppArray<uintptr_t>* input, Il2CppArray<uintptr_t>* output) {
		return ((T (*)(RC2Transform*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3047594))(this, input, output);
	}

};

}
