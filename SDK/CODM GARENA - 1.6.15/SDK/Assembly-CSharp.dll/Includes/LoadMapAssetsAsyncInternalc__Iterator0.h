#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadMapAssetsAsyncInternalcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadMapAssetsAsyncInternal>c__Iterator0"));
	}

	template <typename T = int32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& groupTags__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& groups__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& inList__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& forceLoadIndexStart__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& nowGen__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& loadAssetCount__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& independentFlag__1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& nIndex__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& metaData__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& path__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& go__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& percent__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& percentcallback() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadMapAssetsAsyncInternalcIterator0*))(Il2CppBase() + 0x2B97000))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadMapAssetsAsyncInternalcIterator0*))(Il2CppBase() + 0x2B9789C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadMapAssetsAsyncInternalcIterator0*))(Il2CppBase() + 0x2B978A4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadMapAssetsAsyncInternalcIterator0*))(Il2CppBase() + 0x2B978AC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadMapAssetsAsyncInternalcIterator0*))(Il2CppBase() + 0x2B978C0))(this);
	}

};

}
