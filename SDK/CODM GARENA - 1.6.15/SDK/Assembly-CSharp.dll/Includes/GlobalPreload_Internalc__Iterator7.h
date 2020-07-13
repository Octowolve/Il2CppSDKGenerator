#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalPreloadInternalcIterator7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GlobalPreload_Internal>c__Iterator7"));
	}

	template <typename T = int16_t> T& bundleIndex__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isSucc__0() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& action() {
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
		return ((T (*)(GlobalPreloadInternalcIterator7*))(Il2CppBase() + 0x2B763EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GlobalPreloadInternalcIterator7*))(Il2CppBase() + 0x2B76780))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GlobalPreloadInternalcIterator7*))(Il2CppBase() + 0x2B76788))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GlobalPreloadInternalcIterator7*))(Il2CppBase() + 0x2B76790))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GlobalPreloadInternalcIterator7*))(Il2CppBase() + 0x2B767A4))(this);
	}

};

}
