#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadBundleAsyncInternalcIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadBundleAsync_Internal>c__Iterator3"));
	}

	template <typename T = Il2CppList<int16_t>*> T& toLoad() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& cnt__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& idx__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int16_t> T& bundle__2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& assetBundleEx__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadBundleAsyncInternalcIterator3*))(Il2CppBase() + 0x2B76B48))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadBundleAsyncInternalcIterator3*))(Il2CppBase() + 0x2B76DAC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadBundleAsyncInternalcIterator3*))(Il2CppBase() + 0x2B76DB4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadBundleAsyncInternalcIterator3*))(Il2CppBase() + 0x2B76DBC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadBundleAsyncInternalcIterator3*))(Il2CppBase() + 0x2B76DD0))(this);
	}

};

}
