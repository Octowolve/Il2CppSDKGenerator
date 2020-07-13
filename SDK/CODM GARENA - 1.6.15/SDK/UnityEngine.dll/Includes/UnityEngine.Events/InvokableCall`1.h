#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class InvokableCall1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "InvokableCall`1"));
	}

	template <typename T = void*> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T add_Delegate(void* value) {
		return ((T (*)(InvokableCall1*, void*))(Il2CppBase() + 0x51176FC))(this, value);
	}
	template <typename T = void> T remove_Delegate(void* value) {
		return ((T (*)(InvokableCall1*, void*))(Il2CppBase() + 0x511776C))(this, value);
	}
	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(InvokableCall1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51177DC))(this, args);
	}
	template <typename T = bool> T Find(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(InvokableCall1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5117950))(this, targetObj, method);
	}

};

}
