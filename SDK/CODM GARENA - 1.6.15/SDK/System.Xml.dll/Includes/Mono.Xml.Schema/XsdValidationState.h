#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdValidationState"));
	}

	template <typename T = uintptr_t> static T& invalid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& occured() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& manager() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T get_Invalid() {
		return ((T (*)(void *))(Il2CppBase() + 0x2A6EFDC))(0);
	}
	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* localName, Il2CppString* ns) {
		return ((T (*)(XsdValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, localName, ns);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdValidationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdValidationState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(XsdValidationState*))(Il2CppBase() + 0x2A6F08C))(this);
	}
	template <typename T = int32_t> T get_Occured() {
		return ((T (*)(XsdValidationState*))(Il2CppBase() + 0x2A6F094))(this);
	}
	template <typename T = int32_t> T get_OccuredInternal() {
		return ((T (*)(XsdValidationState*))(Il2CppBase() + 0x2A6F09C))(this);
	}
	template <typename T = void> T set_OccuredInternal(int32_t value) {
		return ((T (*)(XsdValidationState*, int32_t))(Il2CppBase() + 0x2A6F0A4))(this, value);
	}

};

}
