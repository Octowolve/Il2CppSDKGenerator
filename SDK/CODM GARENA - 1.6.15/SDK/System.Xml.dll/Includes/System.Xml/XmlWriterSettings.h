#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlWriterSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlWriterSettings"));
	}

	template <typename T = bool> T& checkCharacters() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& closeOutput() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& conformance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& indent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& indentChars() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& newLineChars() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& newLineOnAttributes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& newLineHandling() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& omitXmlDeclaration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& outputMethod() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NamespaceHandling() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4D00AD4))(this);
	}
	template <typename T = bool> T get_CheckCharacters() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF8014))(this);
	}
	template <typename T = bool> T get_CloseOutput() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CFFD9C))(this);
	}
	template <typename T = uintptr_t> T get_ConformanceLevel() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF7FD4))(this);
	}
	template <typename T = void> T set_ConformanceLevel(uintptr_t value) {
		return ((T (*)(XmlWriterSettings*, uintptr_t))(Il2CppBase() + 0x4D00BDC))(this, value);
	}
	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CFFBDC))(this);
	}
	template <typename T = void> T set_Encoding(uintptr_t value) {
		return ((T (*)(XmlWriterSettings*, uintptr_t))(Il2CppBase() + 0x4D00BE4))(this, value);
	}
	template <typename T = bool> T get_Indent() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF7FE4))(this);
	}
	template <typename T = void> T set_Indent(bool value) {
		return ((T (*)(XmlWriterSettings*, bool))(Il2CppBase() + 0x4D00BEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_IndentChars() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF7FFC))(this);
	}
	template <typename T = void> T set_IndentChars(Il2CppString* value) {
		return ((T (*)(XmlWriterSettings*, Il2CppString*))(Il2CppBase() + 0x4D00BF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_NewLineChars() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF8004))(this);
	}
	template <typename T = void> T set_NewLineChars(Il2CppString* value) {
		return ((T (*)(XmlWriterSettings*, Il2CppString*))(Il2CppBase() + 0x4D00BFC))(this, value);
	}
	template <typename T = bool> T get_NewLineOnAttributes() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF800C))(this);
	}
	template <typename T = uintptr_t> T get_NewLineHandling() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF801C))(this);
	}
	template <typename T = bool> T get_OmitXmlDeclaration() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF7FDC))(this);
	}
	template <typename T = void> T set_OmitXmlDeclaration(bool value) {
		return ((T (*)(XmlWriterSettings*, bool))(Il2CppBase() + 0x4D00CB8))(this, value);
	}
	template <typename T = uintptr_t> T get_NamespaceHandling() {
		return ((T (*)(XmlWriterSettings*))(Il2CppBase() + 0x4CF8024))(this);
	}

};

}
