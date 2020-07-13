#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class BitConverterLE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security", "BitConverterLE"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GetUIntBytes(uintptr_t bytes) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47CBD78))(0, bytes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47CA1CC))(0, value);
	}
	template <typename T = void> static T UIntFromBytes(uintptr_t dst, Il2CppArray<uintptr_t>* src, int32_t startIndex) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CBF50))(0, dst, src, startIndex);
	}
	template <typename T = int32_t> static T ToInt32(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CB988))(0, value, startIndex);
	}
	template <typename T = uint32_t> static T ToUInt32(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x47CB954))(0, value, startIndex);
	}

};

}
