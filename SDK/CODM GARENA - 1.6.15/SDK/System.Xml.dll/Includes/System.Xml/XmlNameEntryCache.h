#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNameEntryCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNameEntryCache"));
	}

	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& dummy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cacheBuffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T GetAtomizedPrefixedName(Il2CppString* prefix, Il2CppString* local) {
		return ((T (*)(XmlNameEntryCache*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37DE4F4))(this, prefix, local);
	}
	template <typename T = uintptr_t> T Add(Il2CppString* prefix, Il2CppString* local, Il2CppString* ns, bool atomic) {
		return ((T (*)(XmlNameEntryCache*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37C5454))(this, prefix, local, ns, atomic);
	}
	template <typename T = uintptr_t> T GetInternal(Il2CppString* prefix, Il2CppString* local, Il2CppString* ns, bool atomic) {
		return ((T (*)(XmlNameEntryCache*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37DE794))(this, prefix, local, ns, atomic);
	}

};

}
