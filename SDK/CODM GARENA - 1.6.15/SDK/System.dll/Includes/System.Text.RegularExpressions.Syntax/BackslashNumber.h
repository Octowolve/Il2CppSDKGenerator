#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class BackslashNumber
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "BackslashNumber"));
	}

	template <typename T = Il2CppString*> T& literal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ecma() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T ResolveReference(Il2CppString* num_str, uintptr_t groups) {
		return ((T (*)(BackslashNumber*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AE0AE4))(this, num_str, groups);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(BackslashNumber*, uintptr_t, bool))(Il2CppBase() + 0x4AE0DA8))(this, cmp, reverse);
	}

};

}
