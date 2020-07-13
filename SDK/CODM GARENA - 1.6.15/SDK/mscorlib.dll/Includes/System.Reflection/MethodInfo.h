#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MethodInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MethodInfo"));
	}


	template <typename T = uintptr_t> T GetBaseDefinition() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x4FD2298))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x4FD22A0))(this);
	}
	template <typename T = uintptr_t> T MakeGenericMethod(Il2CppArray<uintptr_t>* typeArguments) {
		return ((T (*)(MethodInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD22A8))(this, typeArguments);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x4FD2378))(this);
	}
	template <typename T = bool> T get_IsGenericMethod() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x4FD2428))(this);
	}
	template <typename T = bool> T get_IsGenericMethodDefinition() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x4FD2430))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(MethodInfo*))(Il2CppBase() + 0x4FD2438))(this);
	}

};

}
