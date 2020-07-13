#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class SelfIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "SelfIterator"));
	}


	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SelfIterator*))(Il2CppBase() + 0x4D0EEB8))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(SelfIterator*))(Il2CppBase() + 0x4D0EF4C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SelfIterator*))(Il2CppBase() + 0x4D0EF78))(this);
	}

};

}
