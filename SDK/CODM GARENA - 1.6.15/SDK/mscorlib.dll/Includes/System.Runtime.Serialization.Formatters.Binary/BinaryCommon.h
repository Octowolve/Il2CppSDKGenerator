#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class BinaryCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "BinaryCommon"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& BinaryHeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _typeCodesToType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _typeCodeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& UseReflectionSerialization() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T IsPrimitive(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3016D08))(0, type);
	}
	template <typename T = unsigned char> static T GetTypeCode(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3016F2C))(0, type);
	}
	template <typename T = uintptr_t> static T GetTypeFromCode(int32_t code) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30170C4))(0, code);
	}
	template <typename T = void> static T CheckSerializable(uintptr_t type, uintptr_t selector, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30171A8))(0, type, selector, context);
	}
	template <typename T = void> static T SwapBytes(Il2CppArray<uintptr_t>* byteArray, int32_t size, int32_t dataSize) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x30173B8))(0, byteArray, size, dataSize);
	}

};

}
