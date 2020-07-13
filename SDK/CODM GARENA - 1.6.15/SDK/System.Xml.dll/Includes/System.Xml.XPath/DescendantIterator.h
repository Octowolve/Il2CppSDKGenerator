#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class DescendantIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "DescendantIterator"));
	}

	template <typename T = int32_t> T& _depth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(DescendantIterator*))(Il2CppBase() + 0x4D02AC8))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(DescendantIterator*))(Il2CppBase() + 0x4D02B58))(this);
	}

};

}
