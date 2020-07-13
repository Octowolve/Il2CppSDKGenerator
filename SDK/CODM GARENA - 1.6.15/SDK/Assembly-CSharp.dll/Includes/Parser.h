#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parser"));
	}

	template <typename T = Il2CppString*> static T& WORD_BREAK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& json() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWordBreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseByToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EatWhitespace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> static T IsWordBreak(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x41D33E4))(0, c);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* jsonString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x41D2FE4))(0, jsonString);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D35D4))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T ParseObject() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D3698))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ParseArray() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D3EDC))(this);
	}
	template <typename T = uintptr_t> T ParseValue() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D3524))(this);
	}
	template <typename T = uintptr_t> T ParseByToken(uintptr_t token) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x41D4044))(this, token);
	}
	template <typename T = Il2CppString*> T ParseString() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D3B70))(this);
	}
	template <typename T = uintptr_t> T ParseNumber() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D422C))(this);
	}
	template <typename T = void> T EatWhitespace() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D4590))(this);
	}
	template <typename T = char> T get_PeekChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D46D4))(this);
	}
	template <typename T = char> T get_NextChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D43A8))(this);
	}
	template <typename T = Il2CppString*> T get_NextWord() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D447C))(this);
	}
	template <typename T = uintptr_t> T get_NextToken() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x41D3840))(this);
	}

};

}
