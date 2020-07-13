#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitReadyPlaycIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitReadyPlay>c__Iterator1"));
	}

	template <typename T = bool> T& anim() {
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
		return ((T (*)(WaitReadyPlaycIterator1*))(Il2CppBase() + 0x3C8B3F4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(WaitReadyPlaycIterator1*))(Il2CppBase() + 0x3C8B474))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitReadyPlaycIterator1*))(Il2CppBase() + 0x3C8B47C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(WaitReadyPlaycIterator1*))(Il2CppBase() + 0x3C8B484))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaitReadyPlaycIterator1*))(Il2CppBase() + 0x3C8B498))(this);
	}

};

}
