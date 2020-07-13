#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class IXmlElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "IXmlElement"));
	}


	template <typename T = void> T SetAttributeNode(uintptr_t attribute) {
		return ((T (*)(IXmlElement*, uintptr_t))(Il2CppBase() + 0x0))(this, attribute);
	}
	template <typename T = Il2CppString*> T GetPrefixOfNamespace(Il2CppString* namespaceUri) {
		return ((T (*)(IXmlElement*, Il2CppString*))(Il2CppBase() + 0x0))(this, namespaceUri);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(IXmlElement*))(Il2CppBase() + 0x0))(this);
	}

};

}
