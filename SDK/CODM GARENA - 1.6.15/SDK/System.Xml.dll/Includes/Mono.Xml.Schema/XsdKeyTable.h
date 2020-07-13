#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdKeyTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdKeyTable"));
	}

	template <typename T = bool> T& alwaysTrue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& selector() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& qname() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& refKeyName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Entries() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FinishedEntries() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& StartDepth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ReferencedKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_SourceSchemaIdentity() {
		return ((T (*)(XsdKeyTable*))(Il2CppBase() + 0x4E2759C))(this);
	}
	template <typename T = uintptr_t> T get_Selector() {
		return ((T (*)(XsdKeyTable*))(Il2CppBase() + 0x4E265BC))(this);
	}
	template <typename T = void> T Reset(uintptr_t source) {
		return ((T (*)(XsdKeyTable*, uintptr_t))(Il2CppBase() + 0x4E28230))(this, source);
	}
	template <typename T = uintptr_t> T SelectorMatches(uintptr_t qnameStack, int32_t depth) {
		return ((T (*)(XsdKeyTable*, uintptr_t, int32_t))(Il2CppBase() + 0x4E28328))(this, qnameStack, depth);
	}

};

}
