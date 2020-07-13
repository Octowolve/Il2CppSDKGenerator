#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlTextWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlTextWriter"));
	}

	template <typename T = uintptr_t> static T& unmarked_utf8encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& escaped_text_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& escaped_attr_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& base_stream() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& writer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& preserver() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& preserved_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& is_preserved_xmlns() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& allow_doc_fragment() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& close_output_stream() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& ignore_encoding() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = bool> T& namespaces() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& xmldecl_state() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& check_character_validity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& newline_handling() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& is_document_entity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& node_state() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& nsmanager() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& open_count() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& elements() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& new_local_namespaces() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& explicit_nsdecls() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& namespace_handling() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& indent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& indent_count() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = char> T& indent_char() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& indent_string() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& newline() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& indent_attributes() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = char> T& quote_char() {
		return *(T*)((uintptr_t)this + 0x6E);
	}
	template <typename T = bool> T& v2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map53() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map54() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Initialize(uintptr_t writer) {
		return ((T (*)(XmlTextWriter*, uintptr_t))(Il2CppBase() + 0x4CF79E4))(this, writer);
	}
	template <typename T = void> T set_Formatting(uintptr_t value) {
		return ((T (*)(XmlTextWriter*, uintptr_t))(Il2CppBase() + 0x4CF7FEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_XmlLang() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF80D4))(this);
	}
	template <typename T = uintptr_t> T get_XmlSpace() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF8138))(this);
	}
	template <typename T = Il2CppString*> T LookupPrefix(Il2CppString* namespaceUri) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CF819C))(this, namespaceUri);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF8428))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF84D4))(this);
	}
	template <typename T = void> T WriteStartDocument() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF8508))(this);
	}
	template <typename T = void> T WriteStartDocument_1(bool standalone) {
		return ((T (*)(XmlTextWriter*, bool))(Il2CppBase() + 0x4CF88B4))(this, standalone);
	}
	template <typename T = void> T WriteStartDocumentCore(bool outputStd, bool standalone) {
		return ((T (*)(XmlTextWriter*, bool, bool))(Il2CppBase() + 0x4CF852C))(this, outputStd, standalone);
	}
	template <typename T = void> T WriteEndDocument() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF8A80))(this);
	}
	template <typename T = void> T WriteDocType(Il2CppString* name, Il2CppString* pubid, Il2CppString* sysid, Il2CppString* subset) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CF8B7C))(this, name, pubid, sysid, subset);
	}
	template <typename T = void> T WriteStartElement(Il2CppString* prefix, Il2CppString* localName, Il2CppString* namespaceUri) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CF8FD4))(this, prefix, localName, namespaceUri);
	}
	template <typename T = void> T CloseStartElement() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF97F8))(this);
	}
	template <typename T = void> T CloseStartElementCore() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF9854))(this);
	}
	template <typename T = void> T WriteEndElement() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CFA0B4))(this);
	}
	template <typename T = void> T WriteFullEndElement() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CFA390))(this);
	}
	template <typename T = void> T WriteEndElementCore(bool full) {
		return ((T (*)(XmlTextWriter*, bool))(Il2CppBase() + 0x4CFA0BC))(this, full);
	}
	template <typename T = void> T WriteStartAttribute(Il2CppString* prefix, Il2CppString* localName, Il2CppString* namespaceUri) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFA3A4))(this, prefix, localName, namespaceUri);
	}
	template <typename T = Il2CppString*> T DetermineAttributePrefix(Il2CppString* prefix, Il2CppString* local, Il2CppString* ns) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFAC08))(this, prefix, local, ns);
	}
	template <typename T = Il2CppString*> T MockupPrefix(Il2CppString* ns, bool skipLookup) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, bool))(Il2CppBase() + 0x4CFAEF4))(this, ns, skipLookup);
	}
	template <typename T = void> T WriteEndAttribute() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CFB36C))(this);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFBDB4))(this, text);
	}
	template <typename T = void> T WriteProcessingInstruction(Il2CppString* name, Il2CppString* text) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFC1D8))(this, name, text);
	}
	template <typename T = void> T WriteWhitespace(Il2CppString* text) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFC504))(this, text);
	}
	template <typename T = void> T WriteCData(Il2CppString* text) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFC684))(this, text);
	}
	template <typename T = void> T WriteString(Il2CppString* text) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFCA94))(this, text);
	}
	template <typename T = void> T WriteRaw(Il2CppString* raw) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFCB6C))(this, raw);
	}
	template <typename T = void> T WriteEntityRef(Il2CppString* name) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFCC48))(this, name);
	}
	template <typename T = void> T WriteName(Il2CppString* name) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFCDE0))(this, name);
	}
	template <typename T = void> T WriteIndent() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF8FC8))(this);
	}
	template <typename T = void> T WriteIndentEndElement() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CFA398))(this);
	}
	template <typename T = void> T WriteIndentAttribute() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CFAEA4))(this);
	}
	template <typename T = bool> T WriteIndentCore(int32_t nestFix, bool attribute) {
		return ((T (*)(XmlTextWriter*, int32_t, bool))(Il2CppBase() + 0x4CFCEFC))(this, nestFix, attribute);
	}
	template <typename T = void> T OutputAutoStartDocument() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CF8FB0))(this);
	}
	template <typename T = void> T ShiftStateTopLevel(Il2CppString* occured, bool allowAttribute, bool dontCheckXmlDecl, bool isCharacter) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x4CFC0FC))(this, occured, allowAttribute, dontCheckXmlDecl, isCharacter);
	}
	template <typename T = void> T CheckMixedContentState() {
		return ((T (*)(XmlTextWriter*))(Il2CppBase() + 0x4CFD018))(this);
	}
	template <typename T = void> T ShiftStateContent(Il2CppString* occured, bool allowAttribute) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, bool))(Il2CppBase() + 0x4CFC874))(this, occured, allowAttribute);
	}
	template <typename T = void> T WriteEscapedString(Il2CppString* text, bool isAttribute) {
		return ((T (*)(XmlTextWriter*, Il2CppString*, bool))(Il2CppBase() + 0x4CF9F1C))(this, text, isAttribute);
	}
	template <typename T = void> T WriteCheckedString(Il2CppString* s) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CFC938))(this, s);
	}
	template <typename T = void> T WriteCheckedBuffer(Il2CppArray<uintptr_t>* text, int32_t idx, int32_t length) {
		return ((T (*)(XmlTextWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4CFD078))(this, text, idx, length);
	}
	template <typename T = void> T WriteEscapedBuffer(Il2CppArray<uintptr_t>* text, int32_t index, int32_t length, bool isAttribute) {
		return ((T (*)(XmlTextWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x4CFD418))(this, text, index, length, isAttribute);
	}
	template <typename T = uintptr_t> T ArgumentError(Il2CppString* msg) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CF8388))(this, msg);
	}
	template <typename T = uintptr_t> T InvalidOperation(Il2CppString* msg) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CF89E0))(this, msg);
	}
	template <typename T = uintptr_t> T StateError(Il2CppString* occured) {
		return ((T (*)(XmlTextWriter*, Il2CppString*))(Il2CppBase() + 0x4CF88D8))(this, occured);
	}

};

}
