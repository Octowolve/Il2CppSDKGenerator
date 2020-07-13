#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdAnyValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdAnyValidationState"));
	}

	template <typename T = uintptr_t> T& any() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdAnyValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1EEB4))(this, name, ns);
	}
	template <typename T = bool> T MatchesNamespace(Il2CppString* ns) {
		return ((T (*)(XsdAnyValidationState*, Il2CppString*))(Il2CppBase() + 0x4E1F188))(this, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdAnyValidationState*))(Il2CppBase() + 0x4E1F4E8))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdAnyValidationState*))(Il2CppBase() + 0x4E1F4F8))(this);
	}

};

}
