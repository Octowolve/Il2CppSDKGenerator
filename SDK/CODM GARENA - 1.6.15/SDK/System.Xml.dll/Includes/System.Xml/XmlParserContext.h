#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlParserContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlParserContext"));
	}

	template <typename T = Il2CppString*> T& baseURI() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& docTypeName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& encoding() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& internalSubset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& namespaceManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& publicID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& systemID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& xmlLang() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& xmlSpace() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& contextItems() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& contextItemCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& dtd() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E404C))(this);
	}
	template <typename T = void> T set_BaseURI(Il2CppString* value) {
		return ((T (*)(XmlParserContext*, Il2CppString*))(Il2CppBase() + 0x37E3EA4))(this, value);
	}
	template <typename T = void> T set_DocTypeName(Il2CppString* value) {
		return ((T (*)(XmlParserContext*, Il2CppString*))(Il2CppBase() + 0x37E3B54))(this, value);
	}
	template <typename T = uintptr_t> T get_Dtd() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37D4DA0))(this);
	}
	template <typename T = void> T set_Dtd(uintptr_t value) {
		return ((T (*)(XmlParserContext*, uintptr_t))(Il2CppBase() + 0x37E4054))(this, value);
	}
	template <typename T = void> T set_Encoding(uintptr_t value) {
		return ((T (*)(XmlParserContext*, uintptr_t))(Il2CppBase() + 0x37E405C))(this, value);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E4064))(this);
	}
	template <typename T = void> T set_InternalSubset(Il2CppString* value) {
		return ((T (*)(XmlParserContext*, Il2CppString*))(Il2CppBase() + 0x37E3DD0))(this, value);
	}
	template <typename T = uintptr_t> T get_NamespaceManager() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37BCF8C))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E4094))(this);
	}
	template <typename T = void> T set_PublicId(Il2CppString* value) {
		return ((T (*)(XmlParserContext*, Il2CppString*))(Il2CppBase() + 0x37E3C28))(this, value);
	}
	template <typename T = void> T set_SystemId(Il2CppString* value) {
		return ((T (*)(XmlParserContext*, Il2CppString*))(Il2CppBase() + 0x37E3CFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E409C))(this);
	}
	template <typename T = void> T set_XmlLang(Il2CppString* value) {
		return ((T (*)(XmlParserContext*, Il2CppString*))(Il2CppBase() + 0x37E3F78))(this, value);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E40A4))(this);
	}
	template <typename T = void> T set_XmlSpace(uintptr_t value) {
		return ((T (*)(XmlParserContext*, uintptr_t))(Il2CppBase() + 0x37E40AC))(this, value);
	}
	template <typename T = void> T PushScope() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E40B4))(this);
	}
	template <typename T = void> T PopScope() {
		return ((T (*)(XmlParserContext*))(Il2CppBase() + 0x37E4204))(this);
	}

};

}
