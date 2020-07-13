#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlParserInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlParserInput"));
	}

	template <typename T = uintptr_t> T& sourceStack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& has_peek() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& peek_char() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& allowTextDecl() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Close() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E4484))(this);
	}
	template <typename T = void> T PushPEBuffer(uintptr_t pe) {
		return ((T (*)(XmlParserInput*, uintptr_t))(Il2CppBase() + 0x37E45D0))(this, pe);
	}
	template <typename T = int32_t> T ReadSourceChar() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E46F8))(this);
	}
	template <typename T = int32_t> T PeekChar() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E48E4))(this);
	}
	template <typename T = int32_t> T ReadChar() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E4968))(this);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E4984))(this);
	}
	template <typename T = bool> T get_HasPEBuffer() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E49A8))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E49EC))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E4A18))(this);
	}
	template <typename T = bool> T get_AllowTextDecl() {
		return ((T (*)(XmlParserInput*))(Il2CppBase() + 0x37E4A44))(this);
	}
	template <typename T = void> T set_AllowTextDecl(bool value) {
		return ((T (*)(XmlParserInput*, bool))(Il2CppBase() + 0x37E4A4C))(this, value);
	}

};

}
