#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlComment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlComment"));
	}


	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlComment*))(Il2CppBase() + 0x37C95FC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlComment*))(Il2CppBase() + 0x37C9674))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlComment*))(Il2CppBase() + 0x37C96EC))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlComment*))(Il2CppBase() + 0x37C96F4))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlComment*, bool))(Il2CppBase() + 0x37C96FC))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlComment*, uintptr_t))(Il2CppBase() + 0x37C97C0))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlComment*, uintptr_t))(Il2CppBase() + 0x37C97C4))(this, w);
	}

};

}
