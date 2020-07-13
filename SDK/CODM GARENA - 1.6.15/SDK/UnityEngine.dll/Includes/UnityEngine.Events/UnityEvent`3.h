#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityEvent3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityEvent`3"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_InvokeArray() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T AddListener(void* call) {
		return ((T (*)(UnityEvent3*, void*))(Il2CppBase() + 0x5189E44))(this, call);
	}
	template <typename T = void> T RemoveListener(void* call) {
		return ((T (*)(UnityEvent3*, void*))(Il2CppBase() + 0x5189E90))(this, call);
	}
	template <typename T = uintptr_t> T FindMethod_Impl(Il2CppString* name, uintptr_t targetObj) {
		return ((T (*)(UnityEvent3*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5189EF4))(this, name, targetObj);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t target, uintptr_t theFunction) {
		return ((T (*)(UnityEvent3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x518A108))(this, target, theFunction);
	}
	template <typename T = uintptr_t> static T GetDelegate_1(void* action) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x518A164))(0, action);
	}
	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(UnityEvent3*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x518A1DC))(this, arg0, arg1, arg2);
	}

};

}
