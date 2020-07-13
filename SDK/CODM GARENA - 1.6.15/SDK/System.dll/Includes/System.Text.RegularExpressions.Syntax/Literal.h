#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Literal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Literal"));
	}

	template <typename T = Il2CppString*> T& str() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ignore() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> static T CompileLiteral(Il2CppString* str, uintptr_t cmp, bool ignore, bool reverse) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool, bool))(Il2CppBase() + 0x4AE0F38))(0, str, cmp, ignore, reverse);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(Literal*, uintptr_t, bool))(Il2CppBase() + 0x4AE4A58))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Literal*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE4A84))(this, min, max);
	}
	template <typename T = uintptr_t> T GetAnchorInfo(bool reverse) {
		return ((T (*)(Literal*, bool))(Il2CppBase() + 0x4AE4AC0))(this, reverse);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(Literal*))(Il2CppBase() + 0x4AE4B94))(this);
	}

};

}
