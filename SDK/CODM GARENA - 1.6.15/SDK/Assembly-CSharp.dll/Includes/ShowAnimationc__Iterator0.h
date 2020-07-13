#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowAnimationcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowAnimation>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& go__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& from() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& durationSeconds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& to() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(ShowAnimationcIterator0*))(Il2CppBase() + 0x3691AB8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ShowAnimationcIterator0*))(Il2CppBase() + 0x3691B98))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowAnimationcIterator0*))(Il2CppBase() + 0x3691BA0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ShowAnimationcIterator0*))(Il2CppBase() + 0x3691BA8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ShowAnimationcIterator0*))(Il2CppBase() + 0x3691BBC))(this);
	}

};

}
