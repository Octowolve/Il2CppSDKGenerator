#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class TypeExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "TypeExtensions"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsValueType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC91B0))(0, type);
	}
	template <typename T = bool> static T IsEnum(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC91DC))(0, type);
	}
	template <typename T = bool> static T IsPrimitive(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC9208))(0, type);
	}
	template <typename T = bool> static T IsAbstract(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC9234))(0, type);
	}
	template <typename T = bool> static T IsSealed(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC9260))(0, type);
	}
	template <typename T = bool> static T IsInterface(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC928C))(0, type);
	}
	template <typename T = bool> static T IsClass(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC92B8))(0, type);
	}
	template <typename T = uintptr_t> static T BaseType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC92E4))(0, type);
	}
	template <typename T = bool> static T IsGenericType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC931C))(0, type);
	}
	template <typename T = bool> static T IsGenericTypeDefinition(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC9354))(0, type);
	}
	template <typename T = bool> static T IsNestedPublic(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC938C))(0, type);
	}
	template <typename T = bool> static T IsPublic(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC93B8))(0, type);
	}
	template <typename T = Il2CppString*> static T GetFriendlyName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC93E4))(0, type);
	}

};

}
