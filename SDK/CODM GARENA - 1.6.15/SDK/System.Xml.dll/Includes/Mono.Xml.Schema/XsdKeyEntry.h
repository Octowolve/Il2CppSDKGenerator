#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdKeyEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdKeyEntry"));
	}

	template <typename T = int32_t> T& StartDepth() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SelectorLineNumber() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SelectorLinePosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SelectorHasLineInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& KeyFields() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& KeyRefFound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OwnerSequence() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& keyFound() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T get_KeyFound() {
		return ((T (*)(XsdKeyEntry*))(Il2CppBase() + 0x4E263F8))(this);
	}
	template <typename T = void> T Init(uintptr_t keyseq, int32_t depth, uintptr_t li) {
		return ((T (*)(XsdKeyEntry*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E260FC))(this, keyseq, depth, li);
	}
	template <typename T = bool> T CompareIdentity(uintptr_t other) {
		return ((T (*)(XsdKeyEntry*, uintptr_t))(Il2CppBase() + 0x4E266F4))(this, other);
	}
	template <typename T = void> T ProcessMatch(bool isAttribute, uintptr_t qnameStack, uintptr_t sender, uintptr_t nameTable, Il2CppString* sourceUri, uintptr_t schemaType, uintptr_t nsResolver, uintptr_t li, int32_t depth, Il2CppString* attrName, Il2CppString* attrNS, uintptr_t attrValue, bool isXsiNil, uintptr_t currentKeyFieldConsumers) {
		return ((T (*)(XsdKeyEntry*, bool, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x4E268A0))(this, isAttribute, qnameStack, sender, nameTable, sourceUri, schemaType, nsResolver, li, depth, attrName, attrNS, attrValue, isXsiNil, currentKeyFieldConsumers);
	}

};

}
