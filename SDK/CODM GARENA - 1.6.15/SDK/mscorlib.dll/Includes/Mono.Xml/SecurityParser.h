#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class SecurityParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Xml", "SecurityParser"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& stack() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T LoadXml(Il2CppString* xml) {
		return ((T (*)(SecurityParser*, Il2CppString*))(Il2CppBase() + 0x3FA9828))(this, xml);
	}
	template <typename T = uintptr_t> T ToXml() {
		return ((T (*)(SecurityParser*))(Il2CppBase() + 0x3FA98FC))(this);
	}
	template <typename T = void> T OnStartParsing(uintptr_t parser) {
		return ((T (*)(SecurityParser*, uintptr_t))(Il2CppBase() + 0x3FC492C))(this, parser);
	}
	template <typename T = void> T OnProcessingInstruction(Il2CppString* name, Il2CppString* text) {
		return ((T (*)(SecurityParser*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FC4930))(this, name, text);
	}
	template <typename T = void> T OnIgnorableWhitespace(Il2CppString* s) {
		return ((T (*)(SecurityParser*, Il2CppString*))(Il2CppBase() + 0x3FC4934))(this, s);
	}
	template <typename T = void> T OnStartElement(Il2CppString* name, uintptr_t attrs) {
		return ((T (*)(SecurityParser*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FC4938))(this, name, attrs);
	}
	template <typename T = void> T OnEndElement(Il2CppString* name) {
		return ((T (*)(SecurityParser*, Il2CppString*))(Il2CppBase() + 0x3FC4D5C))(this, name);
	}
	template <typename T = void> T OnChars(Il2CppString* ch) {
		return ((T (*)(SecurityParser*, Il2CppString*))(Il2CppBase() + 0x3FC4EF8))(this, ch);
	}
	template <typename T = void> T OnEndParsing(uintptr_t parser) {
		return ((T (*)(SecurityParser*, uintptr_t))(Il2CppBase() + 0x3FC4FCC))(this, parser);
	}

};

}
