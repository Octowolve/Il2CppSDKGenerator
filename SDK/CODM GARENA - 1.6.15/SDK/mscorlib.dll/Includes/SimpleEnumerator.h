#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "SimpleEnumerator"));
	}

	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentElement() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& endFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SimpleEnumerator*))(Il2CppBase() + 0x363396C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SimpleEnumerator*))(Il2CppBase() + 0x3633974))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SimpleEnumerator*))(Il2CppBase() + 0x3633AF8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SimpleEnumerator*))(Il2CppBase() + 0x3633C38))(this);
	}

};

}
