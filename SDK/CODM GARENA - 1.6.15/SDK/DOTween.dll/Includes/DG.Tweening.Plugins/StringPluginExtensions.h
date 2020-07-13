#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class StringPluginExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "StringPluginExtensions"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& ScrambledCharsAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ScrambledCharsUppercase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ScrambledCharsLowercase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ScrambledCharsNumerals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& _lastRndSeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T ScrambleChars(Il2CppArray<uintptr_t>* chars) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44BC61C))(0, chars);
	}
	template <typename T = uintptr_t> static T AppendScrambledChars(uintptr_t buffer, int32_t length, Il2CppArray<uintptr_t>* chars) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44BC0F8))(0, buffer, length, chars);
	}

};

}
