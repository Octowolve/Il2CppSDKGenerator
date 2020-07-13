#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class BalancingGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "BalancingGroup"));
	}

	template <typename T = uintptr_t> T& balance() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T set_Balance(uintptr_t value) {
		return ((T (*)(BalancingGroup*, uintptr_t))(Il2CppBase() + 0x4AE1164))(this, value);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(BalancingGroup*, uintptr_t, bool))(Il2CppBase() + 0x4AE116C))(this, cmp, reverse);
	}

};

}
