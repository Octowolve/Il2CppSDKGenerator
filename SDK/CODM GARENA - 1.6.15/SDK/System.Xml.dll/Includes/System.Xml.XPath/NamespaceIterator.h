#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class NamespaceIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "NamespaceIterator"));
	}


	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(NamespaceIterator*))(Il2CppBase() + 0x4D0CAE0))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(NamespaceIterator*))(Il2CppBase() + 0x4D0CB74))(this);
	}

};

}
