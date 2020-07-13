#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpandArraycIterator25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "", "<ExpandArray>c__Iterator25"));
	}

	template <typename T = uintptr_t> T& o() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& n__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $s_86__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& obj__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $s_87__3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& oo__4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $o() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CE46C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CE474))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CE47C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableobject_GetEnumerator() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CE480))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CE55C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CECC8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ExpandArraycIterator25*))(Il2CppBase() + 0x51CEEC8))(this);
	}

};

}
