#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class ReflectionDelegateFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory"));
	}


	template <typename T = void*> T CreateGet(uintptr_t memberInfo) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x21DEEB4))(this, memberInfo);
	}
	template <typename T = void*> T CreateSet(uintptr_t memberInfo) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x1B7C2F0))(this, memberInfo);
	}
	template <typename T = void*> T CreateMethodCall(uintptr_t method) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, method);
	}
	template <typename T = void*> T CreateParameterizedConstructor(uintptr_t method) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, method);
	}
	template <typename T = void*> T CreateDefaultConstructor(uintptr_t type) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, type);
	}
	template <typename T = void*> T CreateGet_1(uintptr_t propertyInfo) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, propertyInfo);
	}
	template <typename T = void*> T CreateGet_2(uintptr_t fieldInfo) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, fieldInfo);
	}
	template <typename T = void*> T CreateSet_1(uintptr_t fieldInfo) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, fieldInfo);
	}
	template <typename T = void*> T CreateSet_2(uintptr_t propertyInfo) {
		return ((T (*)(ReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x0))(this, propertyInfo);
	}

};

}
