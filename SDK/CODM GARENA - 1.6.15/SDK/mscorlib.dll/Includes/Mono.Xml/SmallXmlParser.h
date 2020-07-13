#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class SmallXmlParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Xml", "SmallXmlParser"));
	}

	template <typename T = uintptr_t> T& handler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& elementNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& xmlSpaces() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& xmlSpace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buffer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& nameBuffer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isWhitespace() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& line() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& resetColumn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map18() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Error(Il2CppString* msg) {
		return ((T (*)(SmallXmlParser*, Il2CppString*))(Il2CppBase() + 0x3FC5084))(this, msg);
	}
	template <typename T = uintptr_t> T UnexpectedEndError() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5260))(this);
	}
	template <typename T = bool> T IsNameChar(char c, bool start) {
		return ((T (*)(SmallXmlParser*, char, bool))(Il2CppBase() + 0x3FC53D4))(this, c, start);
	}
	template <typename T = bool> T IsWhitespace(int32_t c) {
		return ((T (*)(SmallXmlParser*, int32_t))(Il2CppBase() + 0x3FC5510))(this, c);
	}
	template <typename T = void> T SkipWhitespaces() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5538))(this);
	}
	template <typename T = void> T HandleWhitespaces() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5610))(this);
	}
	template <typename T = void> T SkipWhitespaces_1(bool expected) {
		return ((T (*)(SmallXmlParser*, bool))(Il2CppBase() + 0x3FC5540))(this, expected);
	}
	template <typename T = int32_t> T Peek() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5730))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC56B0))(this);
	}
	template <typename T = void> T Expect(int32_t c) {
		return ((T (*)(SmallXmlParser*, int32_t))(Il2CppBase() + 0x3FC5764))(this, c);
	}
	template <typename T = Il2CppString*> T ReadUntil(char until, bool handleReferences) {
		return ((T (*)(SmallXmlParser*, char, bool))(Il2CppBase() + 0x3FC58B4))(this, until, handleReferences);
	}
	template <typename T = Il2CppString*> T ReadName() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5C80))(this);
	}
	template <typename T = void> T Parse(uintptr_t input, uintptr_t handler) {
		return ((T (*)(SmallXmlParser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FC46C4))(this, input, handler);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC6ABC))(this);
	}
	template <typename T = void> T ReadContent() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5E70))(this);
	}
	template <typename T = void> T HandleBufferedContent() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC691C))(this);
	}
	template <typename T = void> T ReadCharacters() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC6F2C))(this);
	}
	template <typename T = void> T ReadReference() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC5974))(this);
	}
	template <typename T = int32_t> T ReadCharacterReference() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC6FA8))(this);
	}
	template <typename T = void> T ReadAttribute(uintptr_t a) {
		return ((T (*)(SmallXmlParser*, uintptr_t))(Il2CppBase() + 0x3FC6D70))(this, a);
	}
	template <typename T = void> T ReadCDATASection() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC6BB0))(this);
	}
	template <typename T = void> T ReadComment() {
		return ((T (*)(SmallXmlParser*))(Il2CppBase() + 0x3FC6C9C))(this);
	}

};

}
