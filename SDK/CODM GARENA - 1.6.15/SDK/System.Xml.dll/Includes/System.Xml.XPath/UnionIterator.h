#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class UnionIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "UnionIterator"));
	}

	template <typename T = uintptr_t> T& _left() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _right() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& keepLeft() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& keepRight() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& _current() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UnionIterator*))(Il2CppBase() + 0x4D0FDF0))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(UnionIterator*))(Il2CppBase() + 0x4D0FE80))(this);
	}
	template <typename T = void> T SetCurrent(uintptr_t iter) {
		return ((T (*)(UnionIterator*, uintptr_t))(Il2CppBase() + 0x4D10070))(this, iter);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(UnionIterator*))(Il2CppBase() + 0x4D10114))(this);
	}

};

}
