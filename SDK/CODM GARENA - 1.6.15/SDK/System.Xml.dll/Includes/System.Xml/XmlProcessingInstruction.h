#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlProcessingInstruction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlProcessingInstruction"));
	}

	template <typename T = Il2CppString*> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& data() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppString*> T get_Data() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37D3574))(this);
	}
	template <typename T = Il2CppString*> T get_InnerText() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37E4A54))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37E4A5C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37E4A64))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37E4A6C))(this);
	}
	template <typename T = uintptr_t> T get_XPathNodeType() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37E4A74))(this);
	}
	template <typename T = Il2CppString*> T get_Target() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37D356C))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XmlProcessingInstruction*))(Il2CppBase() + 0x37E4A7C))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(XmlProcessingInstruction*, Il2CppString*))(Il2CppBase() + 0x37E4A84))(this, value);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlProcessingInstruction*, bool))(Il2CppBase() + 0x37E4B54))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlProcessingInstruction*, uintptr_t))(Il2CppBase() + 0x37E4C14))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlProcessingInstruction*, uintptr_t))(Il2CppBase() + 0x37E4C18))(this, w);
	}

};

}
