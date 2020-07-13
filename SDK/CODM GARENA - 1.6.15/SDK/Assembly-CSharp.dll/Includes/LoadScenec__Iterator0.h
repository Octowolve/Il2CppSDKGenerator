#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadScenecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadScene>c__Iterator0"));
	}

	template <typename T = int32_t> T& timeout__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& sb__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& names() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadScenecIterator0*))(Il2CppBase() + 0x3BFB9E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadScenecIterator0*))(Il2CppBase() + 0x3BFBFF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadScenecIterator0*))(Il2CppBase() + 0x3BFBFFC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadScenecIterator0*))(Il2CppBase() + 0x3BFC004))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadScenecIterator0*))(Il2CppBase() + 0x3BFC018))(this);
	}

};

}
