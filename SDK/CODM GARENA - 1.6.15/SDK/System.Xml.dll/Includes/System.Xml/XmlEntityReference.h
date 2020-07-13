#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlEntityReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlEntityReference"));
	}

	template <typename T = Il2CppString*> T& entityName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& lastLinkedChild() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlChildNode_get_LastLinkedChild() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB1BC))(this);
	}
	template <typename T = void> T System_Xml_IHasXmlChildNode_set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(XmlEntityReference*, uintptr_t))(Il2CppBase() + 0x37DB1C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB1CC))(this);
	}
	template <typename T = uintptr_t> T get_Entity() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB2DC))(this);
	}
	template <typename T = Il2CppString*> T get_ChildrenBaseURI() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB408))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB6F4))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB6FC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB704))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB70C))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB714))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlEntityReference*, Il2CppString*))(Il2CppBase() + 0x37DB71C))(this, value);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DB7C0))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlEntityReference*, bool))(Il2CppBase() + 0x37DB7C8))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlEntityReference*, uintptr_t))(Il2CppBase() + 0x37DB88C))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlEntityReference*, uintptr_t))(Il2CppBase() + 0x37DB950))(this, w);
	}
	template <typename T = void> T SetReferencedEntityContent() {
		return ((T (*)(XmlEntityReference*))(Il2CppBase() + 0x37DBA48))(this);
	}

};

}
