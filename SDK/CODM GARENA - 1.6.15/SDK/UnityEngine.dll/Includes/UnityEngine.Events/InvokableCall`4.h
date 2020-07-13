#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class InvokableCall4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "InvokableCall`4"));
	}

	template <typename T = void*> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(InvokableCall4*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5119F20))(this, args);
	}
	template <typename T = bool> T Find(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(InvokableCall4*, uintptr_t, uintptr_t))(Il2CppBase() + 0x511A1F4))(this, targetObj, method);
	}

};

}
