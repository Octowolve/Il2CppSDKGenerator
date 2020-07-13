#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartTimecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartTime>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& ds__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = double> T& current__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartTimecIterator0*))(Il2CppBase() + 0x37EE034))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(StartTimecIterator0*))(Il2CppBase() + 0x37EE510))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartTimecIterator0*))(Il2CppBase() + 0x37EE518))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(StartTimecIterator0*))(Il2CppBase() + 0x37EE520))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(StartTimecIterator0*))(Il2CppBase() + 0x37EE534))(this);
	}

};

}
