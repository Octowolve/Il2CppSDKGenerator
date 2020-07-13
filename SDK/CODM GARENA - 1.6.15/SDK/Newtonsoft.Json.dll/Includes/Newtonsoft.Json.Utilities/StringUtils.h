#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class StringUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "StringUtils"));
	}


	template <typename T = Il2CppString*> static T FormatWith(Il2CppString* format, uintptr_t provider, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF2738))(0, format, provider, arg0);
	}
	template <typename T = Il2CppString*> static T FormatWith_1(Il2CppString* format, uintptr_t provider, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE6568))(0, format, provider, arg0, arg1);
	}
	template <typename T = Il2CppString*> static T FormatWith_2(Il2CppString* format, uintptr_t provider, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFA740))(0, format, provider, arg0, arg1, arg2);
	}
	template <typename T = Il2CppString*> static T FormatWith_3(Il2CppString* format, uintptr_t provider, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFA8D0))(0, format, provider, arg0, arg1, arg2, arg3);
	}
	template <typename T = Il2CppString*> static T FormatWith_4(Il2CppString* format, uintptr_t provider, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DFA664))(0, format, provider, args);
	}
	template <typename T = uintptr_t> static T CreateStringWriter(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DF1A74))(0, capacity);
	}
	template <typename T = void*> static T GetLength(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DF1960))(0, value);
	}
	template <typename T = void> static T ToCharAsUnicode(char c, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, char, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF15C0))(0, c, buffer);
	}
	template <typename T = uintptr_t> static T ForgivingCaseSensitiveFind(void* source, void* valueSelector, Il2CppString* testValue) {
		return ((T (*)(void *, void*, void*, Il2CppString*))(Il2CppBase() + 0x4E4EE50))(0, source, valueSelector, testValue);
	}
	template <typename T = Il2CppString*> static T ToCamelCase(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DEFBFC))(0, s);
	}
	template <typename T = bool> static T IsHighSurrogate(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4DFAAA4))(0, c);
	}
	template <typename T = bool> static T IsLowSurrogate(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4DFAB4C))(0, c);
	}
	template <typename T = bool> static T StartsWith(Il2CppString* source, char value) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x4DFABF4))(0, source, value);
	}
	template <typename T = bool> static T EndsWith(Il2CppString* source, char value) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x4DFAC54))(0, source, value);
	}

};

}
