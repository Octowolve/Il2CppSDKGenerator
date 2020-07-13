#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityEvent2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityEvent`2"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_InvokeArray() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T FindMethod_Impl(Il2CppString* name, uintptr_t targetObj) {
		return ((T (*)(UnityEvent2*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5188F38))(this, name, targetObj);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t target, uintptr_t theFunction) {
		return ((T (*)(UnityEvent2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51890F0))(this, target, theFunction);
	}
	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(UnityEvent2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x518914C))(this, arg0, arg1);
	}

};

}
