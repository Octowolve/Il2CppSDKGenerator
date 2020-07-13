#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MedalScaleAnimcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MedalScaleAnim>c__Iterator0"));
	}

	template <typename T = Il2CppVector3> T& fromScale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& toScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& DurationFirst() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DurationSecond() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(MedalScaleAnimcIterator0*))(Il2CppBase() + 0x4925354))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(MedalScaleAnimcIterator0*))(Il2CppBase() + 0x49256C8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MedalScaleAnimcIterator0*))(Il2CppBase() + 0x49256D0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(MedalScaleAnimcIterator0*))(Il2CppBase() + 0x49256D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MedalScaleAnimcIterator0*))(Il2CppBase() + 0x49256EC))(this);
	}
	template <typename T = bool> T m__0() {
		return ((T (*)(MedalScaleAnimcIterator0*))(Il2CppBase() + 0x4925780))(this);
	}

};

}
