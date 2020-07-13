#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class BitConverterLE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security", "BitConverterLE"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GetUShortBytes(uintptr_t bytes) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA1F34))(0, bytes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetUIntBytes_1(uintptr_t bytes) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA209C))(0, bytes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetULongBytes(uintptr_t bytes) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FA2274))(0, bytes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_1(int16_t value) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x3FA252C))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_2(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FA107C))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_3(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3FA254C))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x3FA256C))(0, value);
	}
	template <typename T = void> static T UShortFromBytes(uintptr_t dst, Il2CppArray<uintptr_t>* src, int32_t startIndex) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA2588))(0, dst, src, startIndex);
	}
	template <typename T = void> static T UIntFromBytes_1(uintptr_t dst, Il2CppArray<uintptr_t>* src, int32_t startIndex) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA26D0))(0, dst, src, startIndex);
	}
	template <typename T = void> static T ULongFromBytes(uintptr_t dst, Il2CppArray<uintptr_t>* src, int32_t startIndex) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA28A8))(0, dst, src, startIndex);
	}
	template <typename T = int16_t> static T ToInt16(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA2A00))(0, value, startIndex);
	}
	template <typename T = int32_t> static T ToInt32_1(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA2A34))(0, value, startIndex);
	}
	template <typename T = float> static T ToSingle(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA2A68))(0, value, startIndex);
	}
	template <typename T = double> static T ToDouble(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3FA2A9C))(0, value, startIndex);
	}

};

}
