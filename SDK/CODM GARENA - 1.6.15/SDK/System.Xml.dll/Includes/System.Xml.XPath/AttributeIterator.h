#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class AttributeIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "AttributeIterator"));
	}


	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AttributeIterator*))(Il2CppBase() + 0x4D016C0))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(AttributeIterator*))(Il2CppBase() + 0x4D01754))(this);
	}

};

}
