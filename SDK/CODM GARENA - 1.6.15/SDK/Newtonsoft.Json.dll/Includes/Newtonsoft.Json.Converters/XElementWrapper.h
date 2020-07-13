#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XElementWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XElementWrapper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _attributes() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Element() {
		return ((T (*)(XElementWrapper*))(Il2CppBase() + 0x4096DA8))(this);
	}
	template <typename T = void> T SetAttributeNode(uintptr_t attribute) {
		return ((T (*)(XElementWrapper*, uintptr_t))(Il2CppBase() + 0x4096E2C))(this, attribute);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Attributes() {
		return ((T (*)(XElementWrapper*))(Il2CppBase() + 0x4096EEC))(this);
	}
	template <typename T = uintptr_t> T AppendChild(uintptr_t newChild) {
		return ((T (*)(XElementWrapper*, uintptr_t))(Il2CppBase() + 0x4097A00))(this, newChild);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XElementWrapper*))(Il2CppBase() + 0x4097A1C))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XElementWrapper*))(Il2CppBase() + 0x4097A48))(this);
	}
	template <typename T = Il2CppString*> T get_NamespaceUri() {
		return ((T (*)(XElementWrapper*))(Il2CppBase() + 0x4097A84))(this);
	}
	template <typename T = Il2CppString*> T GetPrefixOfNamespace(Il2CppString* namespaceUri) {
		return ((T (*)(XElementWrapper*, Il2CppString*))(Il2CppBase() + 0x4097924))(this, namespaceUri);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(XElementWrapper*))(Il2CppBase() + 0x4097AC0))(this);
	}

};

}
