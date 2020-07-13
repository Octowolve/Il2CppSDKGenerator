#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class InvokableCall3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "InvokableCall`3"));
	}

	template <typename T = void*> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T add_Delegate(void* value) {
		return ((T (*)(InvokableCall3*, void*))(Il2CppBase() + 0x5119A38))(this, value);
	}
	template <typename T = void> T remove_Delegate(void* value) {
		return ((T (*)(InvokableCall3*, void*))(Il2CppBase() + 0x5119AA8))(this, value);
	}
	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(InvokableCall3*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5119B18))(this, args);
	}
	template <typename T = bool> T Find(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(InvokableCall3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5119D78))(this, targetObj, method);
	}

};

}
