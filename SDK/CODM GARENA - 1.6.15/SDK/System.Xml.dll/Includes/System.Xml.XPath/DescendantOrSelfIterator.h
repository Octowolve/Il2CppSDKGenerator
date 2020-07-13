#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class DescendantOrSelfIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "DescendantOrSelfIterator"));
	}

	template <typename T = int32_t> T& _depth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(DescendantOrSelfIterator*))(Il2CppBase() + 0x4D02D7C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(DescendantOrSelfIterator*))(Il2CppBase() + 0x4D02E0C))(this);
	}

};

}
