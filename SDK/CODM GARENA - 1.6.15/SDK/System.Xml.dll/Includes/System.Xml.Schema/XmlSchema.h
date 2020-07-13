#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchema
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchema"));
	}

	template <typename T = uintptr_t> T& attributeFormDefault() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& attributeGroups() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& blockDefault() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& elementFormDefault() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& elements() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& finalDefault() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& groups() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& includes() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& notations() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& schemaTypes() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& targetNamespace() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& version() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& schemas() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& missedSubComponents() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& compilationItems() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_AttributeFormDefault() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2814))(this);
	}
	template <typename T = uintptr_t> T get_BlockDefault() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA281C))(this);
	}
	template <typename T = uintptr_t> T get_FinalDefault() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2824))(this);
	}
	template <typename T = uintptr_t> T get_ElementFormDefault() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA282C))(this);
	}
	template <typename T = Il2CppString*> T get_TargetNamespace() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2A7E294))(this);
	}
	template <typename T = void> T set_TargetNamespace(Il2CppString* value) {
		return ((T (*)(XmlSchema*, Il2CppString*))(Il2CppBase() + 0x2A7E29C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Version() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2834))(this);
	}
	template <typename T = uintptr_t> T get_Includes() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA283C))(this);
	}
	template <typename T = uintptr_t> T get_Items() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2844))(this);
	}
	template <typename T = bool> T get_IsCompiled() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA284C))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2940))(this);
	}
	template <typename T = uintptr_t> T get_AttributeGroups() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2948))(this);
	}
	template <typename T = uintptr_t> T get_SchemaTypes() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2950))(this);
	}
	template <typename T = uintptr_t> T get_Elements() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2958))(this);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2960))(this);
	}
	template <typename T = uintptr_t> T get_Groups() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2968))(this);
	}
	template <typename T = uintptr_t> T get_Notations() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2970))(this);
	}
	template <typename T = uintptr_t> T get_NamedIdentities() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA2978))(this);
	}
	template <typename T = uintptr_t> T get_Schemas() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA29A4))(this);
	}
	template <typename T = uintptr_t> T get_IDCollection() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA29AC))(this);
	}
	template <typename T = void> T CompileSubset(uintptr_t handler, uintptr_t col, uintptr_t resolver, uintptr_t handledUris) {
		return ((T (*)(XmlSchema*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA29D8))(this, handler, col, resolver, handledUris);
	}
	template <typename T = void> T SetParent() {
		return ((T (*)(XmlSchema*))(Il2CppBase() + 0x2AA37C4))(this);
	}
	template <typename T = void> T DoCompile(uintptr_t handler, uintptr_t handledUris, uintptr_t col, uintptr_t resolver) {
		return ((T (*)(XmlSchema*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA2AC4))(this, handler, handledUris, col, resolver);
	}
	template <typename T = Il2CppString*> T GetResolvedUri(uintptr_t resolver, Il2CppString* relativeUri) {
		return ((T (*)(XmlSchema*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2AA4524))(this, resolver, relativeUri);
	}
	template <typename T = void> T ProcessExternal(uintptr_t handler, uintptr_t handledUris, uintptr_t resolver, uintptr_t ext, uintptr_t col) {
		return ((T (*)(XmlSchema*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA38B8))(this, handler, handledUris, resolver, ext, col);
	}
	template <typename T = void> T AddExternalComponentsTo(uintptr_t s, uintptr_t items, uintptr_t handler, uintptr_t handledUris, uintptr_t resolver, uintptr_t col) {
		return ((T (*)(XmlSchema*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA4770))(this, s, items, handler, handledUris, resolver, col);
	}
	template <typename T = bool> T IsNamespaceAbsent(Il2CppString* ns) {
		return ((T (*)(XmlSchema*, Il2CppString*))(Il2CppBase() + 0x2AA4AE8))(this, ns);
	}
	template <typename T = uintptr_t> T FindAttribute(uintptr_t name) {
		return ((T (*)(XmlSchema*, uintptr_t))(Il2CppBase() + 0x2AA4B18))(this, name);
	}
	template <typename T = uintptr_t> T FindAttributeGroup(uintptr_t name) {
		return ((T (*)(XmlSchema*, uintptr_t))(Il2CppBase() + 0x2AA4EF8))(this, name);
	}
	template <typename T = uintptr_t> T FindElement(uintptr_t name) {
		return ((T (*)(XmlSchema*, uintptr_t))(Il2CppBase() + 0x2AA52D8))(this, name);
	}
	template <typename T = uintptr_t> T FindSchemaType(uintptr_t name) {
		return ((T (*)(XmlSchema*, uintptr_t))(Il2CppBase() + 0x2AA56B8))(this, name);
	}
	template <typename T = void> T Validate(uintptr_t handler) {
		return ((T (*)(XmlSchema*, uintptr_t))(Il2CppBase() + 0x2AA5A98))(this, handler);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t rdr, uintptr_t validationEventHandler) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7B9E8))(0, rdr, validationEventHandler);
	}
	template <typename T = void> static T ReadAttributes(uintptr_t schema, uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA6D6C))(0, schema, reader, h);
	}
	template <typename T = void> static T ReadContent(uintptr_t schema, uintptr_t reader, uintptr_t h) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA770C))(0, schema, reader, h);
	}

};

}
