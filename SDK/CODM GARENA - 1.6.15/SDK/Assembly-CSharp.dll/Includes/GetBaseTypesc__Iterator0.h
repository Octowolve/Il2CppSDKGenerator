#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBaseTypescIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBaseTypes>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& baseType__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& t__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A358DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A35CA4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A35CAC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A35CB4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A35DDC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A35E70))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableobject_GetEnumerator() {
		return ((T (*)(GetBaseTypescIterator0*))(Il2CppBase() + 0x4A35E74))(this);
	}

};

}
