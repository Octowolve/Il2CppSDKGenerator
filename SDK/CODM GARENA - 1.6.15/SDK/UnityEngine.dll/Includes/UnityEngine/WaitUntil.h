#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WaitUntil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WaitUntil"));
	}

	template <typename T = void*> T& m_Predicate() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_keepWaiting() {
		return ((T (*)(WaitUntil*))(Il2CppBase() + 0x4D3DF14))(this);
	}

};

}
