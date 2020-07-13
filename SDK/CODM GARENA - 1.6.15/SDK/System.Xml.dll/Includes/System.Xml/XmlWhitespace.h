#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlWhitespace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlWhitespace"));
	}


	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlWhitespace*))(Il2CppBase() + 0x4CFF6B0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlWhitespace*))(Il2CppBase() + 0x4CFF728))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlWhitespace*))(Il2CppBase() + 0x4CFF7A0))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlWhitespace*))(Il2CppBase() + 0x4CFF7A8))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlWhitespace*))(Il2CppBase() + 0x4CFF7B0))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlWhitespace*, Il2CppString*))(Il2CppBase() + 0x4CFF7C0))(this, value);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlWhitespace*))(Il2CppBase() + 0x4CFF8DC))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlWhitespace*, bool))(Il2CppBase() + 0x4CFF8E4))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlWhitespace*, uintptr_t))(Il2CppBase() + 0x4CFF9AC))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlWhitespace*, uintptr_t))(Il2CppBase() + 0x4CFF9B0))(this, w);
	}

};

}
