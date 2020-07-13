#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAsyncInternalcIterator11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAsync_Internal>c__Iterator1`1"));
	}

	template <typename T = Il2CppString*> T& assetName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int16_t> T& bundleIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& errno__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& assetId__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& abEx__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& asyncLoadAssetTask__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__1() {
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
		return ((T (*)(LoadAsyncInternalcIterator11*))(Il2CppBase() + 0x48D5A88))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadAsyncInternalcIterator11*))(Il2CppBase() + 0x48D68F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadAsyncInternalcIterator11*))(Il2CppBase() + 0x48D68F8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadAsyncInternalcIterator11*))(Il2CppBase() + 0x48D6900))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadAsyncInternalcIterator11*))(Il2CppBase() + 0x48D6914))(this);
	}

};

}
