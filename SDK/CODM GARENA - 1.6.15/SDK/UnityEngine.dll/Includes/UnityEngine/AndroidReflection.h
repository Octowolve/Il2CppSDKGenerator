#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidReflection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidReflection"));
	}

	template <typename T = uintptr_t> static T& s_ReflectionHelperClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_ReflectionHelperGetConstructorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& s_ReflectionHelperGetMethodID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_ReflectionHelperGetFieldID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& s_ReflectionHelperNewProxyInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T IsPrimitive(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467B788))(0, t);
	}
	template <typename T = bool> static T IsAssignableFrom(uintptr_t t, uintptr_t from) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468146C))(0, t, from);
	}
	template <typename T = uintptr_t> static T GetStaticMethodID(Il2CppString* clazz, Il2CppString* methodName, Il2CppString* signature) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x468DC7C))(0, clazz, methodName, signature);
	}
	template <typename T = uintptr_t> static T GetConstructorMember(uintptr_t jclass, Il2CppString* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x467F4F0))(0, jclass, signature);
	}
	template <typename T = uintptr_t> static T GetMethodMember(uintptr_t jclass, Il2CppString* methodName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x467FA1C))(0, jclass, methodName, signature, isStatic);
	}
	template <typename T = uintptr_t> static T GetFieldMember(uintptr_t jclass, Il2CppString* fieldName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x46800C0))(0, jclass, fieldName, signature, isStatic);
	}
	template <typename T = uintptr_t> static T NewProxyInstance(int32_t delegateHandle, uintptr_t interfaze) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x467A5C8))(0, delegateHandle, interfaze);
	}

};

}
