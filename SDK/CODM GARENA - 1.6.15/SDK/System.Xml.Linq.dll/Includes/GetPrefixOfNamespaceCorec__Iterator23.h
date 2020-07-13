#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPrefixOfNamespaceCorecIterator23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "", "<GetPrefixOfNamespaceCore>c__Iterator23"));
	}

	template <typename T = uintptr_t> T& el__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $s_68__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& a__2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ns() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $ns() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppString*> T System_Collections_Generic_IEnumeratorstring_get_Current() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51C9970))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51C9978))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51C9980))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerablestring_GetEnumerator() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51C9984))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51C9A68))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51CA038))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetPrefixOfNamespaceCorecIterator23*))(Il2CppBase() + 0x51CA138))(this);
	}

};

}
