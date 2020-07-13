#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XObject"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& line() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T System_Xml_IXmlLineInfo_get_LineNumber() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51CDD24))(this);
	}
	template <typename T = int32_t> T System_Xml_IXmlLineInfo_get_LinePosition() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51CDD34))(this);
	}
	template <typename T = bool> T System_Xml_IXmlLineInfo_HasLineInfo() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51CDD44))(this);
	}
	template <typename T = uintptr_t> T get_Document() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51C6B00))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51C8ABC))(this);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51CB924))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t node) {
		return ((T (*)(XObject*, uintptr_t))(Il2CppBase() + 0x51C50C8))(this, node);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51CDD2C))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(XObject*))(Il2CppBase() + 0x51CDD3C))(this);
	}

};

}
