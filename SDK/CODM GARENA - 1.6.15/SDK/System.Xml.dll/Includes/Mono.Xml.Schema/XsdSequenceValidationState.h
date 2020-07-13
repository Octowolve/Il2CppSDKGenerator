#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdSequenceValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdSequenceValidationState"));
	}

	template <typename T = uintptr_t> T& seq() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& currentAutomata() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& emptiable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdSequenceValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A6EA64))(this, name, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdSequenceValidationState*))(Il2CppBase() + 0x2A6F0AC))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdSequenceValidationState*))(Il2CppBase() + 0x2A6F5DC))(this);
	}

};

}
