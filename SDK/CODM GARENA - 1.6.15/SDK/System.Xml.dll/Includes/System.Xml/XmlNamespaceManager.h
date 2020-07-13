#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNamespaceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNamespaceManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& decls() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& declPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& scopes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& scopePos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& defaultNamespace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& nameTable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& internalAtomizedNames() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map28() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T InitData() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DE930))(this);
	}
	template <typename T = void> T GrowDecls() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DE9EC))(this);
	}
	template <typename T = void> T GrowScopes() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DEAC4))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultNamespace() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DEB9C))(this);
	}
	template <typename T = uintptr_t> T get_NameTable() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DEC5C))(this);
	}
	template <typename T = void> T AddNamespace(Il2CppString* prefix, Il2CppString* uri) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37DEC64))(this, prefix, uri);
	}
	template <typename T = void> T AddNamespace_1(Il2CppString* prefix, Il2CppString* uri, bool atomizedNames) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37DEC80))(this, prefix, uri, atomizedNames);
	}
	template <typename T = Il2CppString*> static T IsValidDeclaration(Il2CppString* prefix, Il2CppString* uri, bool throwException) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37DF010))(0, prefix, uri, throwException);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DF360))(this);
	}
	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*))(Il2CppBase() + 0x37DF6F0))(this, prefix);
	}
	template <typename T = Il2CppString*> T LookupNamespace_1(Il2CppString* prefix, bool atomizedNames) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, bool))(Il2CppBase() + 0x37BCF5C))(this, prefix, atomizedNames);
	}
	template <typename T = Il2CppString*> T LookupPrefix(Il2CppString* uri) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*))(Il2CppBase() + 0x37DFB24))(this, uri);
	}
	template <typename T = bool> T CompareString(Il2CppString* s1, Il2CppString* s2, bool atomizedNames) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37DFA50))(this, s1, s2, atomizedNames);
	}
	template <typename T = Il2CppString*> T LookupPrefix_1(Il2CppString* uri, bool atomizedName) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, bool))(Il2CppBase() + 0x37DFB44))(this, uri, atomizedName);
	}
	template <typename T = Il2CppString*> T LookupPrefixExclusive(Il2CppString* uri, bool atomizedName) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, bool))(Il2CppBase() + 0x37DFDE8))(this, uri, atomizedName);
	}
	template <typename T = Il2CppString*> T LookupPrefixCore(Il2CppString* uri, bool atomizedName, bool excludeOverriden) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, bool, bool))(Il2CppBase() + 0x37DFB60))(this, uri, atomizedName, excludeOverriden);
	}
	template <typename T = bool> T IsOverriden(int32_t idx) {
		return ((T (*)(XmlNamespaceManager*, int32_t))(Il2CppBase() + 0x37DFE04))(this, idx);
	}
	template <typename T = bool> T PopScope() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DFEB4))(this);
	}
	template <typename T = void> T PushScope() {
		return ((T (*)(XmlNamespaceManager*))(Il2CppBase() + 0x37DFF78))(this);
	}
	template <typename T = void> T RemoveNamespace(Il2CppString* prefix, Il2CppString* uri) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37E0028))(this, prefix, uri);
	}
	template <typename T = void> T RemoveNamespace_1(Il2CppString* prefix, Il2CppString* uri, bool atomizedNames) {
		return ((T (*)(XmlNamespaceManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x37E0044))(this, prefix, uri, atomizedNames);
	}

};

}
