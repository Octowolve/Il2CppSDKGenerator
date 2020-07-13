#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetAsyncAssetInternalcIterator5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetAsyncAsset_Internal>c__Iterator5"));
	}

	template <typename T = uintptr_t> T& task() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadAssetAsyncAssetInternalcIterator5*))(Il2CppBase() + 0x2B76960))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadAssetAsyncAssetInternalcIterator5*))(Il2CppBase() + 0x2B76A90))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadAssetAsyncAssetInternalcIterator5*))(Il2CppBase() + 0x2B76A98))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadAssetAsyncAssetInternalcIterator5*))(Il2CppBase() + 0x2B76AA0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadAssetAsyncAssetInternalcIterator5*))(Il2CppBase() + 0x2B76AB4))(this);
	}

};

}
