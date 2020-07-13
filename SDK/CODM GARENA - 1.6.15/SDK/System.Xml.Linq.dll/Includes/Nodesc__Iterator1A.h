#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NodescIterator1A
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "", "<Nodes>c__Iterator1A"));
	}

	template <typename T = uintptr_t> T& n__0() {
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

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Xml_Linq_XNode_get_Current() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C519C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C51A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C51AC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Xml_Linq_XNode_GetEnumerator() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C51B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C528C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C5314))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NodescIterator1A*))(Il2CppBase() + 0x51C5320))(this);
	}

};

}
