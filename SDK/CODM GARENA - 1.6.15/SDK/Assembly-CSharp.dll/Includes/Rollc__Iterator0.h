#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Roll>c__Iterator0"));
	}

	template <typename T = float> T& rollTime__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& startTime__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& stopTime__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& nextTime__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& percent__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& i__0() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& decTime__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& t__3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& percent__3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(RollcIterator0*))(Il2CppBase() + 0x3C9F6E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(RollcIterator0*))(Il2CppBase() + 0x3CA00B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RollcIterator0*))(Il2CppBase() + 0x3CA00BC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(RollcIterator0*))(Il2CppBase() + 0x3CA00C4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RollcIterator0*))(Il2CppBase() + 0x3CA00D8))(this);
	}

};

}
