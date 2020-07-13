#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Alternation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Alternation"));
	}


	template <typename T = uintptr_t> T get_Alternatives() {
		return ((T (*)(Alternation*))(Il2CppBase() + 0x4ADFB34))(this);
	}
	template <typename T = void> T AddAlternative(uintptr_t e) {
		return ((T (*)(Alternation*, uintptr_t))(Il2CppBase() + 0x4ADFB44))(this, e);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(Alternation*, uintptr_t, bool))(Il2CppBase() + 0x4ADFC74))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Alternation*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE03CC))(this, min, max);
	}

};

}
