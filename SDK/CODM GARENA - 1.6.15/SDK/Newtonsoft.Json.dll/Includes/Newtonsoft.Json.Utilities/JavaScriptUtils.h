#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class JavaScriptUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "JavaScriptUtils"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& SingleQuoteCharEscapeFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DoubleQuoteCharEscapeFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& HtmlCharEscapeFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetCharEscapeFlags(uintptr_t stringEscapeHandling, char quoteChar) {
		return ((T (*)(void *, uintptr_t, char))(Il2CppBase() + 0x4DF0D50))(0, stringEscapeHandling, quoteChar);
	}
	template <typename T = bool> static T ShouldEscapeJavaScriptString(Il2CppString* s, Il2CppArray<uintptr_t>* charEscapeFlags) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF0EAC))(0, s, charEscapeFlags);
	}
	template <typename T = void> static T WriteEscapedJavaScriptString(uintptr_t writer, Il2CppString* s, char delimiter, bool appendDelimiters, Il2CppArray<uintptr_t>* charEscapeFlags, uintptr_t stringEscapeHandling, void* bufferPool, Il2CppArray<uintptr_t>* writeBuffer) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, char, bool, Il2CppArray<uintptr_t>*, uintptr_t, void*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF0F50))(0, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
	}
	template <typename T = Il2CppString*> static T ToEscapedJavaScriptString(Il2CppString* value, char delimiter, bool appendDelimiters, uintptr_t stringEscapeHandling) {
		return ((T (*)(void *, Il2CppString*, char, bool, uintptr_t))(Il2CppBase() + 0x4DF16C8))(0, value, delimiter, appendDelimiters, stringEscapeHandling);
	}

};

}
