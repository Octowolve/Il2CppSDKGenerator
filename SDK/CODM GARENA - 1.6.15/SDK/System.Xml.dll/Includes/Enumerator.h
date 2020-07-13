#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "Enumerator"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& currentChild() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& passedLastNode() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x37E3360))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x37E34B0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x37E3704))(this);
	}

};

}
