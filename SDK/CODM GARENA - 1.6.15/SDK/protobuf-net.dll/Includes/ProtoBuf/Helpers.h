#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class Helpers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "Helpers"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T BlockCopy(Il2CppArray<uintptr_t>* from, int32_t fromIndex, Il2CppArray<uintptr_t>* to, int32_t toIndex, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x505FF20))(0, from, fromIndex, to, toIndex, count);
	}
	template <typename T = bool> static T IsInfinity(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x5060B18))(0, value);
	}
	template <typename T = uintptr_t> static T GetInstanceMethod(uintptr_t declaringType, Il2CppString* name, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5060B24))(0, declaringType, name, types);
	}
	template <typename T = bool> static T IsInfinity_1(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x5060C28))(0, value);
	}
	template <typename T = uintptr_t> static T GetTypeCode(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5060C4C))(0, type);
	}
	template <typename T = uintptr_t> static T GetUnderlyingType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5060F3C))(0, type);
	}
	template <typename T = bool> static T IsEnum(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5060F48))(0, type);
	}
	template <typename T = uintptr_t> static T GetConstructor(uintptr_t type, Il2CppArray<uintptr_t>* parameterTypes, bool nonPublic) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x5060F74))(0, type, parameterTypes, nonPublic);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBuffer(uintptr_t ms) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x505FF54))(0, ms);
	}

};

}
