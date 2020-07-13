#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QueueEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "QueueEnumerator"));
	}

	template <typename T = uintptr_t> T& queue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& current() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(QueueEnumerator*))(Il2CppBase() + 0x363ECE8))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(QueueEnumerator*))(Il2CppBase() + 0x363ED9C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(QueueEnumerator*))(Il2CppBase() + 0x363EEB4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(QueueEnumerator*))(Il2CppBase() + 0x363EF9C))(this);
	}

};

}
