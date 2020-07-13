#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncLoadAssetWorkercIterator6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AsyncLoadAssetWorker>c__Iterator6"));
	}

	template <typename T = uintptr_t> T& task() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int16_t> T& targetBundle__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& abEx__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& loadAssetRequest__0() {
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
		return ((T (*)(AsyncLoadAssetWorkercIterator6*))(Il2CppBase() + 0x2B74C50))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(AsyncLoadAssetWorkercIterator6*))(Il2CppBase() + 0x2B752BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AsyncLoadAssetWorkercIterator6*))(Il2CppBase() + 0x2B752C4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AsyncLoadAssetWorkercIterator6*))(Il2CppBase() + 0x2B752CC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AsyncLoadAssetWorkercIterator6*))(Il2CppBase() + 0x2B752E0))(this);
	}

};

}
