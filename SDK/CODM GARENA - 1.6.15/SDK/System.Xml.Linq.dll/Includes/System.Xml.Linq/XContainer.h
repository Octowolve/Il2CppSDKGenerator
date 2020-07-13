#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XContainer"));
	}

	template <typename T = uintptr_t> T& first() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& last() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_FirstNode() {
		return ((T (*)(XContainer*))(Il2CppBase() + 0x51C4448))(this);
	}
	template <typename T = void> T set_FirstNode(uintptr_t value) {
		return ((T (*)(XContainer*, uintptr_t))(Il2CppBase() + 0x51C4450))(this, value);
	}
	template <typename T = uintptr_t> T get_LastNode() {
		return ((T (*)(XContainer*))(Il2CppBase() + 0x51C4458))(this);
	}
	template <typename T = void> T set_LastNode(uintptr_t value) {
		return ((T (*)(XContainer*, uintptr_t))(Il2CppBase() + 0x51C4460))(this, value);
	}
	template <typename T = void> T CheckChildType(uintptr_t o, bool addFirst) {
		return ((T (*)(XContainer*, uintptr_t, bool))(Il2CppBase() + 0x51C4468))(this, o, addFirst);
	}
	template <typename T = void> T Add(uintptr_t content) {
		return ((T (*)(XContainer*, uintptr_t))(Il2CppBase() + 0x51C48E4))(this, content);
	}
	template <typename T = void> T AddNode(uintptr_t n) {
		return ((T (*)(XContainer*, uintptr_t))(Il2CppBase() + 0x51C4FB0))(this, n);
	}
	template <typename T = bool> T OnAddingObject(uintptr_t o, bool rejectAttribute, uintptr_t refNode, bool addFirst) {
		return ((T (*)(XContainer*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x51C50E0))(this, o, rejectAttribute, refNode, addFirst);
	}
	template <typename T = void*> T Nodes() {
		return ((T (*)(XContainer*))(Il2CppBase() + 0x51C50E8))(this);
	}

};

}
