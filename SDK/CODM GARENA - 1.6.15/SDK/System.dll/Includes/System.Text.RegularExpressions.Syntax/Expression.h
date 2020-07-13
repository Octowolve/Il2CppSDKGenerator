#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Expression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Expression"));
	}


	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(Expression*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Expression*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x0))(this, min, max);
	}
	template <typename T = int32_t> T GetFixedWidth() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x4AE1B70))(this);
	}
	template <typename T = uintptr_t> T GetAnchorInfo(bool reverse) {
		return ((T (*)(Expression*, bool))(Il2CppBase() + 0x4AE3544))(this, reverse);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(Expression*))(Il2CppBase() + 0x0))(this);
	}

};

}
