#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnumerableIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "EnumerableIterator"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& e() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(EnumerableIterator*))(Il2CppBase() + 0x521F028))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(EnumerableIterator*))(Il2CppBase() + 0x521F0C4))(this);
	}
	template <typename T = int32_t> T get_CurrentPosition() {
		return ((T (*)(EnumerableIterator*))(Il2CppBase() + 0x521F26C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(EnumerableIterator*))(Il2CppBase() + 0x521F274))(this);
	}

};

}
