#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaObject"));
	}

	template <typename T = int32_t> T& lineNumber() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& linePosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& sourceUri() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& namespaces() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& unhandledAttributeList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isCompiled() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& errorCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CompilationId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ValidationId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isRedefineChild() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isRedefinedComponent() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> T& redefinedObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XmlSchemaObject*))(Il2CppBase() + 0x378F8BC))(this);
	}
	template <typename T = void> T set_LineNumber(int32_t value) {
		return ((T (*)(XmlSchemaObject*, int32_t))(Il2CppBase() + 0x378EA6C))(this, value);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XmlSchemaObject*))(Il2CppBase() + 0x378F8C4))(this);
	}
	template <typename T = void> T set_LinePosition(int32_t value) {
		return ((T (*)(XmlSchemaObject*, int32_t))(Il2CppBase() + 0x378EBAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_SourceUri() {
		return ((T (*)(XmlSchemaObject*))(Il2CppBase() + 0x378F8CC))(this);
	}
	template <typename T = void> T set_SourceUri(Il2CppString* value) {
		return ((T (*)(XmlSchemaObject*, Il2CppString*))(Il2CppBase() + 0x378EBB4))(this, value);
	}
	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(XmlSchemaObject*))(Il2CppBase() + 0x378F8D4))(this);
	}
	template <typename T = void> T set_Parent(uintptr_t value) {
		return ((T (*)(XmlSchemaObject*, uintptr_t))(Il2CppBase() + 0x378F8DC))(this, value);
	}
	template <typename T = uintptr_t> T get_AncestorSchema() {
		return ((T (*)(XmlSchemaObject*))(Il2CppBase() + 0x378D8C8))(this);
	}
	template <typename T = void> T SetParent(uintptr_t parent) {
		return ((T (*)(XmlSchemaObject*, uintptr_t))(Il2CppBase() + 0x378F8E4))(this, parent);
	}
	template <typename T = uintptr_t> T get_Namespaces() {
		return ((T (*)(XmlSchemaObject*))(Il2CppBase() + 0x378F8EC))(this);
	}
	template <typename T = void> T error(uintptr_t handle, Il2CppString* message) {
		return ((T (*)(XmlSchemaObject*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x378D7E4))(this, handle, message);
	}
	template <typename T = void> T warn(uintptr_t handle, Il2CppString* message) {
		return ((T (*)(XmlSchemaObject*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x378F93C))(this, handle, message);
	}
	template <typename T = void> static T error_1(uintptr_t handle, Il2CppString* message, uintptr_t innerException) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x378E8F4))(0, handle, message, innerException);
	}
	template <typename T = void> static T error_2(uintptr_t handle, Il2CppString* message, uintptr_t innerException, uintptr_t xsobj, uintptr_t sender) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x378F8F4))(0, handle, message, innerException, xsobj, sender);
	}
	template <typename T = void> static T warn_1(uintptr_t handle, Il2CppString* message, uintptr_t innerException, uintptr_t xsobj, uintptr_t sender) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x378F978))(0, handle, message, innerException, xsobj, sender);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x378F9C4))(this, h, schema);
	}
	template <typename T = int32_t> T Validate(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x378F9CC))(this, h, schema);
	}
	template <typename T = bool> T IsValidated(uintptr_t validationId) {
		return ((T (*)(XmlSchemaObject*, uintptr_t))(Il2CppBase() + 0x378F9D4))(this, validationId);
	}
	template <typename T = void> T CopyInfo(uintptr_t obj) {
		return ((T (*)(XmlSchemaObject*, uintptr_t))(Il2CppBase() + 0x378FABC))(this, obj);
	}

};

}
