#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Coroutine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Coroutine"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T ReleaseCoroutine() {
		return ((T (*)(Coroutine*))(Il2CppBase() + 0x4DA3490))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Coroutine*))(Il2CppBase() + 0x4DA3528))(this);
	}

};

}
