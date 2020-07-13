#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class BaseIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "BaseIterator"));
	}

	template <typename T = uintptr_t> T& _nsm() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_NamespaceManager() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D01810))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D020A8))(this);
	}
	template <typename T = int32_t> T get_ComparablePosition() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D020B0))(this);
	}
	template <typename T = int32_t> T get_CurrentPosition() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D0212C))(this);
	}
	template <typename T = void> T SetPosition(int32_t pos) {
		return ((T (*)(BaseIterator*, int32_t))(Il2CppBase() + 0x4D02134))(this, pos);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D0213C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T PeekNext() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D0217C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BaseIterator*))(Il2CppBase() + 0x4D021E4))(this);
	}

};

}
