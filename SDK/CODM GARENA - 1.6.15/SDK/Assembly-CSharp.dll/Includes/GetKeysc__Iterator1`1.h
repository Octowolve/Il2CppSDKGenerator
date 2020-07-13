#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetKeyscIterator11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetKeys>c__Iterator1`1"));
	}

	template <typename T = uintptr_t> T& L__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& translator__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& oldTop__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& v__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $this() {
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
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F668))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorT_get_Current() {
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F810))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F818))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F820))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F834))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F8C8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(GetKeyscIterator11*))(Il2CppBase() + 0x518F8FC))(this);
	}

};

}
