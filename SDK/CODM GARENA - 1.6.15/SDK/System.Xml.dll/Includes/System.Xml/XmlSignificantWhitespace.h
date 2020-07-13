#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlSignificantWhitespace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlSignificantWhitespace"));
	}


	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlSignificantWhitespace*))(Il2CppBase() + 0x4CF5244))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlSignificantWhitespace*))(Il2CppBase() + 0x4CF52BC))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlSignificantWhitespace*))(Il2CppBase() + 0x4CF5334))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlSignificantWhitespace*))(Il2CppBase() + 0x4CF533C))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlSignificantWhitespace*))(Il2CppBase() + 0x4CF5344))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlSignificantWhitespace*, Il2CppString*))(Il2CppBase() + 0x4CF5354))(this, value);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlSignificantWhitespace*))(Il2CppBase() + 0x4CF5468))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlSignificantWhitespace*, bool))(Il2CppBase() + 0x4CF5470))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlSignificantWhitespace*, uintptr_t))(Il2CppBase() + 0x4CF5538))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlSignificantWhitespace*, uintptr_t))(Il2CppBase() + 0x4CF553C))(this, w);
	}

};

}
