#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseIfUnselectedcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CloseIfUnselected>c__Iterator1"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(CloseIfUnselectedcIterator1*))(Il2CppBase() + 0x2F874C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CloseIfUnselectedcIterator1*))(Il2CppBase() + 0x2F87644))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CloseIfUnselectedcIterator1*))(Il2CppBase() + 0x2F8764C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CloseIfUnselectedcIterator1*))(Il2CppBase() + 0x2F87654))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CloseIfUnselectedcIterator1*))(Il2CppBase() + 0x2F87668))(this);
	}

};

}
