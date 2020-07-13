#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class PositionAssertion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "PositionAssertion"));
	}

	template <typename T = uintptr_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(PositionAssertion*, uintptr_t, bool))(Il2CppBase() + 0x4AE93F4))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(PositionAssertion*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE94F0))(this, min, max);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(PositionAssertion*))(Il2CppBase() + 0x4AE9500))(this);
	}
	template <typename T = uintptr_t> T GetAnchorInfo(bool revers) {
		return ((T (*)(PositionAssertion*, bool))(Il2CppBase() + 0x4AE9508))(this, revers);
	}

};

}
