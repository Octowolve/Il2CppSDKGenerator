#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "Enumerator"));
	}

	template <typename T = uintptr_t> T& m_Outer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CurrentIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x468EC44))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x468EC74))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x468ECBC))(this);
	}

};

}
