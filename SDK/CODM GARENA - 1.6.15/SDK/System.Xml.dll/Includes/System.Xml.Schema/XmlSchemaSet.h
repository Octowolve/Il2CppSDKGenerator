#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaSet"));
	}

	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& xmlResolver() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& schemas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& elements() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& types() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& idCollection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& namedIdentities() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& settings() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isCompiled() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CompilationId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ValidationEventHandler() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T add_ValidationEventHandler(uintptr_t value) {
		return ((T (*)(XmlSchemaSet*, uintptr_t))(Il2CppBase() + 0x3799F44))(this, value);
	}
	template <typename T = void> T remove_ValidationEventHandler(uintptr_t value) {
		return ((T (*)(XmlSchemaSet*, uintptr_t))(Il2CppBase() + 0x379A0D0))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A25C))(this);
	}
	template <typename T = uintptr_t> T get_GlobalAttributes() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A290))(this);
	}
	template <typename T = uintptr_t> T get_GlobalElements() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A32C))(this);
	}
	template <typename T = uintptr_t> T get_GlobalTypes() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A3C8))(this);
	}
	template <typename T = bool> T get_IsCompiled() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A464))(this);
	}
	template <typename T = uintptr_t> T get_CompilationSettings() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A46C))(this);
	}
	template <typename T = uintptr_t> T get_IDCollection() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A474))(this);
	}
	template <typename T = uintptr_t> T get_NamedIdentities() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A514))(this);
	}
	template <typename T = uintptr_t> T Add(uintptr_t schema) {
		return ((T (*)(XmlSchemaSet*, uintptr_t))(Il2CppBase() + 0x379A5B0))(this, schema);
	}
	template <typename T = void> T Compile() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A610))(this);
	}
	template <typename T = void> T ClearGlobalComponents() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379B430))(this);
	}
	template <typename T = void> T AddGlobalComponents(uintptr_t schema) {
		return ((T (*)(XmlSchemaSet*, uintptr_t))(Il2CppBase() + 0x379B484))(this, schema);
	}
	template <typename T = bool> T Contains(Il2CppString* targetNamespace) {
		return ((T (*)(XmlSchemaSet*, Il2CppString*))(Il2CppBase() + 0x379BE6C))(this, targetNamespace);
	}
	template <typename T = bool> T Contains_1(uintptr_t targetNamespace) {
		return ((T (*)(XmlSchemaSet*, uintptr_t))(Il2CppBase() + 0x379C290))(this, targetNamespace);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(XmlSchemaSet*, uintptr_t, int32_t))(Il2CppBase() + 0x379C56C))(this, array, index);
	}
	template <typename T = Il2CppString*> T GetSafeNs(Il2CppString* ns) {
		return ((T (*)(XmlSchemaSet*, Il2CppString*))(Il2CppBase() + 0x379C1D0))(this, ns);
	}
	template <typename T = void> T ResetCompile() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379A604))(this);
	}
	template <typename T = uintptr_t> T Schemas() {
		return ((T (*)(XmlSchemaSet*))(Il2CppBase() + 0x379C5A0))(this);
	}
	template <typename T = uintptr_t> T Schemas_1(Il2CppString* targetNamespace) {
		return ((T (*)(XmlSchemaSet*, Il2CppString*))(Il2CppBase() + 0x379C5A8))(this, targetNamespace);
	}
	template <typename T = bool> T MissedSubComponents(Il2CppString* targetNamespace) {
		return ((T (*)(XmlSchemaSet*, Il2CppString*))(Il2CppBase() + 0x379C94C))(this, targetNamespace);
	}

};

}
