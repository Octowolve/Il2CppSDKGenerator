#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnumerateChildrencIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "<EnumerateChildren>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& n() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& nav__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& nav2__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $n() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $type() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521ECF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521ED00))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521ED08))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableobject_GetEnumerator() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521ED0C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521EDF0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521EF78))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EnumerateChildrencIterator0*))(Il2CppBase() + 0x521EF84))(this);
	}

};

}
