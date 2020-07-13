#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmuneFadeCoroutinecIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ImmuneFadeCoroutine>c__Iterator3"));
	}

	template <typename T = float> T& destMatRimVal() {
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
		return ((T (*)(ImmuneFadeCoroutinecIterator3*))(Il2CppBase() + 0x3EA95C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ImmuneFadeCoroutinecIterator3*))(Il2CppBase() + 0x3EA9B48))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ImmuneFadeCoroutinecIterator3*))(Il2CppBase() + 0x3EA9B50))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ImmuneFadeCoroutinecIterator3*))(Il2CppBase() + 0x3EA9B58))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ImmuneFadeCoroutinecIterator3*))(Il2CppBase() + 0x3EA9B6C))(this);
	}

};

}
