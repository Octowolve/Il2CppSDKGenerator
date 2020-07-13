#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Enumerator"));
	}

	template <typename T = uintptr_t> T& stack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& modCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& current() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x3644540))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x3644548))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x364464C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x3644754))(this);
	}

};

}
