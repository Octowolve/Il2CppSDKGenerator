#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class CachedInvokableCall1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "CachedInvokableCall`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_Arg1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(CachedInvokableCall1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5116AA8))(this, args);
	}

};

}
