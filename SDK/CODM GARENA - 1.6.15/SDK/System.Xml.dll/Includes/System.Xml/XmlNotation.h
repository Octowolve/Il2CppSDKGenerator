#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNotation"));
	}

	template <typename T = Il2CppString*> T& localName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& publicId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& systemId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& prefix() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(XmlNotation*))(Il2CppBase() + 0x37E3710))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XmlNotation*))(Il2CppBase() + 0x37E3718))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XmlNotation*))(Il2CppBase() + 0x37E3720))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XmlNotation*))(Il2CppBase() + 0x37E3870))(this);
	}
	template <typename T = uintptr_t> T CloneNode(bool deep) {
		return ((T (*)(XmlNotation*, bool))(Il2CppBase() + 0x37E3878))(this, deep);
	}
	template <typename T = void> T WriteContentTo(uintptr_t w) {
		return ((T (*)(XmlNotation*, uintptr_t))(Il2CppBase() + 0x37E3920))(this, w);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XmlNotation*, uintptr_t))(Il2CppBase() + 0x37E3924))(this, w);
	}

};

}
