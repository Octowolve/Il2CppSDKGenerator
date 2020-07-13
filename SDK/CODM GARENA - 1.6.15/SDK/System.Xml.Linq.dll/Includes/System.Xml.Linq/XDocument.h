#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XDocument
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XDocument"));
	}

	template <typename T = uintptr_t> T& xmldecl() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_Declaration() {
		return ((T (*)(XDocument*))(Il2CppBase() + 0x51C59D0))(this);
	}
	template <typename T = void> T set_Declaration(uintptr_t value) {
		return ((T (*)(XDocument*, uintptr_t))(Il2CppBase() + 0x51C59D8))(this, value);
	}
	template <typename T = uintptr_t> T get_DocumentType() {
		return ((T (*)(XDocument*))(Il2CppBase() + 0x51C59E0))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XDocument*))(Il2CppBase() + 0x51C5D34))(this);
	}
	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(XDocument*))(Il2CppBase() + 0x51C5D3C))(this);
	}
	template <typename T = void> static T ValidateWhitespace(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x51C6090))(0, s);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XDocument*, uintptr_t))(Il2CppBase() + 0x51C61A4))(this, w);
	}
	template <typename T = bool> T OnAddingObject(uintptr_t obj, bool rejectAttribute, uintptr_t refNode, bool addFirst) {
		return ((T (*)(XDocument*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x51C6570))(this, obj, rejectAttribute, refNode, addFirst);
	}
	template <typename T = void> T VerifyAddedNode(uintptr_t node, bool addFirst) {
		return ((T (*)(XDocument*, uintptr_t, bool))(Il2CppBase() + 0x51C6588))(this, node, addFirst);
	}

};

}
