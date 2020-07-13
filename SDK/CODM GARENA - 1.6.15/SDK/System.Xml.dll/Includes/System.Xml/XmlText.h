#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlText"));
	}


	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlText*))(Il2CppBase() + 0x4CF59E8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlText*))(Il2CppBase() + 0x4CF5A60))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlText*))(Il2CppBase() + 0x4CF5AD8))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlText*))(Il2CppBase() + 0x4CF5AE0))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlText*))(Il2CppBase() + 0x4CF5AE8))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlText*, Il2CppString*))(Il2CppBase() + 0x4CF5AF8))(this, value);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlText*))(Il2CppBase() + 0x4CF5B08))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlText*, bool))(Il2CppBase() + 0x4CF5B10))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlText*, uintptr_t))(Il2CppBase() + 0x4CF5B78))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlText*, uintptr_t))(Il2CppBase() + 0x4CF5B7C))(this, w);
	}

};

}
