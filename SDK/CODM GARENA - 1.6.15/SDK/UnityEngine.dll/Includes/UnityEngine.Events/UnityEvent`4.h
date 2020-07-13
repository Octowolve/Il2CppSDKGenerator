#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityEvent4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityEvent`4"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_InvokeArray() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T FindMethod_Impl(Il2CppString* name, uintptr_t targetObj) {
		return ((T (*)(UnityEvent4*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x518A3B4))(this, name, targetObj);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t target, uintptr_t theFunction) {
		return ((T (*)(UnityEvent4*, uintptr_t, uintptr_t))(Il2CppBase() + 0x518A624))(this, target, theFunction);
	}

};

}
