#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedSetDirtycIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "<DelayedSetDirty>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayedSetDirtycIterator0*))(Il2CppBase() + 0x3D329D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayedSetDirtycIterator0*))(Il2CppBase() + 0x3D32AC4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayedSetDirtycIterator0*))(Il2CppBase() + 0x3D32ACC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayedSetDirtycIterator0*))(Il2CppBase() + 0x3D32AD4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayedSetDirtycIterator0*))(Il2CppBase() + 0x3D32AE8))(this);
	}

};

}
