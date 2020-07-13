#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "Parser"));
	}

	template <typename T = Il2CppString*> static T& WORD_BREAK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& json() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> static T IsWordBreak(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x2BF62BC))(0, c);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* jsonString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BF5FC4))(0, jsonString);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF63DC))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T ParseObject() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF6414))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ParseArray() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF6BE8))(this);
	}
	template <typename T = uintptr_t> T ParseValue() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF63BC))(this);
	}
	template <typename T = uintptr_t> T ParseByToken(uintptr_t token) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x2BF6D14))(this, token);
	}
	template <typename T = Il2CppString*> T ParseString() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF68BC))(this);
	}
	template <typename T = uintptr_t> T ParseNumber() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF6E50))(this);
	}
	template <typename T = void> T EatWhitespace() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF7174))(this);
	}
	template <typename T = char> T get_PeekChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF727C))(this);
	}
	template <typename T = char> T get_NextChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF6F8C))(this);
	}
	template <typename T = Il2CppString*> T get_NextWord() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF7060))(this);
	}
	template <typename T = uintptr_t> T get_NextToken() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x2BF658C))(this);
	}

};

}
