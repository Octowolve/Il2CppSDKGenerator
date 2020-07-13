#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdAllValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdAllValidationState"));
	}

	template <typename T = uintptr_t> T& all() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& consumed() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdAllValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1DDAC))(this, localName, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdAllValidationState*))(Il2CppBase() + 0x4E1E0C4))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdAllValidationState*))(Il2CppBase() + 0x4E1E48C))(this);
	}

};

}
