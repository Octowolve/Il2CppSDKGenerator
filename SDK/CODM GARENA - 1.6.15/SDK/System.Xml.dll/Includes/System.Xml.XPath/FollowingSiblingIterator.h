#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class FollowingSiblingIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "FollowingSiblingIterator"));
	}


	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FollowingSiblingIterator*))(Il2CppBase() + 0x4D0C484))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(FollowingSiblingIterator*))(Il2CppBase() + 0x4D0C518))(this);
	}

};

}
