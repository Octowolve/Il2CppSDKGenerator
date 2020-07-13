#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdAppendedValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdAppendedValidationState"));
	}

	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rest() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdAppendedValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E1F784))(this, name, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdAppendedValidationState*))(Il2CppBase() + 0x4E1F950))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdAppendedValidationState*))(Il2CppBase() + 0x4E1F9F4))(this);
	}

};

}
