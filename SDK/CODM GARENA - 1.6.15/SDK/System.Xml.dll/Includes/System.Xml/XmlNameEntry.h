#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNameEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNameEntry"));
	}

	template <typename T = Il2CppString*> T& Prefix() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LocalName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& NS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Hash() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& prefixed_name_cache() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Update(Il2CppString* prefix, Il2CppString* local, Il2CppString* ns) {
		return ((T (*)(XmlNameEntry*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37DE350))(this, prefix, local, ns);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(XmlNameEntry*, uintptr_t))(Il2CppBase() + 0x37DE3CC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(XmlNameEntry*))(Il2CppBase() + 0x37DE4EC))(this);
	}
	template <typename T = Il2CppString*> T GetPrefixedName(uintptr_t owner) {
		return ((T (*)(XmlNameEntry*, uintptr_t))(Il2CppBase() + 0x37C5760))(this, owner);
	}

};

}
