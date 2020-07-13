#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.XPath.yydebug {

class yyDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.XPath.yydebug", "yyDebug"));
	}


	template <typename T = void> T push(int32_t state, uintptr_t value) {
		return ((T (*)(yyDebug*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, state, value);
	}
	template <typename T = void> T lex(int32_t state, int32_t token, Il2CppString* name, uintptr_t value) {
		return ((T (*)(yyDebug*, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, state, token, name, value);
	}
	template <typename T = void> T shift(int32_t from, int32_t to, int32_t errorFlag) {
		return ((T (*)(yyDebug*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x0))(this, from, to, errorFlag);
	}
	template <typename T = void> T pop(int32_t state) {
		return ((T (*)(yyDebug*, int32_t))(Il2CppBase() + 0x0))(this, state);
	}
	template <typename T = void> T discard(int32_t state, int32_t token, Il2CppString* name, uintptr_t value) {
		return ((T (*)(yyDebug*, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, state, token, name, value);
	}
	template <typename T = void> T reduce(int32_t from, int32_t to, int32_t rule, Il2CppString* text, int32_t len) {
		return ((T (*)(yyDebug*, int32_t, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, from, to, rule, text, len);
	}
	template <typename T = void> T shift_1(int32_t from, int32_t to) {
		return ((T (*)(yyDebug*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, from, to);
	}
	template <typename T = void> T accept(uintptr_t value) {
		return ((T (*)(yyDebug*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T error(Il2CppString* message) {
		return ((T (*)(yyDebug*, Il2CppString*))(Il2CppBase() + 0x0))(this, message);
	}
	template <typename T = void> T reject() {
		return ((T (*)(yyDebug*))(Il2CppBase() + 0x0))(this);
	}

};

}
