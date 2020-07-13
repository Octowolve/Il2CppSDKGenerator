#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Activation {

class ActivationServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "ActivationServices"));
	}

	template <typename T = uintptr_t> static T& _constructionActivator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_ConstructionActivator() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B1A934))(0);
	}
	template <typename T = uintptr_t> static T CreateProxyFromAttributes(uintptr_t type, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B1AA0C))(0, type, activationAttributes);
	}
	template <typename T = uintptr_t> static T CreateConstructionCall(uintptr_t type, Il2CppString* activationUrl, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B1B450))(0, type, activationUrl, activationAttributes);
	}
	template <typename T = uintptr_t> static T AllocateUninitializedClassInstance(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B1C09C))(0, type);
	}
	template <typename T = void> static T EnableProxyActivation(uintptr_t type, bool enable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4B1C0A4))(0, type, enable);
	}

};

}
