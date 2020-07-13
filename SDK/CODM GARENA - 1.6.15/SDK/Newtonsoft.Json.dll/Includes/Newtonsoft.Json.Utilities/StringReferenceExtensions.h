#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class StringReferenceExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "StringReferenceExtensions"));
	}


	template <typename T = int32_t> static T IndexOf(uintptr_t s, char c, int32_t startIndex, int32_t length) {
		return ((T (*)(void *, uintptr_t, char, int32_t, int32_t))(Il2CppBase() + 0x4DED29C))(0, s, c, startIndex, length);
	}
	template <typename T = bool> static T StartsWith(uintptr_t s, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DEBA44))(0, s, text);
	}
	template <typename T = bool> static T EndsWith(uintptr_t s, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DEBB0C))(0, s, text);
	}

};

}
