#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class WrapperIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "WrapperIterator"));
	}

	template <typename T = uintptr_t> T& iter() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(WrapperIterator*))(Il2CppBase() + 0x4D10190))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(WrapperIterator*))(Il2CppBase() + 0x4D10220))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(WrapperIterator*))(Il2CppBase() + 0x4D10254))(this);
	}

};

}
