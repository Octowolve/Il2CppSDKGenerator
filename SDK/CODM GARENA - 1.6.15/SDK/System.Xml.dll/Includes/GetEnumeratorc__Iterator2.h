#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratorcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "<GetEnumerator>c__Iterator2"));
	}

	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetEnumeratorcIterator2*))(Il2CppBase() + 0x521F7EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratorcIterator2*))(Il2CppBase() + 0x521F7F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratorcIterator2*))(Il2CppBase() + 0x521F7FC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetEnumeratorcIterator2*))(Il2CppBase() + 0x521F88C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetEnumeratorcIterator2*))(Il2CppBase() + 0x521F898))(this);
	}

};

}
