#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ChildIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ChildIterator"));
	}

	template <typename T = uintptr_t> T& _nav() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ChildIterator*))(Il2CppBase() + 0x4D0288C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(ChildIterator*))(Il2CppBase() + 0x4D0291C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ChildIterator*))(Il2CppBase() + 0x4D02990))(this);
	}

};

}
