#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class TypeExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "TypeExtensions"));
	}


	template <typename T = uintptr_t> static T MemberType(uintptr_t memberInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF4668))(0, memberInfo);
	}
	template <typename T = bool> static T ContainsGenericParameters(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DFACC0))(0, type);
	}
	template <typename T = bool> static T IsInterface(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE6290))(0, type);
	}
	template <typename T = bool> static T IsGenericType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF5744))(0, type);
	}
	template <typename T = bool> static T IsGenericTypeDefinition(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE62BC))(0, type);
	}
	template <typename T = uintptr_t> static T BaseType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF5EDC))(0, type);
	}
	template <typename T = bool> static T IsEnum(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE45F0))(0, type);
	}
	template <typename T = bool> static T IsClass(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF5D7C))(0, type);
	}
	template <typename T = bool> static T IsSealed(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DFACF8))(0, type);
	}
	template <typename T = bool> static T IsAbstract(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE62F4))(0, type);
	}
	template <typename T = bool> static T IsValueType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF54B4))(0, type);
	}
	template <typename T = bool> static T AssignableToTypeName(uintptr_t type, Il2CppString* fullTypeName, uintptr_t* match) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4DFAD24))(0, type, fullTypeName, match);
	}
	template <typename T = bool> static T AssignableToTypeName_1(uintptr_t type, Il2CppString* fullTypeName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DFAF34))(0, type, fullTypeName);
	}
	template <typename T = bool> static T ImplementInterface(uintptr_t type, uintptr_t interfaceType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFAF58))(0, type, interfaceType);
	}

};

}
