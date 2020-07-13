#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityEvent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityEvent`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_InvokeArray() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T AddListener(void* call) {
		return ((T (*)(UnityEvent1*, void*))(Il2CppBase() + 0x5187A7C))(this, call);
	}
	template <typename T = void> T RemoveListener(void* call) {
		return ((T (*)(UnityEvent1*, void*))(Il2CppBase() + 0x5187AC8))(this, call);
	}
	template <typename T = uintptr_t> T FindMethod_Impl(Il2CppString* name, uintptr_t targetObj) {
		return ((T (*)(UnityEvent1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5187B2C))(this, name, targetObj);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t target, uintptr_t theFunction) {
		return ((T (*)(UnityEvent1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5187C88))(this, target, theFunction);
	}
	template <typename T = uintptr_t> static T GetDelegate_1(void* action) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x5187CE4))(0, action);
	}
	template <typename T = void> T Invoke(uintptr_t arg0) {
		return ((T (*)(UnityEvent1*, uintptr_t))(Il2CppBase() + 0x5187D5C))(this, arg0);
	}

};

}
