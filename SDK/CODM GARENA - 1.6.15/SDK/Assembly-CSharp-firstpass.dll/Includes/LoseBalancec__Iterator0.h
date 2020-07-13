#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoseBalancecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<LoseBalance>c__Iterator0"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& done__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& vel__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $locvar3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& $locvar5() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar8() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& $locvar9() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoseBalancecIterator0*))(Il2CppBase() + 0x38A4960))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoseBalancecIterator0*))(Il2CppBase() + 0x38A58E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoseBalancecIterator0*))(Il2CppBase() + 0x38A58EC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoseBalancecIterator0*))(Il2CppBase() + 0x38A58F4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoseBalancecIterator0*))(Il2CppBase() + 0x38A5908))(this);
	}

};

}
