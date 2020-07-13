#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IContentHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "IContentHandler"));
	}


	template <typename T = void> T OnStartParsing(uintptr_t parser) {
		return ((T (*)(IContentHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, parser);
	}
	template <typename T = void> T OnEndParsing(uintptr_t parser) {
		return ((T (*)(IContentHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, parser);
	}
	template <typename T = void> T OnStartElement(Il2CppString* name, uintptr_t attrs) {
		return ((T (*)(IContentHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, name, attrs);
	}
	template <typename T = void> T OnEndElement(Il2CppString* name) {
		return ((T (*)(IContentHandler*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T OnProcessingInstruction(Il2CppString* name, Il2CppString* text) {
		return ((T (*)(IContentHandler*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, name, text);
	}
	template <typename T = void> T OnChars(Il2CppString* text) {
		return ((T (*)(IContentHandler*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T OnIgnorableWhitespace(Il2CppString* text) {
		return ((T (*)(IContentHandler*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}

};

}
