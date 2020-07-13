#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class NonBacktrackingGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "NonBacktrackingGroup"));
	}


	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(NonBacktrackingGroup*, uintptr_t, bool))(Il2CppBase() + 0x4AE4BA0))(this, cmp, reverse);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(NonBacktrackingGroup*))(Il2CppBase() + 0x4AE4E18))(this);
	}

};

}
