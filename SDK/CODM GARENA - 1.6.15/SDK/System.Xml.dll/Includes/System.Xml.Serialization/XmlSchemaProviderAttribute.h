#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlSchemaProviderAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlSchemaProviderAttribute"));
	}

	template <typename T = Il2CppString*> T& _methodName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _isAny() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_IsAny(bool value) {
		return ((T (*)(XmlSchemaProviderAttribute*, bool))(Il2CppBase() + 0x37C4C5C))(this, value);
	}

};

}
