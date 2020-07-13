#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class BaseInvokableCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "BaseInvokableCall"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(BaseInvokableCall*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, args);
	}
	template <typename T = void> static T ThrowOnInvalidArg(uintptr_t arg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x282E88C))(0, arg);
	}
	template <typename T = bool> static T AllowInvoke(uintptr_t delegate) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAA0E0))(0, delegate);
	}
	template <typename T = bool> T Find(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(BaseInvokableCall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, targetObj, method);
	}

};

}
