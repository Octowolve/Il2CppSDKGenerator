#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratorcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetEnumerator>c__Iterator0"));
	}

	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratorcIterator0*))(Il2CppBase() + 0x472132C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorT_get_Current() {
		return ((T (*)(GetEnumeratorcIterator0*))(Il2CppBase() + 0x4721400))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratorcIterator0*))(Il2CppBase() + 0x4721408))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetEnumeratorcIterator0*))(Il2CppBase() + 0x4721410))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetEnumeratorcIterator0*))(Il2CppBase() + 0x4721424))(this);
	}

};

}
