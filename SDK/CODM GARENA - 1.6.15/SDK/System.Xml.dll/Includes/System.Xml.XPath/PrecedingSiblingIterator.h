#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class PrecedingSiblingIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "PrecedingSiblingIterator"));
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
		return ((T (*)(PrecedingSiblingIterator*))(Il2CppBase() + 0x4D0E184))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(PrecedingSiblingIterator*))(Il2CppBase() + 0x4D0E214))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(PrecedingSiblingIterator*))(Il2CppBase() + 0x4D0E32C))(this);
	}

};

}
