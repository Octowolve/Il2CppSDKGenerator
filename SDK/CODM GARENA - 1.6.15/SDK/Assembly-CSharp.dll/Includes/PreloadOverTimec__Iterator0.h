#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreloadOverTimecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PreloadOverTime>c__Iterator0"));
	}

	template <typename T = int32_t> T& amount__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& remainder__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& numPerFrame__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& numThisFrame__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& n__3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& inst__4() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(PreloadOverTimecIterator0*))(Il2CppBase() + 0x48110CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PreloadOverTimecIterator0*))(Il2CppBase() + 0x4811370))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PreloadOverTimecIterator0*))(Il2CppBase() + 0x4811378))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PreloadOverTimecIterator0*))(Il2CppBase() + 0x4811380))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PreloadOverTimecIterator0*))(Il2CppBase() + 0x4811394))(this);
	}

};

}
