#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class CharacterClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "CharacterClass"));
	}

	template <typename T = uintptr_t> static T& upper_case_characters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& negate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ignore() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& pos_cats() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& neg_cats() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& intervals() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T AddCategory(uintptr_t cat, bool negate) {
		return ((T (*)(CharacterClass*, uintptr_t, bool))(Il2CppBase() + 0x4AE2060))(this, cat, negate);
	}
	template <typename T = void> T AddCharacter(char c) {
		return ((T (*)(CharacterClass*, char))(Il2CppBase() + 0x4AE2124))(this, c);
	}
	template <typename T = void> T AddRange(char lo, char hi) {
		return ((T (*)(CharacterClass*, char, char))(Il2CppBase() + 0x4AE212C))(this, lo, hi);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(CharacterClass*, uintptr_t, bool))(Il2CppBase() + 0x4AE23D8))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(CharacterClass*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE31A4))(this, min, max);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(CharacterClass*))(Il2CppBase() + 0x4AE31B4))(this);
	}
	template <typename T = double> static T GetIntervalCost(uintptr_t i) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE31BC))(0, i);
	}

};

}
