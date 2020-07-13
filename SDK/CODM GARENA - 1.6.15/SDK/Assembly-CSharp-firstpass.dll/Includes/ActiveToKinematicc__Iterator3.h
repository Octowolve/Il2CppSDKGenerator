#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveToKinematiccIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<ActiveToKinematic>c__Iterator3"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $locvar3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ActiveToKinematiccIterator3*))(Il2CppBase() + 0x38CEE08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ActiveToKinematiccIterator3*))(Il2CppBase() + 0x38CF150))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ActiveToKinematiccIterator3*))(Il2CppBase() + 0x38CF158))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ActiveToKinematiccIterator3*))(Il2CppBase() + 0x38CF160))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ActiveToKinematiccIterator3*))(Il2CppBase() + 0x38CF174))(this);
	}

};

}
