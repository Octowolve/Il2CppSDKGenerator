#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdInvalidValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdInvalidValidationState"));
	}


	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdInvalidValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E260A8))(this, name, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdInvalidValidationState*))(Il2CppBase() + 0x4E260AC))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdInvalidValidationState*))(Il2CppBase() + 0x4E260B4))(this);
	}

};

}
