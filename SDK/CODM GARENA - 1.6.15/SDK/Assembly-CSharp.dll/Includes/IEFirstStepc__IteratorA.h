#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEFirstStepcIteratorA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IEFirstStep>c__IteratorA"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(IEFirstStepcIteratorA*))(Il2CppBase() + 0x297C9F4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IEFirstStepcIteratorA*))(Il2CppBase() + 0x297D080))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IEFirstStepcIteratorA*))(Il2CppBase() + 0x297D088))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IEFirstStepcIteratorA*))(Il2CppBase() + 0x297D090))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IEFirstStepcIteratorA*))(Il2CppBase() + 0x297D0A4))(this);
	}

};

}
