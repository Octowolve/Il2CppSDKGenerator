#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayCGcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayCG>c__Iterator1"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& leftTime__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MediaControl__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayCGcIterator1*))(Il2CppBase() + 0x29D4944))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayCGcIterator1*))(Il2CppBase() + 0x29D4D58))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayCGcIterator1*))(Il2CppBase() + 0x29D4D60))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayCGcIterator1*))(Il2CppBase() + 0x29D4D68))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayCGcIterator1*))(Il2CppBase() + 0x29D4D7C))(this);
	}

};

}
