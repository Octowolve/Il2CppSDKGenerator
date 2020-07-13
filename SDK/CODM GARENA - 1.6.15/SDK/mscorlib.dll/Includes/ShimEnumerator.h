#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShimEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ShimEnumerator"));
	}

	template <typename T = void*> T& host_enumerator() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShimEnumerator*))(Il2CppBase() + 0x4E033D4))(this);
	}
	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(ShimEnumerator*))(Il2CppBase() + 0x4E033E8))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(ShimEnumerator*))(Il2CppBase() + 0x4E03528))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(ShimEnumerator*))(Il2CppBase() + 0x4E0357C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ShimEnumerator*))(Il2CppBase() + 0x4E035D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ShimEnumerator*))(Il2CppBase() + 0x4E03694))(this);
	}

};

}
