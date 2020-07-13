#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlElementAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlElementAttribute"));
	}

	template <typename T = Il2CppString*> T& elementName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(XmlElementAttribute*, uintptr_t))(Il2CppBase() + 0x37C4BD0))(this, value);
	}

};

}
