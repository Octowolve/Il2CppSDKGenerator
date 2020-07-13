#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class SimpleIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "SimpleIterator"));
	}

	template <typename T = uintptr_t> T& _nav() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& skipfirst() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(SimpleIterator*))(Il2CppBase() + 0x4D0EFAC))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SimpleIterator*))(Il2CppBase() + 0x4D0F01C))(this);
	}

};

}
