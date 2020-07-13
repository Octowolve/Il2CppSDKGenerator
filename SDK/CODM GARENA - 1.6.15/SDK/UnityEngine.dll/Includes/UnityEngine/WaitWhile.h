#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WaitWhile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WaitWhile"));
	}

	template <typename T = void*> T& m_Predicate() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_keepWaiting() {
		return ((T (*)(WaitWhile*))(Il2CppBase() + 0x4D3DFD0))(this);
	}

};

}
