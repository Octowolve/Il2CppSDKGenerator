#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdElementValidationState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdElementValidationState"));
	}

	template <typename T = uintptr_t> T& element() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(XsdElementValidationState*))(Il2CppBase() + 0x4E225BC))(this);
	}
	template <typename T = Il2CppString*> T get_NS() {
		return ((T (*)(XsdElementValidationState*))(Il2CppBase() + 0x4E225F8))(this);
	}
	template <typename T = uintptr_t> T EvaluateStartElement(Il2CppString* name, Il2CppString* ns) {
		return ((T (*)(XsdElementValidationState*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4E22634))(this, name, ns);
	}
	template <typename T = uintptr_t> T CheckOccurence(uintptr_t maybeSubstituted) {
		return ((T (*)(XsdElementValidationState*, uintptr_t))(Il2CppBase() + 0x4E2296C))(this, maybeSubstituted);
	}
	template <typename T = bool> T EvaluateEndElement() {
		return ((T (*)(XsdElementValidationState*))(Il2CppBase() + 0x4E22BF4))(this);
	}
	template <typename T = bool> T EvaluateIsEmptiable() {
		return ((T (*)(XsdElementValidationState*))(Il2CppBase() + 0x4E22C04))(this);
	}

};

}
