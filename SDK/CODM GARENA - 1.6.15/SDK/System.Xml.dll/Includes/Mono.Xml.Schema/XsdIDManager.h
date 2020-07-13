#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdIDManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdIDManager"));
	}

	template <typename T = uintptr_t> T& idList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& missingIDReferences() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& thisElementId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_MissingIDReferences() {
		return ((T (*)(XsdIDManager*))(Il2CppBase() + 0x4E2522C))(this);
	}
	template <typename T = void> T OnStartElement() {
		return ((T (*)(XsdIDManager*))(Il2CppBase() + 0x4E252CC))(this);
	}
	template <typename T = Il2CppString*> T AssessEachAttributeIdentityConstraint(uintptr_t dt, uintptr_t parsedValue, Il2CppString* elementName) {
		return ((T (*)(XsdIDManager*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4E252D8))(this, dt, parsedValue, elementName);
	}
	template <typename T = bool> T HasMissingIDReferences() {
		return ((T (*)(XsdIDManager*))(Il2CppBase() + 0x4E25698))(this);
	}
	template <typename T = Il2CppString*> T GetMissingIDString() {
		return ((T (*)(XsdIDManager*))(Il2CppBase() + 0x4E256D8))(this);
	}

};

}
