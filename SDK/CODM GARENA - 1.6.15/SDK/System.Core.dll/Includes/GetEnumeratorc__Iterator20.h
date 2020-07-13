#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratorcIterator20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<GetEnumerator>c__Iterator20"));
	}

	template <typename T = void*> T& $s_124__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& g__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T System_Collections_Generic_IEnumeratorSystem_Linq_IGroupingTKey,TElement_get_Current() {
		return ((T (*)(GetEnumeratorcIterator20*))(Il2CppBase() + 0x49CC240))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratorcIterator20*))(Il2CppBase() + 0x49CC248))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratorcIterator20*))(Il2CppBase() + 0x49CC250))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetEnumeratorcIterator20*))(Il2CppBase() + 0x49CC4DC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetEnumeratorcIterator20*))(Il2CppBase() + 0x49CC628))(this);
	}

};

}
