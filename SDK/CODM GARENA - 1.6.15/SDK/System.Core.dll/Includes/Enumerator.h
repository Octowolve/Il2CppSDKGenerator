#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "Enumerator"));
	}

	template <typename T = void*> T& hashset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& next() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& stamp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4C1F6D8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4C1F6E0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4C1F800))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4C1F810))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4C1F824))(this);
	}
	template <typename T = void> T CheckState() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x4C1F830))(this);
	}

};

}
