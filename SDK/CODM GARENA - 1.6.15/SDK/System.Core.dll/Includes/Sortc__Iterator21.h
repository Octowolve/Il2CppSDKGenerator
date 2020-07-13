#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortcIterator21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<Sort>c__Iterator21"));
	}

	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& context() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& sorter__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $context() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTElement_get_Current() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDC64))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDC6C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDC74))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTElement_GetEnumerator() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDCA8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDD4C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDE9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SortcIterator21*))(Il2CppBase() + 0x49CDEA8))(this);
	}

};

}
