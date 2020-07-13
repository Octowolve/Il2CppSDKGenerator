#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AliveToDeadcIterator4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<AliveToDead>c__Iterator4"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& range__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $locvar3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& mW__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar4() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $locvar5() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar6() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& $locvar7() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& freeze() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar8() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& $locvar9() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(AliveToDeadcIterator4*))(Il2CppBase() + 0x38CF208))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(AliveToDeadcIterator4*))(Il2CppBase() + 0x38CF7B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AliveToDeadcIterator4*))(Il2CppBase() + 0x38CF7B8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AliveToDeadcIterator4*))(Il2CppBase() + 0x38CF7C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AliveToDeadcIterator4*))(Il2CppBase() + 0x38CF7D4))(this);
	}

};

}
