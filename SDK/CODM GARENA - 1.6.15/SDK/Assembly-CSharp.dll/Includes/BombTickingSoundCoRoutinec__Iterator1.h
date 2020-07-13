#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BombTickingSoundCoRoutinecIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BombTickingSoundCoRoutine>c__Iterator1"));
	}

	template <typename T = int32_t> T& i__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& fTickInterval__1() {
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
		return ((T (*)(BombTickingSoundCoRoutinecIterator1*))(Il2CppBase() + 0x4669778))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(BombTickingSoundCoRoutinecIterator1*))(Il2CppBase() + 0x4669994))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BombTickingSoundCoRoutinecIterator1*))(Il2CppBase() + 0x466999C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BombTickingSoundCoRoutinecIterator1*))(Il2CppBase() + 0x46699A4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BombTickingSoundCoRoutinecIterator1*))(Il2CppBase() + 0x46699B8))(this);
	}

};

}
