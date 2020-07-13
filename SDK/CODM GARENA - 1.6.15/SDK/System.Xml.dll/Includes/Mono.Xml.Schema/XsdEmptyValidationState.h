#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdEmptyValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdEmptyValidationState"));
	}


	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdEmptyValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E22E80))(this, name, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdEmptyValidationState*))(Il2CppBase() + 0x4E22F20))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdEmptyValidationState*))(Il2CppBase() + 0x4E22F28))(this);
	}

};

}
