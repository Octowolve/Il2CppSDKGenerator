#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class AxisIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "AxisIterator"));
	}

	template <typename T = uintptr_t> T& _iter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _test() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AxisIterator*))(Il2CppBase() + 0x4D0193C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(AxisIterator*))(Il2CppBase() + 0x4D019CC))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(AxisIterator*))(Il2CppBase() + 0x4D01A6C))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(AxisIterator*))(Il2CppBase() + 0x4D01AC8))(this);
	}

};

}
