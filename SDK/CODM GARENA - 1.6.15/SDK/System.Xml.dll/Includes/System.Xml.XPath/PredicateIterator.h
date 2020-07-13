#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class PredicateIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "PredicateIterator"));
	}

	template <typename T = uintptr_t> T& _iter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _pred() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& resType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PredicateIterator*))(Il2CppBase() + 0x4D0E40C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(PredicateIterator*))(Il2CppBase() + 0x4D0E49C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(PredicateIterator*))(Il2CppBase() + 0x4D0E698))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(PredicateIterator*))(Il2CppBase() + 0x4D0E6F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PredicateIterator*))(Il2CppBase() + 0x4D0E728))(this);
	}

};

}
