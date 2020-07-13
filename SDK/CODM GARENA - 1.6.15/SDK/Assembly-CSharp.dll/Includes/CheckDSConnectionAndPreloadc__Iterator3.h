#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckDSConnectionAndPreloadcIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckDSConnectionAndPreload>c__Iterator3"));
	}

	template <typename T = float> T& waitForAssetTime__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& gameInfoDS__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
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
		return ((T (*)(CheckDSConnectionAndPreloadcIterator3*))(Il2CppBase() + 0x4AA4390))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CheckDSConnectionAndPreloadcIterator3*))(Il2CppBase() + 0x4AA4638))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheckDSConnectionAndPreloadcIterator3*))(Il2CppBase() + 0x4AA4640))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CheckDSConnectionAndPreloadcIterator3*))(Il2CppBase() + 0x4AA4648))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CheckDSConnectionAndPreloadcIterator3*))(Il2CppBase() + 0x4AA465C))(this);
	}

};

}
