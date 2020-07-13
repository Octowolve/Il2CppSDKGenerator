#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class CustomAttributeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "CustomAttributeData"));
	}

	template <typename T = uintptr_t> T& ctorInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& ctorArgs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& namedArgs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Constructor() {
		return ((T (*)(CustomAttributeData*))(Il2CppBase() + 0x45647EC))(this);
	}
	template <typename T = void*> T get_ConstructorArguments() {
		return ((T (*)(CustomAttributeData*))(Il2CppBase() + 0x45647F4))(this);
	}
	template <typename T = void*> T get_NamedArguments() {
		return ((T (*)(CustomAttributeData*))(Il2CppBase() + 0x45647FC))(this);
	}
	template <typename T = void*> static T GetCustomAttributes(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4564804))(0, target);
	}
	template <typename T = void*> static T GetCustomAttributes_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45648A4))(0, target);
	}
	template <typename T = void*> static T GetCustomAttributes_2(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4564944))(0, target);
	}
	template <typename T = void*> static T GetCustomAttributes_3(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45649E4))(0, target);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CustomAttributeData*))(Il2CppBase() + 0x4564A84))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T UnboxValues(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E42FB4))(0, values);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(CustomAttributeData*, uintptr_t))(Il2CppBase() + 0x45655B4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CustomAttributeData*))(Il2CppBase() + 0x4565F90))(this);
	}

};

}
