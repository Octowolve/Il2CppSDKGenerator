#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlEntity"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& NDATA() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& publicId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& systemId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& baseUri() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& lastLinkedChild() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& contentAlreadySet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T System_Xml_IHasXmlChildNode_get_LastLinkedChild() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA5C8))(this);
	}
	template <typename T = void> T System_Xml_IHasXmlChildNode_set_LastLinkedChild(uintptr_t value) {
		return ((T (*)(XmlEntity*, uintptr_t))(Il2CppBase() + 0x37DA880))(this, value);
	}
	template <typename T = Il2CppString*> T get_BaseURI() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA888))(this);
	}
	template <typename T = Il2CppString*> T get_InnerText() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA890))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA894))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA89C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA8A4))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA8AC))(this);
	}
	template <typename T = Il2CppString*> T get_SystemId() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA8B4))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlEntity*, bool))(Il2CppBase() + 0x37DA8BC))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlEntity*, uintptr_t))(Il2CppBase() + 0x37DA964))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlEntity*, uintptr_t))(Il2CppBase() + 0x37DA968))(this, w);
	}
	template <typename T = void> T SetEntityContent() {
		return ((T (*)(XmlEntity*))(Il2CppBase() + 0x37DA608))(this);
	}

};

}
