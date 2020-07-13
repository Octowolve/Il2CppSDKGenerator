#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class FollowingIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "FollowingIterator"));
	}

	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x1D);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FollowingIterator*))(Il2CppBase() + 0x4D0C27C))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(FollowingIterator*))(Il2CppBase() + 0x4D0C310))(this);
	}

};

}
