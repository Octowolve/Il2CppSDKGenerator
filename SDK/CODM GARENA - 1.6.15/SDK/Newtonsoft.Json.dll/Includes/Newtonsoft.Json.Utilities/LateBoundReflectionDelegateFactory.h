#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class LateBoundReflectionDelegateFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DF1BC4))(0);
	}
	template <typename T = void*> T CreateParameterizedConstructor(uintptr_t method) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x4DF1C74))(this, method);
	}
	template <typename T = void*> T CreateMethodCall(uintptr_t method) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x1B6F874))(this, method);
	}
	template <typename T = void*> T CreateDefaultConstructor(uintptr_t type) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x21DEAF0))(this, type);
	}
	template <typename T = void*> T CreateGet(uintptr_t propertyInfo) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x21DED9C))(this, propertyInfo);
	}
	template <typename T = void*> T CreateGet_1(uintptr_t fieldInfo) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x21DEC84))(this, fieldInfo);
	}
	template <typename T = void*> T CreateSet(uintptr_t fieldInfo) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x1B7C0C0))(this, fieldInfo);
	}
	template <typename T = void*> T CreateSet_1(uintptr_t propertyInfo) {
		return ((T (*)(LateBoundReflectionDelegateFactory*, uintptr_t))(Il2CppBase() + 0x1B7C1D8))(this, propertyInfo);
	}

};

}
