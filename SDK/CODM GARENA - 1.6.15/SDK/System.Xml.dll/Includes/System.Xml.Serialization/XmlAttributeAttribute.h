#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlAttributeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlAttributeAttribute"));
	}

	template <typename T = Il2CppString*> T& attributeName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& dataType() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_DataType(Il2CppString* value) {
		return ((T (*)(XmlAttributeAttribute*, Il2CppString*))(Il2CppBase() + 0x37C4B68))(this, value);
	}

};

}
