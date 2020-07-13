#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ParentIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ParentIterator"));
	}

	template <typename T = bool> T& canMove() {
		return *(T*)((uintptr_t)this + 0x1D);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ParentIterator*))(Il2CppBase() + 0x4D0DE74))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(ParentIterator*))(Il2CppBase() + 0x4D0DF08))(this);
	}

};

}
