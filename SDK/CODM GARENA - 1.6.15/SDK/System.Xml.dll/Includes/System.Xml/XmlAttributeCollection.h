#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlAttributeCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlAttributeCollection"));
	}

	template <typename T = uintptr_t> T& ownerElement() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ownerDocument() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(XmlAttributeCollection*))(Il2CppBase() + 0x37C657C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(XmlAttributeCollection*))(Il2CppBase() + 0x37C6584))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(XmlAttributeCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x37C6588))(this, array, index);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlAttributeCollection*))(Il2CppBase() + 0x37C66A8))(this);
	}
	template <typename T = uintptr_t> T get_ItemOf(Il2CppString* name) {
		return ((T (*)(XmlAttributeCollection*, Il2CppString*))(Il2CppBase() + 0x37C66DC))(this, name);
	}
	template <typename T = uintptr_t> T get_ItemOf_1(int32_t i) {
		return ((T (*)(XmlAttributeCollection*, int32_t))(Il2CppBase() + 0x37C6778))(this, i);
	}
	template <typename T = uintptr_t> T get_ItemOf_2(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlAttributeCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37C682C))(this, localName, namespaceURI);
	}
	template <typename T = uintptr_t> T Remove(uintptr_t node) {
		return ((T (*)(XmlAttributeCollection*, uintptr_t))(Il2CppBase() + 0x37C68D0))(this, node);
	}
	template <typename T = void> T RemoveAll() {
		return ((T (*)(XmlAttributeCollection*))(Il2CppBase() + 0x37C73E0))(this);
	}
	template <typename T = uintptr_t> T SetNamedItem(uintptr_t node) {
		return ((T (*)(XmlAttributeCollection*, uintptr_t))(Il2CppBase() + 0x37C70D0))(this, node);
	}
	template <typename T = void> T AdjustIdenticalAttributes(uintptr_t node, uintptr_t existing) {
		return ((T (*)(XmlAttributeCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37C7A04))(this, node, existing);
	}
	template <typename T = uintptr_t> T RemoveIdenticalAttribute(uintptr_t existing) {
		return ((T (*)(XmlAttributeCollection*, uintptr_t))(Il2CppBase() + 0x37C6F58))(this, existing);
	}

};

}
