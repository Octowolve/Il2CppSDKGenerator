#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class InvokableCall2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "InvokableCall`2"));
	}

	template <typename T = void*> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(InvokableCall2*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5118BE0))(this, args);
	}
	template <typename T = bool> T Find(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(InvokableCall2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5118DC4))(this, targetObj, method);
	}

};

}
