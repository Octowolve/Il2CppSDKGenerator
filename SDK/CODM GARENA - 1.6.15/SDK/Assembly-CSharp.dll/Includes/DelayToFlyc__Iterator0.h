#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayToFlycIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayToFly>c__Iterator0"));
	}

	template <typename T = float> T& sec() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& animName() {
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
		return ((T (*)(DelayToFlycIterator0*))(Il2CppBase() + 0x39571B8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayToFlycIterator0*))(Il2CppBase() + 0x39572C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayToFlycIterator0*))(Il2CppBase() + 0x39572CC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayToFlycIterator0*))(Il2CppBase() + 0x39572D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayToFlycIterator0*))(Il2CppBase() + 0x39572E8))(this);
	}

};

}
