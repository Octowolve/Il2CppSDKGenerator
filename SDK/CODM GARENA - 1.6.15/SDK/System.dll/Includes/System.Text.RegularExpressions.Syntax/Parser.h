#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Parser"));
	}

	template <typename T = Il2CppString*> T& pattern() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ptr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& caps() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& refs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& num_groups() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& gap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> static T ParseDecimal(Il2CppString* str, uintptr_t ptr) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADF8E0))(0, str, ptr);
	}
	template <typename T = int32_t> static T ParseOctal(Il2CppString* str, uintptr_t ptr) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AE0D7C))(0, str, ptr);
	}
	template <typename T = int32_t> static T ParseHex(Il2CppString* str, uintptr_t ptr, int32_t digits) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x4AE4F08))(0, str, ptr, digits);
	}
	template <typename T = int32_t> static T ParseNumber(Il2CppString* str, uintptr_t ptr, int32_t b, int32_t min, int32_t max) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4AE4E20))(0, str, ptr, b, min, max);
	}
	template <typename T = Il2CppString*> static T ParseName(Il2CppString* str, uintptr_t ptr) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADF90C))(0, str, ptr);
	}
	template <typename T = uintptr_t> T ParseRegularExpression(Il2CppString* pattern, uintptr_t options) {
		return ((T (*)(Parser*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADD648))(this, pattern, options);
	}
	template <typename T = int32_t> T GetMapping(uintptr_t mapping) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x4ADD834))(this, mapping);
	}
	template <typename T = void> T ParseGroup(uintptr_t group, uintptr_t options, uintptr_t assertion) {
		return ((T (*)(Parser*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AE50E0))(this, group, options, assertion);
	}
	template <typename T = uintptr_t> T ParseGroupingConstruct(uintptr_t options) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x4AE8394))(this, options);
	}
	template <typename T = bool> T ParseAssertionType(uintptr_t assertion) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x4AE8F5C))(this, assertion);
	}
	template <typename T = void> T ParseOptions(uintptr_t options, bool negate) {
		return ((T (*)(Parser*, uintptr_t, bool))(Il2CppBase() + 0x4AE8E74))(this, options, negate);
	}
	template <typename T = uintptr_t> T ParseCharacterClass(uintptr_t options) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x4AE7CB0))(this, options);
	}
	template <typename T = bool> T ParseRepetitionBounds(uintptr_t* min, uintptr_t* max, uintptr_t options) {
		return ((T (*)(Parser*, uintptr_t*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x4AE8BF0))(this, min, max, options);
	}
	template <typename T = uintptr_t> T ParseUnicodeCategory() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4AE9078))(this);
	}
	template <typename T = uintptr_t> T ParseSpecial(uintptr_t options) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x4AE7608))(this, options);
	}
	template <typename T = int32_t> T ParseEscape() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4AE72A8))(this);
	}
	template <typename T = Il2CppString*> T ParseName_1() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4AE9060))(this);
	}
	template <typename T = bool> static T IsNameChar(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4AE4FB8))(0, c);
	}
	template <typename T = int32_t> T ParseNumber_1(int32_t b, int32_t min, int32_t max) {
		return ((T (*)(Parser*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4AE9244))(this, b, min, max);
	}
	template <typename T = int32_t> static T ParseDigit(char c, int32_t b, int32_t n) {
		return ((T (*)(void *, char, int32_t, int32_t))(Il2CppBase() + 0x4AE4F2C))(0, c, b, n);
	}
	template <typename T = void> T ConsumeWhitespace(bool ignore) {
		return ((T (*)(Parser*, bool))(Il2CppBase() + 0x4AE6F70))(this, ignore);
	}
	template <typename T = void> T ResolveReferences() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4AE5BAC))(this);
	}
	template <typename T = void> T HandleExplicitNumericGroups(uintptr_t explicit_numeric_groups) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x4AE9270))(this, explicit_numeric_groups);
	}
	template <typename T = bool> static T IsIgnoreCase(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE838C))(0, options);
	}
	template <typename T = bool> static T IsMultiline(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE7270))(0, options);
	}
	template <typename T = bool> static T IsExplicitCapture(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE8E68))(0, options);
	}
	template <typename T = bool> static T IsSingleline(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE729C))(0, options);
	}
	template <typename T = bool> static T IsIgnorePatternWhitespace(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE6F64))(0, options);
	}
	template <typename T = bool> static T IsECMAScript(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AE906C))(0, options);
	}
	template <typename T = uintptr_t> T NewParseException(Il2CppString* msg) {
		return ((T (*)(Parser*, Il2CppString*))(Il2CppBase() + 0x4AE6E44))(this, msg);
	}

};

}
