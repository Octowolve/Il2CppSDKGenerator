#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XmlElementWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XmlElementWrapper"));
	}

	template <typename T = uintptr_t> T& _element() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T SetAttributeNode(uintptr_t attribute) {
		return ((T (*)(XmlElementWrapper*, uintptr_t))(Il2CppBase() + 0x4098838))(this, attribute);
	}
	template <typename T = Il2CppString*> T GetPrefixOfNamespace(Il2CppString* namespaceUri) {
		return ((T (*)(XmlElementWrapper*, Il2CppString*))(Il2CppBase() + 0x4098920))(this, namespaceUri);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(XmlElementWrapper*))(Il2CppBase() + 0x4098954))(this);
	}

};

}
