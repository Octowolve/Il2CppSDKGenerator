#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayHiddencIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayHidden>c__Iterator1"));
	}

	template <typename T = float> T& hideTime__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& showTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& delayTime__0() {
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
		return ((T (*)(DelayHiddencIterator1*))(Il2CppBase() + 0x35C8120))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayHiddencIterator1*))(Il2CppBase() + 0x35C83D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayHiddencIterator1*))(Il2CppBase() + 0x35C83DC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayHiddencIterator1*))(Il2CppBase() + 0x35C83E4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayHiddencIterator1*))(Il2CppBase() + 0x35C83F8))(this);
	}

};

}
