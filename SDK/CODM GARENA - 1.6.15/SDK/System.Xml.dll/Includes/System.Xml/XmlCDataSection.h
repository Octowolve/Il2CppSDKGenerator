#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlCDataSection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlCDataSection"));
	}


	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlCDataSection*))(Il2CppBase() + 0x37C7EB4))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlCDataSection*))(Il2CppBase() + 0x37C7F2C))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlCDataSection*))(Il2CppBase() + 0x37C7FA4))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XmlCDataSection*))(Il2CppBase() + 0x37C7FAC))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlCDataSection*, bool))(Il2CppBase() + 0x37C7FBC))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlCDataSection*, uintptr_t))(Il2CppBase() + 0x37C8080))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlCDataSection*, uintptr_t))(Il2CppBase() + 0x37C8084))(this, w);
	}

};

}
