#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ListIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ListIterator"));
	}

	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ListIterator*))(Il2CppBase() + 0x4D0C650))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(ListIterator*))(Il2CppBase() + 0x4D0C6E0))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ListIterator*))(Il2CppBase() + 0x4D0C7FC))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ListIterator*))(Il2CppBase() + 0x4D0C9E4))(this);
	}

};

}
