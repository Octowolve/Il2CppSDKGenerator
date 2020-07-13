#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class PrecedingIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "PrecedingIterator"));
	}

	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& started() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PrecedingIterator*))(Il2CppBase() + 0x4D0DF6C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(PrecedingIterator*))(Il2CppBase() + 0x4D0DFFC))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(PrecedingIterator*))(Il2CppBase() + 0x4D0E138))(this);
	}

};

}
