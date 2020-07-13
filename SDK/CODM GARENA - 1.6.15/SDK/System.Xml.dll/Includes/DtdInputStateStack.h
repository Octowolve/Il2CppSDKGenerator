#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DtdInputStateStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "DtdInputStateStack"));
	}

	template <typename T = uintptr_t> T& intern() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(DtdInputStateStack*))(Il2CppBase() + 0x2A99FF8))(this);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(DtdInputStateStack*))(Il2CppBase() + 0x2A9A1CC))(this);
	}
	template <typename T = void> T Push(uintptr_t val) {
		return ((T (*)(DtdInputStateStack*, uintptr_t))(Il2CppBase() + 0x2A9A108))(this, val);
	}

};

}
