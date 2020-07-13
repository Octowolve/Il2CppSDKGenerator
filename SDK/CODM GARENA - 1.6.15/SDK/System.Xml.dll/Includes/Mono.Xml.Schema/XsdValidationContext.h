#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdValidationContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdValidationContext"));
	}

	template <typename T = uintptr_t> T& xsi_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& element_stack() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_XsiType() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A7714C))(this);
	}
	template <typename T = void> T set_XsiType(uintptr_t value) {
		return ((T (*)(XsdValidationContext*, uintptr_t))(Il2CppBase() + 0x2A737D4))(this, value);
	}
	template <typename T = uintptr_t> T get_Element() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A74124))(this);
	}
	template <typename T = void> T PushCurrentElement(uintptr_t element) {
		return ((T (*)(XsdValidationContext*, uintptr_t))(Il2CppBase() + 0x2A738C8))(this, element);
	}
	template <typename T = void> T PopCurrentElement() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A73A90))(this);
	}
	template <typename T = uintptr_t> T get_ActualType() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A71CFC))(this);
	}
	template <typename T = bool> T get_IsInvalid() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A73818))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A6DC18))(this);
	}
	template <typename T = void> T EvaluateStartElement(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidationContext*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2A737DC))(this, localName, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdValidationContext*))(Il2CppBase() + 0x2A73A5C))(this);
	}

};

}
