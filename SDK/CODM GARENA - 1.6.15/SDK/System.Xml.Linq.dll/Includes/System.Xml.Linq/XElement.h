#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XElement"));
	}

	template <typename T = void*> static T& emptySequence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& attr_first() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& attr_last() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& explicit_is_empty() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(XElement*))(Il2CppBase() + 0x51C6DF8))(this);
	}
	template <typename T = uintptr_t> T get_Name() {
		return ((T (*)(XElement*))(Il2CppBase() + 0x51C6C04))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XElement*))(Il2CppBase() + 0x51C6F98))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XElement*))(Il2CppBase() + 0x51C6FA0))(this);
	}
	template <typename T = void*> T Attributes() {
		return ((T (*)(XElement*))(Il2CppBase() + 0x51C6C74))(this);
	}
	template <typename T = void> T SetAttributeObject(uintptr_t a) {
		return ((T (*)(XElement*, uintptr_t))(Il2CppBase() + 0x51C74EC))(this, a);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XElement*, uintptr_t))(Il2CppBase() + 0x51C75C0))(this, w);
	}
	template <typename T = uintptr_t> T GetNamespaceOfPrefix(Il2CppString* prefix) {
		return ((T (*)(XElement*, Il2CppString*))(Il2CppBase() + 0x51C82EC))(this, prefix);
	}
	template <typename T = Il2CppString*> T GetPrefixOfNamespace(uintptr_t ns) {
		return ((T (*)(XElement*, uintptr_t))(Il2CppBase() + 0x51C8B74))(this, ns);
	}
	template <typename T = void*> T GetPrefixOfNamespaceCore(uintptr_t ns) {
		return ((T (*)(XElement*, uintptr_t))(Il2CppBase() + 0x51C8EF8))(this, ns);
	}
	template <typename T = bool> T OnAddingObject(uintptr_t o, bool rejectAttribute, uintptr_t refNode, bool addFirst) {
		return ((T (*)(XElement*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x51C8FB8))(this, o, rejectAttribute, refNode, addFirst);
	}

};

}
