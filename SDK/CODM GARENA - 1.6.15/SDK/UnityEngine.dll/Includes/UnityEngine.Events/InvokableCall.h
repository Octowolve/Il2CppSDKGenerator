#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class InvokableCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "InvokableCall"));
	}

	template <typename T = uintptr_t> T& Delegate() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T add_Delegate(uintptr_t value) {
		return ((T (*)(InvokableCall*, uintptr_t))(Il2CppBase() + 0x4DAA424))(this, value);
	}
	template <typename T = void> T remove_Delegate(uintptr_t value) {
		return ((T (*)(InvokableCall*, uintptr_t))(Il2CppBase() + 0x4DAA600))(this, value);
	}
	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(InvokableCall*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DAA7B4))(this, args);
	}
	template <typename T = bool> T Find(uintptr_t targetObj, uintptr_t method) {
		return ((T (*)(InvokableCall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAA884))(this, targetObj, method);
	}

};

}
