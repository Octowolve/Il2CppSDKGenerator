#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlWriter"));
	}

	template <typename T = uintptr_t> T& settings() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x4CFF9FC))(this);
	}
	template <typename T = uintptr_t> T get_Settings() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x4CFFA10))(this);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x4CFFAB8))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x4CFFAC0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> static T Create(Il2CppString* file, uintptr_t settings) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CFFAC8))(0, file, settings);
	}
	template <typename T = uintptr_t> static T Create_1(uintptr_t writer, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CFFCD0))(0, writer, settings);
	}
	template <typename T = uintptr_t> static T Create_2(uintptr_t writer, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CFFDA4))(0, writer, settings);
	}
	template <typename T = uintptr_t> static T CreateTextWriter(uintptr_t writer, uintptr_t settings, bool closeOutput) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4CFFBE4))(0, writer, settings, closeOutput);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(XmlWriter*, bool))(Il2CppBase() + 0x4CFFE5C))(this, disposing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T LookupPrefix(Il2CppString* ns) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, ns);
	}
	template <typename T = void> T WriteAttribute(uintptr_t reader, bool defattr) {
		return ((T (*)(XmlWriter*, uintptr_t, bool))(Il2CppBase() + 0x4CFFE6C))(this, reader, defattr);
	}
	template <typename T = void> T WriteAttributeString(Il2CppString* localName, Il2CppString* value) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFFFF0))(this, localName, value);
	}
	template <typename T = void> T WriteAttributeString_1(Il2CppString* localName, Il2CppString* ns, Il2CppString* value) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4D00144))(this, localName, ns, value);
	}
	template <typename T = void> T WriteAttributeString_2(Il2CppString* prefix, Il2CppString* localName, Il2CppString* ns, Il2CppString* value) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4D000C8))(this, prefix, localName, ns, value);
	}
	template <typename T = void> T WriteCData(Il2CppString* text) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T WriteDocType(Il2CppString* name, Il2CppString* pubid, Il2CppString* sysid, Il2CppString* subset) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, name, pubid, sysid, subset);
	}
	template <typename T = void> T WriteEndAttribute() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WriteEndDocument() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WriteEndElement() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WriteEntityRef(Il2CppString* name) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T WriteFullEndElement() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WriteName(Il2CppString* name) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x4D00220))(this, name);
	}
	template <typename T = void> T WriteNameInternal(Il2CppString* name) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x4D00224))(this, name);
	}
	template <typename T = void> T WriteNode(uintptr_t reader, bool defattr) {
		return ((T (*)(XmlWriter*, uintptr_t, bool))(Il2CppBase() + 0x4D00320))(this, reader, defattr);
	}
	template <typename T = void> T WriteProcessingInstruction(Il2CppString* name, Il2CppString* text) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, name, text);
	}
	template <typename T = void> T WriteRaw(Il2CppString* data) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T WriteStartAttribute(Il2CppString* prefix, Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, prefix, localName, ns);
	}
	template <typename T = void> T WriteStartDocument() {
		return ((T (*)(XmlWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WriteStartDocument_1(bool standalone) {
		return ((T (*)(XmlWriter*, bool))(Il2CppBase() + 0x0))(this, standalone);
	}
	template <typename T = void> T WriteStartElement(Il2CppString* prefix, Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XmlWriter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, prefix, localName, ns);
	}
	template <typename T = void> T WriteString(Il2CppString* text) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T WriteWhitespace(Il2CppString* ws) {
		return ((T (*)(XmlWriter*, Il2CppString*))(Il2CppBase() + 0x0))(this, ws);
	}

};

}
