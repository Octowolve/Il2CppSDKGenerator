#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class SortedIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "SortedIterator"));
	}

	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SortedIterator*))(Il2CppBase() + 0x4D0FABC))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(SortedIterator*))(Il2CppBase() + 0x4D0FB4C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SortedIterator*))(Il2CppBase() + 0x4D0FBAC))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SortedIterator*))(Il2CppBase() + 0x4D0FC94))(this);
	}

};

}
