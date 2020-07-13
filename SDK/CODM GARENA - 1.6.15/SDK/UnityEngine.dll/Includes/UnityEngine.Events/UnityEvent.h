#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityEvent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_InvokeArray() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AddListener(uintptr_t call) {
		return ((T (*)(UnityEvent*, uintptr_t))(Il2CppBase() + 0x4DAC240))(this, call);
	}
	template <typename T = void> T RemoveListener(uintptr_t call) {
		return ((T (*)(UnityEvent*, uintptr_t))(Il2CppBase() + 0x4DAC324))(this, call);
	}
	template <typename T = uintptr_t> T FindMethod_Impl(Il2CppString* name, uintptr_t targetObj) {
		return ((T (*)(UnityEvent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DAC3A4))(this, name, targetObj);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t target, uintptr_t theFunction) {
		return ((T (*)(UnityEvent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAC694))(this, target, theFunction);
	}
	template <typename T = uintptr_t> static T GetDelegate_1(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAC260))(0, action);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(UnityEvent*))(Il2CppBase() + 0x4DAC72C))(this);
	}

};

}
