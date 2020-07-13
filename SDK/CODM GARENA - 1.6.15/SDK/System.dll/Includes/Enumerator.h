#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "Enumerator"));
	}

	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ptr() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4AD973C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4AD9908))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4AD9730))(this);
	}

};

}
