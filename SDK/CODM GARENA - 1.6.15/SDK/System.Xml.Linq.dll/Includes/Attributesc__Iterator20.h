#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttributescIterator20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "", "<Attributes>c__Iterator20"));
	}

	template <typename T = uintptr_t> T& a__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& next__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Xml_Linq_XAttribute_get_Current() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C9760))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C9768))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C9770))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Xml_Linq_XAttribute_GetEnumerator() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C9774))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C9850))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C98D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AttributescIterator20*))(Il2CppBase() + 0x51C98DC))(this);
	}

};

}
