#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.XPath {

class Tokenizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.XPath", "Tokenizer"));
	}

	template <typename T = Il2CppString*> T& m_rgchInput() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_ich() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_cch() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_iToken() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_iTokenPrev() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_objToken() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_fPrevWasOperator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_fThisIsOperator() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> static T& s_mapTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_rgTokenMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = char> T Peek(int32_t iOffset) {
		return ((T (*)(Tokenizer*, int32_t))(Il2CppBase() + 0x2A815CC))(this, iOffset);
	}
	template <typename T = char> T Peek_1() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A81618))(this);
	}
	template <typename T = char> T GetChar() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A81620))(this);
	}
	template <typename T = char> T PutBack() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A81674))(this);
	}
	template <typename T = bool> T SkipWhitespace() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A80158))(this);
	}
	template <typename T = int32_t> T ParseNumber() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A81780))(this);
	}
	template <typename T = int32_t> T ParseLiteral() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A819F8))(this);
	}
	template <typename T = Il2CppString*> T ReadIdentifier() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A81BF8))(this);
	}
	template <typename T = int32_t> T ParseIdentifier() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A81DB0))(this);
	}
	template <typename T = bool> static T IsWhitespace(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x2A81758))(0, ch);
	}
	template <typename T = bool> static T IsDigit(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x2A819E0))(0, ch);
	}
	template <typename T = int32_t> T ParseToken() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A82594))(this);
	}
	template <typename T = bool> T advance() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A82B60))(this);
	}
	template <typename T = int32_t> T token() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A82BAC))(this);
	}
	template <typename T = uintptr_t> T value() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A82BB4))(this);
	}
	template <typename T = bool> T get_IsFirstToken() {
		return ((T (*)(Tokenizer*))(Il2CppBase() + 0x2A8253C))(this);
	}
	template <typename T = bool> T IsNodeType(int32_t iToken) {
		return ((T (*)(Tokenizer*, int32_t))(Il2CppBase() + 0x2A82574))(this, iToken);
	}
	template <typename T = bool> T IsOperatorName(int32_t iToken) {
		return ((T (*)(Tokenizer*, int32_t))(Il2CppBase() + 0x2A82554))(this, iToken);
	}
	template <typename T = bool> T IsAxisName(int32_t iToken) {
		return ((T (*)(Tokenizer*, int32_t))(Il2CppBase() + 0x2A82520))(this, iToken);
	}

};

}
