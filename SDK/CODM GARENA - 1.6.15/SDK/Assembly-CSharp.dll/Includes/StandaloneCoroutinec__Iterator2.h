#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StandaloneCoroutinecIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StandaloneCoroutine>c__Iterator2"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(StandaloneCoroutinecIterator2*))(Il2CppBase() + 0x4AA52B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(StandaloneCoroutinecIterator2*))(Il2CppBase() + 0x4AA53E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StandaloneCoroutinecIterator2*))(Il2CppBase() + 0x4AA53EC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(StandaloneCoroutinecIterator2*))(Il2CppBase() + 0x4AA53F4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(StandaloneCoroutinecIterator2*))(Il2CppBase() + 0x4AA5408))(this);
	}

};

}
