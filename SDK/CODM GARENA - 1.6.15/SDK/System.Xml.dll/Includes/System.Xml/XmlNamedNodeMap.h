#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNamedNodeMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNamedNodeMap"));
	}

	template <typename T = uintptr_t> static T& emptyEnumerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& nodeList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& readOnly() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_NodeList() {
		return ((T (*)(XmlNamedNodeMap*))(Il2CppBase() + 0x37DDE04))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(XmlNamedNodeMap*))(Il2CppBase() + 0x37DDEA4))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlNamedNodeMap*))(Il2CppBase() + 0x37DDEC4))(this);
	}
	template <typename T = uintptr_t> T GetNamedItem(Il2CppString* name) {
		return ((T (*)(XmlNamedNodeMap*, Il2CppString*))(Il2CppBase() + 0x37DDF98))(this, name);
	}
	template <typename T = uintptr_t> T GetNamedItem_1(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlNamedNodeMap*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37DE10C))(this, localName, namespaceURI);
	}
	template <typename T = uintptr_t> T RemoveNamedItem(Il2CppString* localName, Il2CppString* namespaceURI) {
		return ((T (*)(XmlNamedNodeMap*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37C6D4C))(this, localName, namespaceURI);
	}
	template <typename T = uintptr_t> T SetNamedItem(uintptr_t node) {
		return ((T (*)(XmlNamedNodeMap*, uintptr_t))(Il2CppBase() + 0x37DE2F0))(this, node);
	}
	template <typename T = uintptr_t> T SetNamedItem_1(uintptr_t node, int32_t pos, bool raiseEvent) {
		return ((T (*)(XmlNamedNodeMap*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x37C755C))(this, node, pos, raiseEvent);
	}
	template <typename T = uintptr_t> T get_Nodes() {
		return ((T (*)(XmlNamedNodeMap*))(Il2CppBase() + 0x37C66A4))(this);
	}

};

}
