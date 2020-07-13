#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetKeyscIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetKeys>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& L__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& translator__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& oldTop__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF47698))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF477C8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF477D0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF477D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF477EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF47880))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableobject_GetEnumerator() {
		return ((T (*)(GetKeyscIterator0*))(Il2CppBase() + 0xF47884))(this);
	}

};

}
