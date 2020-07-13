#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllSceneObjectscIterator01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllSceneObjects>c__Iterator0`1"));
	}

	template <typename T = void*> T& queue__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& roots__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& root__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& comp__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $locvar2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& child__3() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $locvar3() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& comp__4() {
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
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B71ECC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorT_get_Current() {
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B72514))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B7251C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B72524))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B7264C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B726E0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(GetAllSceneObjectscIterator01*))(Il2CppBase() + 0x4B72714))(this);
	}

};

}
