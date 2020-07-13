#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdChoiceValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdChoiceValidationState"));
	}

	template <typename T = uintptr_t> T& choice() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& emptiable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& emptiableComputed() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdChoiceValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E207A4))(this, localName, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdChoiceValidationState*))(Il2CppBase() + 0x4E20C40))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdChoiceValidationState*))(Il2CppBase() + 0x4E20EFC))(this);
	}

};

}
