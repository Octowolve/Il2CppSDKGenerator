#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlRootAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlRootAttribute"));
	}

	template <typename T = Il2CppString*> T& elementName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isNullable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ns() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T set_Namespace(Il2CppString* value) {
		return ((T (*)(XmlRootAttribute*, Il2CppString*))(Il2CppBase() + 0x37C4C34))(this, value);
	}

};

}
