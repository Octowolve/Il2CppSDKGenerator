#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlDocumentType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlDocumentType"));
	}

	template <typename T = uintptr_t> T& entities() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& notations() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& dtd() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ImportFromDTD() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D8B2C))(this);
	}
	template <typename T = uintptr_t> T get_DTD() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37C62BC))(this);
	}
	template <typename T = uintptr_t> T get_Entities() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D4DA8))(this);
	}
	template <typename T = Il2CppString*> T get_InternalSubset() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D9598))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D95C4))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D95CC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D95F8))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D9624))(this);
	}
	template <typename T = Il2CppString*> T get_PublicId() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D962C))(this);
	}
	template <typename T = Il2CppString*> T get_SystemId() {
		return ((T (*)(XmlDocumentType*))(Il2CppBase() + 0x37D9658))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlDocumentType*, bool))(Il2CppBase() + 0x37D9684))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlDocumentType*, uintptr_t))(Il2CppBase() + 0x37D973C))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlDocumentType*, uintptr_t))(Il2CppBase() + 0x37D9740))(this, w);
	}

};

}
